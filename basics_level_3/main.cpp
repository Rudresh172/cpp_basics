#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << boolalpha;

    cout << (1 == 1) << endl;

    // When you know how many times to run the loop
    for (int i =0; i <10; i++) { 
        cout << "Hello" << endl;
    }

    // When you don't know how many times to run the loop || condition to loop is external
    int i = 0;
    while (i < 10) {
        cout << "Hello " << i << endl;
        i++;
    }

    vector<double> temperature_list = { 12.3, -4.5, 15.0, 11.7, -0.4 };

    for (int i = 0; temperature_list.size(); i++) {
        double temperature = temperature_list.at(i);
        cout << temperature << endl;
        if (temperature < 0.0) {
            cout << "it's freezing!" << endl;
        }
    }

    for (double temperature: temperature_list) {
        cout << temperature << endl;
    }
    
    return 0;
}