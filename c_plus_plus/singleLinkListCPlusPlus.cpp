#include <iostream>
using namespace std;

typedef int DataType;
#define ERROR NULL


// Node class 构建一个节点类 
class Node
{
	public:
		int data;  // data filed 数据域 
		Node *next; // pointer filed 指针域 
};

// single LinkList class 构建一个单链表类 
class LinkList
{
	public:
		LinkList();
		~LinkList();
		
		void createLinkList(int n);  //create a single LinkList
		void travelLinkList();  //遍历 LinkList
		int getLinkListLength();  // get the length of LinkList
		bool isEmpty();  // verify the LinkList is empty or not		
		Node *findNode(DataType data); // find the node of LinkList
		void insertLinkListAtEnd(DataType data); // insert data at the end
		void insertLinkListAtIndex(DataType data, int index); // insert data at the index point
		void insertLinkListAtHead(DataType data); // insert the value at the head	
		void deleteLinkListAll(); // delete all data
		void deleteLinkListAtPoint( DataType data); // delete the appointed data 删除指定数据 
		void deleteLinkListAtIndex(int index); //delete the data on appointed index
		void deleteLinkListAtHead(); // delete data at head
		void deleteLinkAtEnd(); // delete data at end	
		void reverseLinkList(); // reverse all data of LinkList
		
	private:
		Node *head;			
};

// init single LinkList (constructor)
LinkList::LinkList()
{
	head = new Node;
	head->data = 0;
	head->next = NULL;
}

// destruct single LinkList
LinkList::~LinkList()
{
	delete head;	
}

// create a LinkList
void LinkList::createLinkList(int n)
{
	Node *pnew,*ptemp;
	ptemp = head;
	if(n < 0)
	{
		cout << "the node number is wrong" << endl;
		exit(0);		
	}
	
	for( int i = 0; i < n; i++)
	{
		pnew = new Node;
		cout << "please input " << i+1 << " value: " ;
		cin >> pnew->data;
		pnew->next = NULL;
		ptemp->next = pnew;
		ptemp = pnew;
	}
	
}

// travel single LinkList
void LinkList::travelLinkList()
{
	if(head == NULL || head->next == NULL)
	{
		cout << "The single LinkList is empty" << endl;
	}
	
	Node *p = head;  // let p point to head node
	while(p->next != NULL)
	{
		p = p->next; //  p指向p的下一个地址 
		cout << p->data << " " ;
	}
}

// get the length of single LinkList 
int LinkList::getLinkListLength()
{
	int count = 0;
	Node *p = head->next;
	while(p != NULL)
	{
		count++;
		p = p->next;
	}	
	return count;
}

// verify single LinkList is empty or not
bool LinkList::isEmpty()
{
	if(head->next == NULL)
	{
		return true;
	}

	return false;

}

// find the node point of this data 查找节点 

Node *LinkList::findNode(DataType data)
{
	Node *p = head;
	if(p == NULL)
	{
		cout << "the single LinkList is empty" << endl;
		return ERROR;
	}
	else
	{ 
		while(p->next != NULL)  // travel each node 
		{
			if(p->data == data)
			{
				return p;  //  return p field 如果查找这个data,则返回一个指针域 p 
			}
			p = p->next;
		}
		
		return NULL;   // cannot find the node
	}
}
// insert a appointed data at end 
void LinkList::insertLinkListAtEnd(DataType data)
{
	Node *newNode = new Node; // define a Node pointer newNode
	newNode->next = NULL;
	newNode->data = data;
	
	Node *p = head;
	if(head == NULL)
	{
		head = newNode;
	}
	else
	{
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = newNode;
	}	
} 

// insert a poointed data at index point
void LinkList::insertLinkListAtIndex(DataType data, int index)
{
	if (index < 1 || index > getLinkListLength())
	{
		cout << "the iput value is wrong" << endl;
	}
	else
	{
		Node *ptemp = new Node;  // create a new node
		ptemp->data = data;
		Node *p = head;
		int i = 1;
		while (index > i)
		{
			p = p->next;
			i++;
		}
		ptemp->next = p->next;
		p->next = ptemp;

	}
}

// insert a appointed data at head 
void LinkList::insertLinkListAtHead(DataType data)
{
	Node *newNode = new Node;
	newNode->data = data;
	
	Node *p = head;
	if(p == NULL)
	{
		head = newNode;
	}
	newNode->next = p->next;
	p->next = newNode;
}

// delete a data at end
void LinkList::deleteLinkAtEnd()
{
	Node *p = head;
	Node *ptemp = NULL;
	if (p->next == NULL)
	{
		cout << "the single LinkList is empty" << endl;
	}
	else
	{
		while(p->next != NULL)
		{
			ptemp = p; // 将ptemp指向尾部的前一个节点 
			p = p->next; // p指向最后一个节点 
		}
		delete p; // delete the end point
		p = NULL;
		ptemp->next = NULL;
	}
	
}

// deleat all data
void LinkList::deleteLinkListAll()
{
	Node *p = head->next;
	Node *ptemp = new Node;
	
	while (p != NULL)  // 在头结点的下一个节点逐个删除节点 
	{
		ptemp = p;
		p = p->next;
		head->next = p;
		ptemp->next = NULL;
		delete ptemp;
	}
	head->next = NULL; //头节点的下一个节点指向NULL 
	
}
// delete node at head
void LinkList::deleteLinkListAtHead()
{
	Node *p = head;
	if(p == NULL || p->next == NULL)
	{
		cout << "this single LinkList is empty" << endl;
	}
	else
	{
		Node *ptemp = NULL; // 创建一个占位节点
		p = p->next;
		ptemp = p->next;
		delete p;
		p = NULL;
		head->next = ptemp; 
	}
}
// delete the appointed data
void LinkList::deleteLinkListAtPoint(DataType data)
{
	Node *ptemp = findNode(data); // 查找到指定数据的节点位置
	if(ptemp == head->next)
	{
		deleteLinkListAtHead();	
	}
	else
	{
		Node *p = head;
		while (p->next != ptemp)
		{
			p = p->next;
		}
		p->next = ptemp->next;
		delete ptemp;
		ptemp = NULL;
	}
	
}


int main(void)
{
	LinkList singlelink;  // create a object for class LinkList
	int i;
	cout << "0. exit \n" ;
	cout << "1. create a single LinkList\n2. travel single LinkList\n3. get the length of single LinkList\n";
	cout << "4. verify the single LinkList is empty\n5. get the node point\n";
	cout << "6. insert data at end\n7. insert data at index\n8. insert data at head\n" ;
	cout << "9. delete data at end\n10. delete all data\n11. delete the appointed data\n12.delete data on head" ;
	do 
	{
		cout << "\nplease input the execution Num: ";
		cin >> i;
		
		switch(i)
		{
			case 1:
				int n;
				cout << "please input the lenght of Single LinkList: ";
				cin >> n;
				singlelink.createLinkList(n);
				break;
			case 2:
				singlelink.travelLinkList();
				break;
			case 3:
				cout << "the lenght of this LinkList: " << singlelink.getLinkListLength() << endl;
				break;
			case 4:
				if(singlelink.isEmpty() == 1)
				{
					cout << "this single LinkList is empty" << endl;
				}
				else
				{
					cout << "this single LinkList is not empty" << endl;
				}
				break;
			case 5:
				int data;
				cout << "please input the data that you find:" ;
				cin >> data;
				cout << "the data on this index: " << singlelink.findNode(data)->data << endl;
				break;
			case 6:
				DataType endData;
				cout << " input the data which is inserted at end: " ;
				cin >> endData;
				singlelink.insertLinkListAtEnd(endData);
				break;
			case 7:
				DataType indexData;
				int index;
				cout << "input the data that you insert:" ;
				cin >> indexData;
				cout << "input the index that you insert:" ;
				cin >> index;
				singlelink.insertLinkListAtIndex(indexData,index);
				break;
			case 8:
				DataType headData;
				cout << "input the data which is inserted at head:" ;
				cin >> headData;
				singlelink.insertLinkListAtHead(headData);
				break;
			case 9:
				singlelink.deleteLinkAtEnd();
				break;
			case 10:
				singlelink.deleteLinkListAll();
				break;
			case 11:
				DataType deletedData;
				cout << "input the deleted data: " ;
				cin >> deletedData;
				singlelink.deleteLinkListAtPoint(deletedData);
				break;
			case 12:
				singlelink.deleteLinkListAtHead();
				break;
			default:
				break;
		}

	}while(i != 0);
	
	system("pause");
	
	return 0;
}
