#include <iostream>
using namespace std;


int binarysearch(int arr[],int l,int r,int elem){
    while(l<=r){
        
        int mid=(l+r)/2;
        
        if(elem == arr[mid]){
            return mid;
        }
        
        if(elem<arr[mid]){
            r=mid-1;
        }
        
        if(elem>arr[mid]){
            l=mid+1;
        }
        
    }
    return -1;
}

void sorting(int arr[],int n){
    for(int i=0;i<n;i++){
        
       for(int j=i;j<n;j++){
            if(arr[i] > arr[j]){
                int temp=0;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int l=0;
    int r=n-1;
    
    sorting(arr,n);
    
    cout<<"The sorted array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int elem;
    cout<<"Enter the element for binary search"<<endl;
    cin>>elem;
    
    int ans=binarysearch(arr,l,r,elem);
    if(ans==-1){
        cout<<"Search element not found."<<endl;
    }
    else{
        cout<<"The element is at "<<ans+1<<" postion"<<endl;
    }
    
    
    
    return 0;
}
