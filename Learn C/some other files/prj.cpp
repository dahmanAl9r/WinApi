#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
typedef unsigned int UINT;
typedef struct{
    string name;
    UINT age;
    float degree;
}info;

float f(float x){
    float result = x + 1+ exp(x);
    
    return result;
}

int main(){
    cout << f(-1.25) << endl;
    // // structs
    // info userInfo[2];
    
    // //firs info
    // cout << "put your name:"<< endl ; cin >> userInfo[0].name ;
    // cout << "put your age:"<< endl ; cin >> userInfo[0].age;
    // cout << "put your math's degree:" << endl; cin >> userInfo[0].degree;
    // // output
    // printf("your name is {0} and your age is..%d,",userInfo[0].name,userInfo[0].age);
    // if (firstInfo.degree <= 17.0){
    //     printf("since you have %f, you're good",userInfo[0].degree);
    // }else{
    //     printf("but i'm sorry..your note is verry bad :(");
}