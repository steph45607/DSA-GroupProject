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
    //randTestNumber = 1 + (rand()%20);
    //start time
    //auto start = chrono::steady_clock::now();
    
    //running the algorithm
    //cout << linearSearch(randArray(20), 20, randTestNumber) << endl;
    //cout << randTestNumber << endl;

    // end time
    //auto end = chrono::steady_clock::now();

    //finding the time difference
    double elapsed_time;
    //elapsed_time = double(chrono::duration_cast<chrono::nanoseconds> (end-start).count());

    //output
    //cout << elapsed_time << endl;

    double total_time = 0;

        randTestNumber = rand() % 1000 + 1;
        auto linear_start = chrono::steady_clock::now();
        linearSearch(randArray(1000), 1000, randTestNumber);

        // cout << randTestNumber << endl;

        auto linear_end = chrono::steady_clock::now();

        double linear_time = double(chrono::duration_cast<chrono::nanoseconds> (linear_end-linear_start).count());
        
// binary
        randTestNumber = rand() % 1000 + 1;
        auto binary_start = chrono::steady_clock::now();
        
        binarySearch(randArray(1000), 0, 1000-1, randTestNumber);
        // cout << randTestNumber << endl;

        auto binary_end = chrono::steady_clock::now();

        double binary_time = double(chrono::duration_cast<chrono::nanoseconds> (binary_end-binary_start).count());
        
        // hash
        randTestNumber = rand() % 1000 + 1;
        auto hash_start = chrono::steady_clock::now();


        hash_function(randArray(1000), 1000, randTestNumber);
        
        // cout << randTestNumber << endl;

        auto hash_end = chrono::steady_clock::now();

        double hash_time = double(chrono::duration_cast<chrono::nanoseconds> (hash_end-hash_start).count());
        cout << "\n" << linear_time << endl;
        cout << binary_time<< endl;
        cout << hash_time<< endl;
}