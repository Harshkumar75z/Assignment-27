// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.
#include<iostream>
using namespace std;
void odd(int a, int b){
    if(b<a) return;
    if(a%2!=0) cout<<a<<" "; 
    odd(a+1,b);
}
int main(){
    int a;
    cout<<"Enter Starting : ";
    cin>>a;
    int b;
    cout<<"Enter Ending : ";
    cin>>b;
    odd(a,b);
}
