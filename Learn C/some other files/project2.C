#include <iostream>
using namespace std;

void FuncMt(int y,int x){
    cout << y + x << endl;
}
int main(){
    
    auto lambda = [](int a, int b) -> int {int z = a-b;return z;};
    cout << lambda(20,10) << endl;
    
    
    
}