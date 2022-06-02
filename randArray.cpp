#ifndef RAND_ARR
#define RAND_ARR

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int* randArray(int n){
    srand((unsigned) time(0));
    int* array = new int[n];
    int randNumber;
    int MAXI = n;
    string outstr("{");
    for(int i = 0; i < MAXI; i++){
        randNumber = (rand() % MAXI) + 1;
        array[i] = randNumber;
        outstr += to_string(randNumber) + ",";
        
    }
    outstr.pop_back();
    outstr += "}";

    ofstream outfile;
    outfile.open("testArray.txt");
    outfile << outstr;
    outfile.close();

    return array;
}

#endif