#include <stdlib.h>
#include <iostream>

int main()
{
    std::cout << "Updating Project Creator..." << std::endl;

    system("git pull");
    system("mingw32-make app");
}
