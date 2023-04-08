#include <stdio.h>  
#include <iostream>
using namespace std;  
  
//�����  
class Node {  
public:  
    int data;  
    Node *pPre, *pNext;  
};  
  
//˫��������  
class DoubleLinkList {  
public:  
    DoubleLinkList() {  
        head = new Node;  
        head->data = 0;  
        head->pNext = NULL;  
        head->pPre = NULL;  
    }  
    ~DoubleLinkList() {delete head;}  
    void CreateLinkList(int n);             //��������  
    void InsertNode(int position, int d);   //��ָ��λ�ô�������  
    void TraverseLinkList();                //��������  
    bool IsEmpty();                         //�ж������Ƿ�Ϊ��  
    int GetLength();                        //���������  
    void DeleteNode(int position);          //ɾ��ָ��λ�ô����  
    void DeleteLinkList();                  //ɾ������  
private:  
    Node *head;  
};  
  
void DoubleLinkList::CreateLinkList(int n) {  
    if (n < 0) {  
        cout << "�������������" << endl;  
        exit(0);  
    }  
    else {    
        int i = 0;  
        Node *pnew, *ptemp;  
        ptemp = head;  
        i = n;  
        while (n-- > 0) {  
            cout << "�������" << i - n << "�����ֵ��";  
            pnew = new Node;  
            cin >> pnew->data;  
            pnew->pNext = NULL;  
            pnew->pPre = ptemp;  
            ptemp->pNext = pnew;  
            ptemp = pnew;  
        }         
    }  
}  
  
void DoubleLinkList::InsertNode(int position, int d) {  
    if (position < 0 || position > GetLength() + 1){  
        cout << "����λ�ô���" << endl;  
        exit(0);  
    }  
    else {  
        Node *pnew, *ptemp;  
        pnew = new Node;  
        pnew->data = d;  
        ptemp = head;  
  
        while (position-- > 1)  
            ptemp = ptemp->pNext;  
  
        if (ptemp->pNext != NULL)  
            ptemp->pNext->pPre = pnew;  
        pnew->pNext = ptemp->pNext;  
        pnew->pPre = ptemp;  
        ptemp->pNext = pnew;  
        ptemp = pnew;  
    }  
}  
  
void DoubleLinkList::TraverseLinkList() {  
    Node *ptemp = head->pNext;  
    while (ptemp != NULL) {  
        cout << ptemp->data << " ";  
        ptemp = ptemp->pNext;  
    }  
    cout << endl;  
}  
  
bool DoubleLinkList::IsEmpty() {  
    if (head->pNext == NULL)  
        return true;  
    else  
        return false;  
}  
  
int DoubleLinkList::GetLength() {  
    int n = 0;  
    Node *ptemp = head->pNext;  
    while (ptemp != NULL) {  
        n++;  
        ptemp = ptemp->pNext;  
    }  
    return n;  
}  
  
void DoubleLinkList::DeleteNode(int position) {  
    if (position < 0 || position > GetLength()) {  
        cout << "�������ݴ���!" << endl;  
        exit(0);  
    }  
    else {  
        Node *pdelete, *ptemp;  
        ptemp = head;  
  
        while (position-- > 1)  
            ptemp = ptemp->pNext;  
        pdelete = ptemp->pNext;  
        if (pdelete->pNext != NULL)  
            pdelete->pNext->pPre = ptemp;  
        ptemp->pNext = pdelete->pNext;  
        delete pdelete;  
        pdelete = NULL;  
    }  
}  
  
void DoubleLinkList::DeleteLinkList() {  
    Node *pdelete, *ptemp;  
    pdelete = head->pNext;  
    while (pdelete != NULL) {  
        ptemp = pdelete->pNext;  
        head->pNext = ptemp;  
        if (ptemp != NULL)  
            ptemp->pPre = head;  
        delete pdelete;  
        pdelete = ptemp;  
    }  
}  
  
//���Ժ���  
int main() {  
    DoubleLinkList dl;  
    int position = 0, value = 0, n = 0;  
    bool flag = false;  
  
    cout << "��������Ҫ����˫������Ľ�������";  
    cin >> n;  
    dl.CreateLinkList(n);  
  
    cout << "��ӡ����ֵ���£�";  
    dl.TraverseLinkList();  
  
    cout << "������������λ�ú�ֵ��";  
    cin >> position >> value;  
    dl.InsertNode(position, value);  
      
    cout << "��ӡ����ֵ���£�";  
    dl.TraverseLinkList();  
  
    cout << "������Ҫɾ������λ�ã�";  
    cin >> position;  
    dl.DeleteNode(position);  
  
    cout << "��ӡ����ֵ���£�";  
    dl.TraverseLinkList();  
  
    dl.DeleteLinkList();  
    flag = dl.IsEmpty();  
    if (flag)  
        cout << "ɾ������ɹ���" << endl;  
    else  
        cout << "ɾ������ʧ�ܣ�" << endl;  
  
    return 0;  
}
