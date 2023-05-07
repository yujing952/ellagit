#include <iostream>
#include <string>
using namespace std;

//如果希望在最终读入的字符串中保留空格，可以使用 getline 函数

/*
分析一下while(getline(cin,line))

（注意：这里默认回车符停止读入,按Ctrl+C(Windows)即可退出循环。）

这个语句中，while判断语句的真实判断对象是cin的状态，也就是判断当前是否存在有效的输入流。

而输入流是对象，判断的是流返回的状态。所以正常的情况下，你怎么输入都是跳不出它的循环。

在这之中可能会用些人误以为while判断语句的判断对象是line（也就是line是否为空），想通过回车来跳出循环，却发现不能跳出循环。

而回车和设置的终止符都是终止getline()函数的读取操作的。但是while判断语句判断的是getline()函数的输入流是否有效。

*/

int main(void)
{

	string line; // 每次读入一整行，直到遇到换行符结束读入 
	while (getline(cin, line))
	{
		if(!line.empty())
		{
			cout << line << endl;
		}
	}
	
	system ("pause");
	return 0;
}
