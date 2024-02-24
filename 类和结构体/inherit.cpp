// ���ڽ�����ļ̳�
#include <iostream>

using namespace std;

class base // ����
{
public:
    base()
    {
        cout << "base�Ĺ���" << endl;
    }
    ~base()
    {
        cout << "base������" << endl;
    }
    int a;

protected:
    int b;

private:
    int c;
};

class derived1 : public base // ���м̳�
{
public:
    derived1()
    {
        cout << "derived1�Ĺ���" << endl;
    }
    ~derived1()
    {
        cout << "derived1������" << endl;
    }
    void func()
    {
        a = 1; // ���Է��ʻ���Ĺ��г�Ա
        b = 2; // ���Է��ʻ���ı�����Ա
        // c = 3; // �����Է��ʻ����˽�г�Ա
    }

    /*�൱��:
    public:
        int a;
    
    protected:
        int b;
    */
};

class derived2 : protected base // �����̳�
{
public:
    void func()
    {
        a = 1; // ���Է��ʻ���Ĺ��г�Ա
        b = 2; // ���Է��ʻ���ı�����Ա
        // c = 3; // �����Է��ʻ����˽�г�Ա
    }

    /*�൱��:
    protected:
        int a;
        int b;
    */
};

class derived3 : private base // ˽�м̳�
{
public:
    void func()
    {
        a = 1; // ���Է��ʻ���Ĺ��г�Ա
        b = 2; // ���Է��ʻ���ı�����Ա
        // c = 3; // �����Է��ʻ����˽�г�Ա
    }

    /*�൱��:
    private:
        int a;
        int b;
    */
};

int main()
{
    cout << sizeof(derived1) << endl;
    derived1 d1;
    return 0;
}