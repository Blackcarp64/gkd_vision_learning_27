#include <iostream>

int main()
{
    int x = 320;
    int y = 240;
    char command;
    int distance;


while (true)
{
    std::cin >> command;

    if (command == 'q')
    {
        break;
    }

    std::cin >> distance;

    if (command == 'w')

     {

     y -= distance;

     }

    if (command == 's')

     {

     y += distance;

     }

    if (command == 'a')

     {

     x -= distance;

     }

    if (command == 'd')

     {

     x += distance;

     }
    if (x < 0) x = 0;
    if (x > 639) x = 639;
    if (y < 0) y = 0;
    if (y > 479) y = 479;
    std::cout << "准星: (" << x << ", " << y << ")\n";
}

    return 0;
}