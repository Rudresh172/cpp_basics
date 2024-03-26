#include <iostream>


namespace abc {
    int triple_number(int number)
    {

        return number * 3;
    }
};

using namespace std;

void say_hello(string username)
{
    cout << "Hello " << username << endl;
}

int triple_number(int number)
{

    return number * 3;
}

void print_triple_number(int number)
{
    cout << abc::triple_number(number) << endl;
}

int main()
{
    say_hello("Rudresh");
    print_triple_number(4);
    return 0;
}