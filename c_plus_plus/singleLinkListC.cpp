#include <iostream>
using namespace std;
#include <stdio.h>
#include"stdlib.h"
#include <string>

// 2.1 create Node 创建节点（结构体）
struct Node
{
	int a;     // data
	struct Node* next; // pointer which point to node
} node ;

//2.2 全局定义链表头尾指针 方便调用
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
	DeleteListRand(4);		//删除4节点
	ScanList();				//便利输出链表
	FreeList();				//删除链表
	
	pFind = FindNode(5);
	
	if(pFind != NULL)
	{
		cout << "find the node: " << pFind->a << endl;
	}
		
	
	
	return 0;
}


// 2.3 创建链表,实现在链表中增加一个数据（尾添加）—增
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

//2.4 遍历链表 —查
void ScanList()
{
	struct Node* temp = head;
	while(temp != NULL)
	{
		cout << temp->a << endl;
		temp = temp->next;
	}
}

//2.5 查询指定的节点 （遍历 一个个找）
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

//2.6 链表清空 —全部删除
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

//2.7 在指定位置插入节点 —在指定位置增
void AddListRand(int index,int a)
{
	if(NULL == head)
	{
		cout << "链表没有节点" << endl;
		return;
	}
	
	struct Node* pt = FindNode(index);
	if(NULL == pt)
	{
		cout << "没有指定节点" << endl;
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

//2.8尾删除 - 删
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

// 2.9 Delete head 删除头 —删
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

// 2.10 删除指定节点
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

