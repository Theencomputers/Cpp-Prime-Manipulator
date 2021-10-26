#include <iostream>
#include <fstream>
using namespace std;
 bool checkprime(unsigned long long primea){
        while(1){
    bool isprime = true;
        for(unsigned long long i = 2; i < primea; i++){
        if(primea % i > 0){
            isprime = false;
            break;
        }
    }
    if(isprime == true){ return primea;}
    }
}
int main(){
    unsigned long long test = 4;
    long past;
    cout << "a";
while(1){
    cout << "t";
    if (checkprime(test) == true){
        
        cout << test << endl;
    }
    test++;
}
    }

    
