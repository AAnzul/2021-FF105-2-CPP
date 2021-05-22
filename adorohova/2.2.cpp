#include <iostream>


int main()
{
long password;

std::cout « "Input password: ";
std::cin » password;

if (password == 9583 || password == 1747)
{
std::cout « "A, B , C" « std::endl;
}
else if (password == 333 || password == 7992)
{
std::cout « "B, C" « std::endl;
}
else if (password == 9455 || password == 8997)
{
std::cout « "C" « std::endl;
}
else
{
std::cout « "Invalid password" « std::endl;
}

return 0;
}