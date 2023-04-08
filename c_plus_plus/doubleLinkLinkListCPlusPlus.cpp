#include <iostream>
using namespace std;
typedef int DataType;
#define ERROR NULL

// Node class 构建一个节点类 
class doubleLinkListNode
{
	public:
		doubleLinkListNode* prior; // point to the previous point of current point 
		DataType data;  // data filed 数据域 
		doubleLinkListNode *next; // pointer filed 指针域 
		friend class doubleLinkList;
	
		//结点的无参构造函数,将结点指针域初始化为NULL
		doubleLinkListNode()
		{
			prior = NULL;
			next = NULL;
		}
		
		//结点的有参构造函数，初始化指针域和数据域
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
	//从第二个结点开始打印，表头不含数据
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
	doubleLinkListNode *pMove = head->next; //设置游标指针
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
