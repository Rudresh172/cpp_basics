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
    for (int i = 0; i<5; i++) {
        int input_number;
        cout << "Number " << i+1 << " : ";
        cin >> input_number;
        number_list.push_back(input_number);
    }
     
    cout << "Max value = " << max_value(number_list) << endl;
    return 0;
}