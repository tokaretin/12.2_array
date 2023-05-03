#include <iostream>
#include <string>

int main()
{
    int pupils[5];
    std::string name[] = {"Simona", "Lev", "Anna", "Ilia", "Karetin"};

    for (int i = 0; i < 5; i++) {
        std::cout << "Write mark for name #" << name[i] << '\n';
        std::cin >> pupils[i];
    }

    for (int i = 0; i < 5; i++) {
        std::cout << name[i] << " has mark " << pupils[i] << '\n';
    }
}

