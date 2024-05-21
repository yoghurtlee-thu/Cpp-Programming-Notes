// TODO：本节讲解 string
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string s;
    s = "50 cats";
    string::size_type sz = 2;
    int n = stoi(s, &sz);
    cout << n << endl; // 50
}