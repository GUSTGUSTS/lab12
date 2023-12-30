#include<iostream>
using namespace std;
int fibonacci(int x);
int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
int fibonacci(int x){
    if(x>=2){
    return fibonacci(x-1) + fibonacci(x-2);
    }else if(x==1){
    return 1 ;
    }else if(x==0){
    return 0 ;}
}
