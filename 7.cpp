#include <iostream>
void swap(int &a, int &b) 
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int a = 40 , b = 30;
    swap(a, b);
    std::cout << "a = " << a << std::endl
              << "b = " << b << std::endl;
    return 0;
}
