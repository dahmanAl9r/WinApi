#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <cryptxml.h>


using namespace std;

int main(void){
    
    
    int nuum[5] = {20,19,17,16,17};
    for (int i = 0; i < sizeof(nuum) / sizeof(nuum[0]); i++)
    {
        cout << nuum[i] << endl;
    }
    


//    for (int i = 0; i <= 100; i++)
//    {
//         if(i%5 == 0 && i%3 == 0)
//         {
//             cout << i << "-FuzzBuzz" << endl;
//         }
        
//         else if (i%3 == 0)
//         {
//             cout << i << "-fuzz" << endl;
//         }
//         else if(i%5 == 0){
//             cout << i << "-Buzz" << endl;
//         }
//         else{
//             cout << i << endl;
//         }
        
//    }
   
}