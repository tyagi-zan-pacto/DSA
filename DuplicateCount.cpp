#include <iostream>
using namespace std;

void duplicateCount(int arr[], int n){
    int count;
    cout<<"The duplicate elements are: ";
    for(int i=0;i<n-1;i++){
        count=1;
        if(arr[i]!=-1){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
                count++;
            }
        }
        }
        if(count>1)
        cout<<" "<<arr[i]<<"-->("<<count<<"times)"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    duplicateCount(arr, n);
    
    return 0;
}
