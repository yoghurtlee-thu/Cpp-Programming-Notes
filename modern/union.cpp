#include <iostream>

union union_name
{
    int i;
    char c;
};


int main()
{
    union_name u;
    u.i = 1;

    std::cout << u.i << std::endl;
    u.c = 'a';
    std::cout << u.c << std::endl;
    std::cout << u.i << std::endl;

    int *pi = &u.i;
    char *pc = &u.c;
    std::cout << pi << std::endl;
    std::cout << static_cast<void *>(pc) << std::endl;

    return 0;
}