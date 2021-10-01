#include<iostream>
using namespace std;

int main ()
{
    int i, j, temp, n, count=0;
    cout << "Enter size of the array: "<<endl;
    cin >> n;
    int a[n];
    cout << "\nEnter the elements of the array: "<< endl;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cout<<endl;
    for(i = 0; i<n; i++) {
        for(j = i+1; j<n; j++)
        {
            if(a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                count++;
            }
        }
    }
    
    cout <<"Sorted Element List using bubble sort: "<<endl;
    for(i = n-1; i>=0; i--) {
        cout <<a[i]<<" ";
    }
    cout<<"\n\nNo. of swap: "<<count;
    
    return 0;
}
