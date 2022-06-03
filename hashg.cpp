// C++ implementation of
// the Quadratic Probing from Geeks2Geeks
#ifndef HASHG
#define HASHG
#include <iostream>
#include "randArray.cpp"
using namespace std;

// Function to print an array
// void printArray(int arr[], int n)
// {
// 	// Iterating and printing the array
// 	for (int i = 0; i < n; i++)
// 	{
// 		cout << arr[i] << " ";
// 	}
// }

// Function to implement the
// quadratic probing

string search(int data, int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == data){
            return "found";
        }
    }
    return "not found";
}

void hashing(int table[], int tsize,
			int arr[], int N, int searchNum)
{
	// Iterating through the array
	for (int i = 0; i < N; i++)
	{
		// Computing the hash value
		int hv = arr[i] % tsize;

		// Insert in the table if there
		// is no collision
		if (table[hv] == -1)
			table[hv] = arr[i];
		else
		{
			// If there is a collision
			// iterating through all
			// possible quadratic values
			for (int j = 0; j < tsize; j++)
			{
				// Computing the new hash value
				int t = (hv + j * j) % tsize;
				if (table[t] == -1)
				{
					// Break the loop after
					// inserting the value
					// in the table
					table[t] = arr[i];
					break;
				}
			}
		}
	}
	// printArray(table, N);
    cout << endl << search(searchNum, table, N);
    
}

// Driver code
int hash_function(int arr[], int n, int searchNum)
{
	int N = 1009;
	// Size of the hash table
	int L = 1009;
	int hash_table[1009];

	// Initializing the hash table
	for (int i = 0; i < L; i++)
	{
		hash_table[i] = -1;
	}

	// Quadratic probing
	hashing(hash_table, L, arr, n, searchNum);
    return 0;
}

// This code is contributed by gauravrajput1
#endif