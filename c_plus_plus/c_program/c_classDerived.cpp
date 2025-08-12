#include <iostream>
using namespace std;

// 基类：定义统一接口
class Shape {
public:
    // 虚函数：多态的核心（动态绑定的基础）
    virtual void draw() const { 
        cout << "绘制基础图形" << endl; 
    }
};

// 派生类1：重写基类接口
class Circle : public Shape {
public:
    void draw() const {  // 重写draw()
        cout << "绘制圆形" << endl; 
    }
};

// 派生类2：重写基类接口
class Rectangle : public Shape {
public:
    void draw() const  {  // 重写draw()
        cout << "绘制矩形" << endl; 
    }
};

// 统一接口函数：接收基类指针，调用draw()
void render(const Shape* shape) {
    shape->draw();  // 运行时根据对象类型确定调用哪个draw()
}

int main() {
    Shape* s1 = new Circle();    // 基类指针指向派生类对象
    Shape* s2 = new Rectangle(); 

    render(s1);  // 输出：绘制圆形（调用Circle::draw()）
    render(s2);  // 输出：绘制矩形（调用Rectangle::draw()）

    delete s1; delete s2;
    return 0;
}