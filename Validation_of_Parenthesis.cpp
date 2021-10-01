#include <iostream>
#include <stack>
#include <string>
#include <algorithm>


using namespace std;

bool isvalid(string s){
    
    stack <char> st;
     bool ans =true;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty() && st.top()=='[')
            {
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    if(!st.empty()){
        ans=false;
    }
    
    return ans;
}

int main()
{
   string s ="{[()}]";
   
   if(isvalid(s)){
       cout<<"Yes, it is a valid parathenis arrangement";
   }
   else{
       cout<<"No, it is not a valid arrangement.";
   }
    return 0;
}
