#include <iostream>
#include <vector>
#include <numeric>


using namespace std;

void say_hello(string username, int userage)
{
    cout << "Hello " << username << ", you are "
            << userage << endl;
}


void greet_user()
{
    string username;
    int userage;
    cout << "Name of user:";
    cin >>  username;
    cout << "Age of user:";
    cin >>  userage;     
    say_hello(username,userage);
}

int add_two_ints(int number1, int number2)
{
    return number1 + number2;
}

double compute_avg(vector<double> number_list)
{
    double acc = accumulate(number_list.begin(),number_list.end(), 0.0);
    return acc / number_list.size();
}

double celsius_to_fahrenheit(double celcius)
{
    return celcius * 1.8 + 32.0;
}

int main()
{
    greet_user();

    int number1,number2;
    cout << "Number 1:";
    cin >>  number1 ;
    cout << "Number 2:";
    cin >>  number2 ;
    cout << add_two_ints(number1,number2) << endl;

    vector<double> number_list = { 4, 5, 6, 7 };
    double avg = compute_avg (number_list);
    cout << "average: " << avg << endl;

    double celsius = 20; 
    cout << celsius << " C = " << celsius_to_fahrenheit(20) << " F" << endl;
    return 0;
}