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
//		friend class doubleLinkList;

		doubleLinkListNode()
		{
			prior = NULL;
			next = NULL;
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
		doubleLinkList();
		~doubleLinkList();
				
		int getLength();
		void printLinkedlist();
		void createDoubleLinkList(int length);
		void insertNodeByHead(DataType item);
		void insertNodeByTail(DataType item);
		void insertNodeByIndex(DataType item, int index);
		doubleLinkListNode* findData(DataType n);
		void deleteDataAtIndex(int index);
		void changeListDataAtIndex(int index, DataType item);

						
	private:
		doubleLinkListNode *head;
};

// Constructor
doubleLinkList::doubleLinkList()
{
	head = new doubleLinkListNode;
	head->prior = NULL;
	head->next = NULL;
	head->data = 0;
}
// Destructor
doubleLinkList::~doubleLinkList()
{
	head->prior = NULL;
	head->next = NULL;
	delete head;
}

void doubleLinkList::insertNodeByHead(DataType item)
{
	doubleLinkListNode* pMove = head;
	doubleLinkListNode* newNode = new doubleLinkListNode; // create a new node
	newNode->data = item;
	newNode->next = NULL;
	newNode->prior = NULL;
	
	if(pMove->next == NULL && pMove->prior == NULL)
	{
		head->next = newNode;
		newNode->prior = head;
	}
	else
	{
		pMove->next->prior = newNode;
		newNode->next = pMove->next;
		newNode->prior = head;
		head->next = newNode;				
	}
	
}

void doubleLinkList::insertNodeByTail(DataType item)
{
		doubleLinkListNode* newNode = new doubleLinkListNode; // create a new node
		newNode->data = item;
	//	newNode->next = NULL;
	//	newNode->prior = NULL;  // the point need init to NULL, add the constructor of this class 
		
		// firstly find the last node
		doubleLinkListNode* pMove = head;
		while(pMove->next != NULL)
		{
			pMove = pMove->next;
		}
		pMove->next = newNode;
		newNode->prior = pMove;	
		pMove = newNode;	
}

void doubleLinkList::insertNodeByIndex(DataType item, int index)
{
	if(index < 1 || index > getLength())
	{
		cout << "the input value is invalid!" << endl;
	}
	
	doubleLinkListNode* pMove = head;
	doubleLinkListNode* newNode = new doubleLinkListNode; 	// create a new node
	newNode->data = item;
	// newNode->next = NULL;
	// newNode->prior = NULL;   // the point need init to NULL, add the constructor of this class 
	
	// firstly find the inserted point
	for(int i = 1; i < index; i++)
	{
		pMove = pMove->next;
	}
		
	// insert  a new node
	newNode->next = pMove->next;
	if(pMove->next != NULL)
	{
		pMove->next->prior = newNode;
	}
	newNode->prior = pMove;
	pMove->next = newNode;	
	
}

doubleLinkListNode* doubleLinkList::findData(DataType item)  // find the node point of this data 查找节点
{
	doubleLinkListNode* pMove = head->next;
	if(pMove == NULL) // doubleLinkList is empty
	{
		return NULL;
	}
	while(pMove)
	{
		if(pMove->data == item)
		{
			cout << "the found data: " << pMove->data << endl;
			return pMove;
		}
		pMove = pMove->next;
	}
	
	return NULL;
	
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
void doubleLinkList::deleteDataAtIndex(int index)  //删除指定位置的节点 
{
	if( index < 1 || index > getLength())
	{
		cout << "input value is invalid" << endl;
	}

	doubleLinkListNode * pMove = head->next; // pMove 指向第一个data 
	
	doubleLinkListNode *pDelete = NULL;
	
	// find the deleted index of node
	for(int i =1; i < index; i++)
	{
		pMove = pMove->next;
	}
	
	pDelete = pMove;			
		
	if(pMove->prior == head)
	{
		//delete head point
		head->next = pDelete->next;
		pMove->next->prior = head;				
	}	
	else if (pMove->next == NULL)
	{			
		// delete tail point
		pMove->prior->next = NULL;
	}
 	else		
	{
		// delete the index point
		pMove->prior->next = pDelete->next;
		pMove->next->prior = pDelete->prior;
	}
	
	delete pDelete;
	pDelete = NULL;
		
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

void doubleLinkList::changeListDataAtIndex(int index, DataType item)
{
	if (index < 1 || index > getLength())
	{
		cout << "input value is invalid" << endl;
	}
	doubleLinkListNode *pMove = head->next; //设置游标指针
	for(int i = 1; i < index; i++)
	{
		pMove = pMove->next;
	}
//	x = pMove->data;
	pMove->data = item;
}

void doubleLinkList::createDoubleLinkList(int length)
{
	if(length < 0)
	{
		cout << "invalid input" << endl;
	}
	
	doubleLinkListNode *pMove = head;
	for (int i = 0; i < length; i++)
	{
		doubleLinkListNode *newNode = new doubleLinkListNode;
		cout << "input " << i+1 << " value: ";
		cin >>newNode->data;
	//	newNode->next = NULL;  // the pointer of new node need init to NULL, add the constructor of this class 
	//	newNode->prior = NULL; 		
		newNode->prior = pMove;
		pMove->next = newNode;
		pMove = pMove->next;
		pMove = newNode;				
	}
		
}


int main()
{
	doubleLinkList doublelink;
	DataType data;
	int i,index;
	cout << "0. exit \n" ;
	cout << "1. create a doubleLinkList\n2. print doubleLinkList\n3. get the length of doubleLinkList\n";
	cout << "4. insert data at tail\n5. insert data at head\n6. insert data at index\n" ;	
	cout << "7. find data \n8. delete data on index\n9. change the data on index" ;
	do 
	{
		cout << "\nplease input the execution Num: ";
		cin >> i;
		
		switch(i)
		{
			case 1:
				int n;
				cout << "input the lenght of doubleLinkList: ";
				cin >> n;
				doublelink.createDoubleLinkList(n);
				break;
			case 2:
				doublelink.printLinkedlist();
				break;
			case 3:
				cout << "the lenght of this LinkList: " << doublelink.getLength()  << endl;
				break;
			case 4:
				cout << "input the data inserted at tail:" ;
				cin >> data;
				doublelink.insertNodeByTail(data);
				break;
			case 5:
				cout << "input the data inserted at head:" ;
				cin >> data;
				doublelink.insertNodeByHead(data);
				break;
			case 6:
				cout << "input the data inserted at index:" ;
				cin >> data;
				cout << "input the index of inserted data:" ;
				cin >> index;				
				doublelink.insertNodeByIndex(data,index);				
				break;
			case 7:
				cout << "input the data that you want to find:" ;
				cin >> data;
				doublelink.findData(data);
				break;
			case 8:
				cout << "input the index that you want to delete:" ;
				cin >> index;
				doublelink.deleteDataAtIndex(index);
				break;
			case 9:
				cout << "input the data what you want to use:" ;
				cin >> data;
				cout << "input the index of the replaced data:" ;
				cin >> index;
				doublelink.changeListDataAtIndex(index, data);
				break;
				
			default:
				break;
		}

	}while(i != 0);
	
	system("pause");
	
	return 0;
} 
