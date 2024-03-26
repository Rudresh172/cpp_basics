#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::string username;
    int userage;
    std::cout << "Name of user:";
    std::cin >>  username;
    std::cout << "Age of user:";
    std::cin >>  userage;     
    std::cout << "Hello " << username << ", you are "
            << userage << std::endl;

    int number1,number2;
    std::cout << "Number 1:";
    std::cin >>  number1 ;
    std::cout << "Number 2:";
    std::cin >>  number2 ;
    int sum = number1 + number2 ;
    std::cout << "sum:" << sum << std::endl;

    std::vector<double> list = { 4, 5, 6, 7 };
    double acc = accumulate(list.begin(),list.end(), 0.0);
    double avg = acc / list.size();
    std::cout << "average: " << avg << std::endl;
    return 0;
}