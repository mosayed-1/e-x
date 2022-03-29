#include <iostream>
using namespace std;
int main(){


    float power;
    cout<< "Please, enter the power of e you want: ";
    cin>> power;
    int accuracy = 100;

    float answer = 1;

    float temperature = 1;

    int i;


    for (i = 1; i <= accuracy; i++) {
        temperature = (temperature * power) / (i);
        answer += temperature;
    }
    cout<< "e^" << power <<" = "<< answer <<endl;
    return 0;
}

