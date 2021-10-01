#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter from the following options: \n 1. Insert an element. \n 2. Delete an element. \n"<<endl;
    cin>>num;
    switch(num){
        case 1: {
                int n;
                cout << "Enter size of the array: "<<endl;
                cin >> n;
                int arr[n];
                int i;
                cout << "Enter the elements of the array: "<< endl;
                for(i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }
                int pos;
                cout << "Enter the position where you want to insert element: "<< endl;
                cin >> pos;
                int elem;
                cout << "Enter the element you want to insert: "<<endl;
                cin >> elem;
                if(pos > n)
                    cout << "Invalid Input";
                else
                {
                    for (i = n - 1; i >= pos - 1; i--)
                        arr[i+1] = arr[i];
                
                    arr[pos-1] = elem;
                
                    cout << "Array after insertion is:\n";
                
                    for (i = 0; i <= n; i++)
                        cout << arr[i] << " ";
                }
                break;}
                
        case 2: {
                int array[100], position, c, n;
    
                cout << "Enter the number of elements of the array : ";
                cin >> n;
                
                cout << "Input the array elements : ";
                
                for (c = 0; c < n; c++)
                    cin >> array[c];
                
                cout << "Enter the position : ";
                cin >> position;
                
                if (position >= n+1)
                    cout << "\nDeletion not possible.\n";
                else
                {
                    for (c = position - 1; c < n - 1; c++)
                        array[c] = array[c+1];
                    
                    cout << "\nArray after deletion : ";
                    
                    for (c = 0; c < n - 1; c++)
                        cout << array[c] << " ";
                }
                cout << endl;
                }
                break;
    
    }
}
