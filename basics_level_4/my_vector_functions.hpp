#ifndef MY_VECTOR_FUNCTIONS_H
#define MY_VECTOR_FUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void add_zeros_to_list(vector<int> &number_list, int zeros_number); 
void print_all_elements_from_list(const vector<int> &list);
void add_list(const vector<int> &input_list, vector<int> &output_list);
int count_occurance(const vector<string> &list, string text);

#endif