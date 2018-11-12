#include <iostream>

auto message()
{
    return "Hello world";
}

int main(int argc, char** argv)
{
    std::cout << message() << std::endl;
    return 0;
}
