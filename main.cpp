#include <iostream>
#include <chrono>
#include <cstdlib>
#include "linear.cpp"
#include "randArray.cpp"
#include "binary.cpp"
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
    // srand((unsigned) time(0));

    for(int i = 0; i < 10; i++){
        randTestNumber = rand() % 20 + 1;
        auto start = chrono::steady_clock::now();
        
        // cout << linearSearch(randArray(20), 20, randTestNumber) << endl;
        cout << binarySearch(randArray(20), 0, 20-1, randTestNumber) << endl;
        cout << randTestNumber << endl;

        auto end = chrono::steady_clock::now();

        elapsed_time = double(chrono::duration_cast<chrono::nanoseconds> (end-start).count());
        total_time += elapsed_time;
    }

    double avg_time = total_time/10;
    cout << avg_time;

}