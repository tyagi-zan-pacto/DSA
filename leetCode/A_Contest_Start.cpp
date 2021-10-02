#include <iostream>
using namespace std;
int main(){
   int k, n, x, t, count = 0, step =0;
   cin>>k;
   while(k--){
      cin>>n>>x>>t;
      int arr[n], arr1[n];
      for (int i = 0; i < n; i++)
      {
         arr[i] = i*x;
      }
      for (int i = 0; i < n; i++)
      {
         arr1[i] = t + x*i;         
      }
      for (int i = 0; i < n; i++)
      {
         for (int j = step; j < n; j++)
         {
            if (arr1[i]>arr[j])
            {
               step++;
               count++;
            }
            
         }
         
      }
      cout<<count;
      

      

      

   }

}