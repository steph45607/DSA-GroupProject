#ifndef HASHING
#define HASHING

#include <iostream>
using namespace std;

int hash_fun(int key){
    return key % 13;
}

int hash_function(int arr[], int n){

    cout << "quadratic probe----------" << endl;
    int ht[13] = {0};
    for(int i = 0; i < n; i++){
        int loc = hash_fun(arr[i]);
        // quadratic probe
        while(ht[loc]!=0){
            loc = (loc+(loc*loc))%n;
            if(loc > n){
                loc = 0;
            }
        }

        cout << "hashed index: " << loc << endl;
        ht[loc] = arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << ht[i] << " ";
    }
    cout << endl;
    
    return 0;
}
#endif