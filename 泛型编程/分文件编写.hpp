// todo：本节讲解类模板的分文件编写
#include <iostream>

using namespace std;

template <class T>
class B
{
public:
    T a;
    void show()
    {
        cout << a << endl;
        return;
    }
    void memfunc(T a)
    {
        cout << typeid(a).name() << endl;
        return;
    }
};

/* 由于类模板成员函数的创建时机是在调用的时候，因此按照传统的写法会让文件无法正确链接成员函数。比较好的方法就是把定义和声明写到一块。这时候，我们一般约定文件名后缀为.hpp */