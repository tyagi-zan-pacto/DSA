//Program for Selection sort
#include<iostream>
using namespace std;
int main()
{
    int array[100],size,y,x,min,loc,temp;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    cout<<"Enter the elements"<<endl;
    for(x=0;x<size;x++)
    {
        cin>>array[x];
    } 
    for(x=0;x<size;x++)
    {
        min=array[x]; 
        loc=x;
        for(y=x+1;y<size;y++)
        {
            if(min>array[y])
            {
                min=array[y];
                loc=y;
            }
        }
        temp=array[x];
        array[x]=array[loc];
        array[loc]=temp;
    } 
    cout<<"Sorted array is" <<endl;
    for(x=0;x<=size;x++)
    {
        cout<<array[x]<<" ";
    }
return 0;
}
