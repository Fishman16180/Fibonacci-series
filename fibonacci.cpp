#include <iostream>

using namespace std;

int main(){
    unsigned long long n1 = 0;
    unsigned long long n2 = 1;
    unsigned long long n;
    
    int num, count=0;
    cout<<"Enter the number of items to generate Fibonacci series: ";
    cin>>num;
    
    if(num < 0){
        cout<<"Please enter a positive integer.";
    }
    else if(num==0){
        return 0;
    }
    else if(num==1){
        cout<<n1;
    }
    else{
        while(count<num){
            cout<<" "<<n1;
            n=n1+n2;
            n1=n2;
            n2=n;
            count += 1;
        }
    }
    
    return 0;
}