#include <iostream>
using namespace std;

struct Student{
    int code;
    string name;
};

int hash_fun(int key){
    return key % 7;
}

// int linear_probe(int address){
//     address += 1;
//     if(address > 7){
//         address =
//     }
//     return address;
// }

// int quadratic_probe(int address){
//     address = (address+(address*address))%7;
//     return address;
// }

int main(){
    Student data[7];
    data[0].code = 2341;
    data[0].name = "a1";

    data[1].code = 4234;
    data[1].name = "a2";

    data[2].code = 2839;
    data[2].name = "a3";

    data[3].code = 430;
    data[3].name = "a4";

    data[4].code = 22;
    data[4].name = "a5";

    data[5].code = 397;
    data[5].name = "a6";

    data[6].code = 3920;
    data[6].name = "a7";

cout << "linear probe----------" << endl;
    int ht[7] = {0};
    for(int i = 0; i < 7; i++){
        int loc = hash_fun(data[i].code);
        // linear probe
        while(ht[loc]!=0){
            loc = loc+1;
            if(loc > 7){
                loc = 0;
            }
        }

        cout << "hashed index: " << loc << endl;
        ht[loc] = data[i].code;
    }

    for(int i = 0; i < 7; i++){
        cout << ht[i] << " ";
    }
    cout << endl;

cout << "quadratic probe----------" << endl;
    int ht2[7] = {0};
    for(int i = 0; i < 7; i++){
        int loc = hash_fun(data[i].code);
        // quadratic probe
        while(ht2[loc]!=0){
            loc = (loc+(loc*loc))%7;
            if(loc > 7){
                loc = 0;
            }
        }

        cout << "hashed index: " << loc << endl;
        ht2[loc] = data[i].code;
    }

    for(int i = 0; i < 7; i++){
        cout << ht2[i] << " ";
    }
    cout << endl;



    return 0;
}