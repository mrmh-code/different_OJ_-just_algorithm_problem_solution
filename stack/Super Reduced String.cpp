#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

/**********this problem link:https://www.hackerrank.com/challenges/reduced-string/problem*/

void RemoveDuplication(string A){
    stack<char>s;
    for(int i=0; i<A.size(); i++){
        if (s.empty()||A[i]!=s.top())
        {
            s.push(A[i]);
        }
        else{
            s.pop();
        }  
    }
     string ans="";
        while (!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(),ans.end());
        if (ans.empty())
        {
           cout<<"Empty String"<<endl;
        }else{
            cout<<ans<<endl;

        }
        
};


int main()
{
    string s;
    cin>>s;
    RemoveDuplication(s);
}