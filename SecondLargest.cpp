#include <iostream>
using namespace std;
int main(){
   int n, largest_num, second_largest;
   cout<<"Enter number of elements: ";
   cin>>n;
   int num[n];
   cout<< "Enter the elements of array:";
   for(int i=0; i<n; i++){
      cin>>num[i];
   }
   
   if(num[0]<num[1]){ 
      largest_num = num[1];
      second_largest = num[0];
   }
   else{ 
      largest_num = num[0];
      second_largest = num[1];
   }
   for (int i = 2; i< n ; i ++) {
      
      if (num[i] > largest_num) {
         second_largest = largest_num;
         largest_num = num[i];
      }
      
      else if (num[i] > second_largest && num[i] != largest_num) {
         second_largest = num[i];
      }
   }
   cout<<"Second Largest Element in array is: "<<second_largest;
   return 0;
}
