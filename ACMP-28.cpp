#include <iostream>
int main()
{
    int a1, b1, a2, b2, x, y;
    std::cin >> a1 >> b1 >> a2 >> b2 >> x >> y;
    if (a1 == a2)
        x = 2 * a1 - x;
    if (b1 == b2) 
        y = 2 * b1 - y;
    std::cout << x << " " << y;
}
