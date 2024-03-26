#include <iostream>
#include <vector>

using namespace std; 

double max_value(vector<double> number_list)
{

    double max = 0.0;
    for (double item: number_list) {
        
        if (item > max){
            max = item;
        }
    }
    return max;
}



int main()
{
    
    vector<double> number_list ;
    
    bool ask_user_for_number = true;

    while (ask_user_for_number) {
        double input_number;
        cout << "Enter a number (0 to stop): ";
        cin >> input_number;
        if (input_number == 0) {
            ask_user_for_number = false;
        }
        else {
            number_list.push_back(input_number);
        }
    }
     
    cout << "Max value = " << max_value(number_list) << endl;
    return 0;
}