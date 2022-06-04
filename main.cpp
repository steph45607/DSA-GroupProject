#include <iostream>
#include <chrono>
#include <cstdlib>
#include "linear.cpp"
#include "randArray.cpp"
#include "binary.cpp"
#include "hashg.cpp"
using namespace std;

    
int main(){ 
        int randTestNumber;
        srand(time(0));

        int n = 1000000;

        // randTestNumber = rand() % n + 1;
        // auto linear_start = chrono::steady_clock::now();
        // linearSearch(randArray(n), n, randTestNumber);
        // auto linear_end = chrono::steady_clock::now();
        // double linear_time = double(chrono::duration_cast<chrono::nanoseconds> (linear_end-linear_start).count());

        randTestNumber = rand() % n + 1;
        auto binary_start = chrono::steady_clock::now();
        binarySearch(randArray(n), 0, n-1, randTestNumber);
        auto binary_end = chrono::steady_clock::now();
        double binary_time = double(chrono::duration_cast<chrono::nanoseconds> (binary_end-binary_start).count());

        // randTestNumber = rand() % n + 1;
        // auto hash_start = chrono::steady_clock::now();
        // hash_function(randArray(n), n, randTestNumber);
        // auto hash_end = chrono::steady_clock::now();
        // double hash_time = double(chrono::duration_cast<chrono::nanoseconds> (hash_end-hash_start).count());

        // cout << endl;
        // cout << linear_time << endl;
        cout << binary_time<< endl;
        // cout << hash_time<< endl;
}