#include "my_vector_functions.hpp"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Ex 1
    vector<int> list = { 5, 5, 4};
    cout << "A. Size of number list: " <<list.size() << endl;
    add_zeros_to_list(list, 4);
    cout << "C. Size of number list: " <<list.size() << endl;
    
    
    // Ex 2
    vector<int> input = { 5, 5, 4};
    vector<int> output = { 6, 6, 5};
    add_list(input, output);
    print_all_elements_from_list(output);

    // Ex 3
    vector<string> city_list = { "Paris", "London", "Berlin",
            "Paris", "Berlin", "Madrid", "Paris"};
    cout << "Number of occurances of 'Paris': " << count_occurance(city_list, "Paris") << endl;

    return 0;
}