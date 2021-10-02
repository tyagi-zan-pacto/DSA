#include <iostream>
using namespace std;
int main(){
    int a, n, d, result;
    cout<<"Enter a, n, d"<<endl;
    cin>>a>>n>>d;
    result = n/2*(2*a+(n-1)*d);
    cout<<result;
    return 0;
}