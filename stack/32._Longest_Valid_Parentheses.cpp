#include <iostream>
#include <stack>
using namespace std;
//Time Complexity O(n)
int  isLongValid(string A)
{
           stack<int> s;
            s.push(-1);
            int MaxL=0;
            for(int i=0; i<A.size(); i++){
                if (A[i]=='(')
                {
                   s.push(i);
                }else{
                    s.pop();
                    if (s.empty())
                    {
                        s.push(i);
                    }else{
                        MaxL=max(MaxL,(i-s.top()));//top index division top stack then final result.
                    }
                    
                }
                
            }
            return MaxL;
  
}


int main()
{
    string A;
    cin>>A;
    cout<<isLongValid(A);

}