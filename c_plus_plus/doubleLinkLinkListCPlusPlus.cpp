#include <iostream>
using namespace std;
typedef int DataType;
#define ERROR NULL

// Node class ����һ���ڵ��� 
class doubleLinkListNode
{
	public:
		doubleLinkListNode* prior; // point to the previous point of current point 
		DataType data;  // data filed ������ 
		doubleLinkListNode *next; // pointer filed ָ���� 
		friend class doubleLinkList;
	
		//�����޲ι��캯��,�����ָ�����ʼ��ΪNULL
		doubleLinkListNode()
		{
			prior = NULL;
			next = NULL;
		}
		
		//�����вι��캯������ʼ��ָ�����������
		doubleLinkListNode(DataType _data, doubleLinkListNode *_prior = NULL, doubleLinkListNode *_next = NULL)
		{
			prior = _prior;
			data = _data;
			next = _next;		
		}
		
		~doubleLinkListNode()
		{
			prior = NULL;
			next = NULL;
		}

};

class doubleLinkList
{
	public:
		int getLength();
		void printLinkedlist();
		bool insertNodeByHead(doubleLinkListNode item);
		bool insertNodeByTail(doubleLinkListNode item);
		bool insertNodeByIndex(doubleLinkListNode item, int n);
		bool findData(DataType n);
		bool deleteData(DataType n);
		bool changeListData(int n, DataType item, doubleLinkListNode &x);
				
	private:
		doubleLinkListNode *head;
};

bool doubleLinkList::insertNodeByHead(doubleLinkListNode item)
{
	doubleLinkListNode* newNode = new doubleLinkListNode(item); // create a new node
	if(newNode == NULL)
	{
		cout << "fail to assign the memory, cannot create new node" << endl;
		return false;
	}
	
	if(head->next == NULL)
	{
		head->next = newNode;
		newNode->prior = head;
		return true;
	}
	else
	{
		head->next = newNode;
		newNode->prior = head;
		newNode->next = head->next;
		head->next->prior = newNode;
		return true;
		
	}
	
}

bool doubleLinkList::insertNodeByTail(doubleLinkListNode item)
{
		doubleLinkListNode* newNode = new doubleLinkListNode(item); // create a new node
		if(newNode == NULL)
		{
			cout << "fail to assign the memory, cannot create new node" << endl;
			return false;
		}
		
		// firstly find the last node
		doubleLinkListNode* lastNode = head;
		while(lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
		newNode->prior = lastNode;
		return true;		
}

bool doubleLinkList::insertNodeByIndex(doubleLinkListNode item, int n)
{
	if(n<1)
	{
		cout << "the input value is invalid!" << endl;
		return false;
	}
	doubleLinkListNode* pMove = head;
	
	// firstly find the inserted point
	for(int i = 1; i < n; i++)
	{
		pMove = pMove->next;
		if(pMove == NULL && i <= n)
		{
			cout << "the inserted point is invalid" << endl;
			return false;
		}
	}
	
	// create a new node
	doubleLinkListNode* newNode = new doubleLinkListNode (item);
	if(newNode == NULL)
	{
		cout << "fail to assign the memory, cannot create new node" << endl;
		return false;
	}
	
	// insert  a new node
	newNode->next = pMove->next;
	if(pMove->next != NULL)
	{
		pMove->next->prior = newNode;
	}
	newNode->prior = pMove;
	pMove->next = newNode;
	return true;	
	
}

bool doubleLinkList::findData(DataType item)
{
	doubleLinkListNode* pMove = head->next;
	if(pMove == NULL) // doubleLinkList is empty
	{
		return false;
	}
	while(pMove)
	{
		if(pMove->data == item)
		{
			return true;
		}
		pMove = pMove->next;
	}
	
	return false;
	
}

int doubleLinkList::getLength()
{
	doubleLinkListNode *pMove = head->next;
	int length = 0;
	while(pMove != NULL)
	{
		pMove = pMove->next;
		length++;
	}
	return length;
}
bool doubleLinkList::deleteData(int n)
{
	if( n < 1 || n > getLength())
	{
		cout << "input value is invalid" << endl;
		return false;
	}
	doubleLinkListNode * pMove = head;
	doubleLinkListNode *pDelete = NULL;
	
	// find the deleted point of node
	for(int i = 1; i <= n; i++)
	{
		pMove = pMove->next;
	}
	
	// delete the node
	pDelete = pMove;
	pMove->prior->next = pDelete->next;
	pMove->next->prior = pDelete->prior;
	delete pDelete;
	return true;
		
}	

void doubleLinkList::printLinkedlist()
{
	//�ӵڶ�����㿪ʼ��ӡ����ͷ��������
	doubleLinkListNode *pMove = head->next;
	while(pMove)
	{
		cout << pMove->data << " ";
		pMove = pMove->next; // move pointer
	}
}

bool doubleLinkList::changeListData(int n, DataType item, doubleLinkListNode &x)
{
	if (n < 1 || n > getLength())
	{
		cout << "input value is invalid" << endl;
		return false;
	}
	doubleLinkListNode *pMove = head->next; //�����α�ָ��
	for(int i = 1; i < n; i++)
	{
		pMove = pMove->next;
	}
	x = pMove->data;
	pMove->data = item;
	return true;
	
}

int main()
{
	
	return 0;
}
