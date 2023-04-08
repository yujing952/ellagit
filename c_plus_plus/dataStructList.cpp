#include <iostream>
using namespace std;
#include <stdio.h>
#include"stdlib.h"
#include <string>

// 2.1 create Node �����ڵ㣨�ṹ�壩
struct Node
{
	int a;     // data
	struct Node* next; // pointer which point to node
} node ;

//2.2 ȫ�ֶ�������ͷβָ�� �������
struct Node* head = NULL;
struct Node* end = NULL;


// declaration
void AddListTill(int a);
void ScanList();
struct Node* FindNode(int a);
void FreeList();
void AddListRand(int index,int a);
void DeleteListTail();
void DeleteListHead();
void DeleteListRand(int a);


int main(void)
{
	struct Node *pFind;
	
	// create 5 nodes
	for(int i = 0; i < 6; i++)
	{
		AddListTill(i);
		
	}
	
//	AddListRand(4, 14);
//	DeleteListTail();
	DeleteListRand(4);		//ɾ��4�ڵ�
	ScanList();				//�����������
	FreeList();				//ɾ������
	
	pFind = FindNode(5);
	
	if(pFind != NULL)
	{
		cout << "find the node: " << pFind->a << endl;
	}
		
	
	
	return 0;
}


// 2.3 ��������,ʵ��������������һ�����ݣ�β��ӣ�����
void AddListTill(int a)
{
	//malloc a new node
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	
	temp->a = a;
	temp->next = NULL;
	
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		end->next = temp;
	}
	end = temp;
}

//2.4 �������� ����
void ScanList()
{
	struct Node* temp = head;
	while(temp != NULL)
	{
		cout << temp->a << endl;
		temp = temp->next;
	}
}

//2.5 ��ѯָ���Ľڵ� ������ һ�����ң�
struct Node* FindNode(int a)
{
	struct Node* temp = head;
	while(temp != NULL)
	{
		if(a == temp->a)
		{
			return temp;
		}
		temp = temp->next;
	}
	
	// no found
	return NULL;
}

//2.6 ������� ��ȫ��ɾ��
void FreeList()
{
	struct Node* temp = head;
	while(temp != NULL)
	{
		struct Node* pt =temp;
		temp = temp->next;
		free(pt);
	}
	
	head = NULL;
	end = NULL;	
	
}

//2.7 ��ָ��λ�ò���ڵ� ����ָ��λ����
void AddListRand(int index,int a)
{
	if(NULL == head)
	{
		cout << "����û�нڵ�" << endl;
		return;
	}
	
	struct Node* pt = FindNode(index);
	if(NULL == pt)
	{
		cout << "û��ָ���ڵ�" << endl;
		return;
	}
	
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->a = a;
	temp->next = NULL;
	
	if(pt == end)
	{
		end->next = temp;
		end = temp;
	}
	else
	{
		temp->next = pt->next;
		pt->next = temp;
		
	}
}

//2.8βɾ�� - ɾ
void DeleteListTail()
{
	if(NULL == end)
	{
		cout << "The List is empty, no nedd delete" << endl;
		return ;
	}
	else if(head == end)
	{
		free(head);
		head = NULL;
		end = NULL;
	}
	else
	{
		struct Node* temp = head;
		while(temp->next != end)
		{
			temp = temp->next;
		}
		
		free(end);
		
		end = temp;
		end->next = NULL;
		
	}

}

// 2.9 Delete head ɾ��ͷ ��ɾ
void DeleteListHead()
{
	struct Node* temp = head;
	if(NULL == head)
	{
		cout << "the List is empty" << endl;
		return ;
	}
	head = head->next;
	free(temp);
	
}

// 2.10 ɾ��ָ���ڵ�
void DeleteListRand(int a)
{
	if(NULL == head)
	{
		cout << "The List is empty" << endl;
		return;
	}
	
	struct Node* temp = FindNode(a);
	
	if(NULL == temp)
	{
		cout << "No this node in List" << endl;
		return;
	}
	
	if(head == end)
	{
		free(head);
		head = NULL;
		end = NULL;
	}
	else if(head->next == end)
	{
		if(end == temp)
		{
			DeleteListTail();
		}
		else
		{
			DeleteListHead();
		}
	}
	else
	{
		if(end == temp)
		{
			DeleteListTail();
		}
		else if(head == temp)
		{
			DeleteListHead();
		}
		else
		{
			struct Node* pt = head;
			while(pt->next != temp)
			{
				pt = pt->next;
			}
			pt->next = temp->next;
			free(temp);
		}
	}
}

