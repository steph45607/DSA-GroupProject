#ifndef LINEAR
#define LINEAR
#include <iostream>
using namespace std;

string linearSearch(int arr[], int size, int numSearch) {
    for(int i = 0; i < size; i++){
        if (arr[i] == numSearch){
            return "found";
        }
    }
    return "not found";
}
#endif