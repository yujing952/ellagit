#include <iostream>
#include<cstring>
using namespace std;

void Reverse(char a[], char b[])
{
    int i=0,n;
    n = strlen(a);
    while(a[i]!='\0')
    {
        b[n-i-1] = a[i];
        i++;
    }
    b[n] = '\0';
}

int main()
{
    char str1[100];
    char str2[100];
    cout << "please input str1[]:" << endl;
    cin >> str1;
    Reverse(str1,str2);
    cout << str2 << endl;
    return 0;
}
