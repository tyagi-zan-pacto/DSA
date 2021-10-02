#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int rem, reverse = 0;

    if (n<0){
        n=n-(2*n);
        while(n>0){
            rem=n%10;      
            reverse=reverse*10+rem;    
            n/=10;
        }
        cout<<"-"<<reverse;
        
    }
    
    else{
        while(n>0){
            rem=n%10;      
            reverse=reverse*10+rem;    
            n/=10;
            
        }
        cout<<reverse;

    }
    return 0;
}