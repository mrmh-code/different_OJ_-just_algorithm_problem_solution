#include <iostream>
#include <stack>
#include <string.h>
#include <algorithm>
using namespace std;
/*********************this problem link:https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/*/
class solution{
    public:
        string removeDuplicates(string A){
            stack<char>s;
            for(int i=0; i<A.size(); i++){
                if (s.empty()||A[i]!=s.top())
                {
                   s.push(A[i]);
                }else{
                    s.pop();
                }
            }
            string ans="";
            while (!s.empty())
            {
                 ans.push_back(s.top());
                 s.pop();
            }

            reverse(ans.begin(), ans.end());
            return ans;
            
        }
};

int main()
{
    solution st;
    string s;
    cin>>s;
    cout<<st.removeDuplicates(s)<<endl;
}