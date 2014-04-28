#include <iostream>
int main() 
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    std::cout << a << std::endl;
    return 0;
}
