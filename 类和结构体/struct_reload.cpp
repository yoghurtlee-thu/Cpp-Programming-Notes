// ���ڽ���ṹ������������
#include <iostream>

using namespace std;

struct cube
{
    int length;
    int width;
    int height;
    int volume()
    {
        return length * width * height;
    }

    bool operator==(const cube &other) // ����==�����, ʹ������cube�������ֱ�ӱȽ�
    {
        return length == other.length && width == other.width && height == other.height;
    }
};

int main()
{
    cube c1 = {1, 2, 3};
    cube c2 = {1, 2, 3};
    cout << (c1 == c2) << endl;
    return 0;
}