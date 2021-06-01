#include <iostream>
#include <vector>
#include <set>
#include <cstdio>
using namespace std;


int main()
{
    vector<int>st;
    multiset<int>se;
    int nQ,x;
    cin>>nQ;
    
    while (nQ--)
    {
        cin>>x;
        if(x==1){
            cin>>x;
            se.insert(x);
            st.push_back(x);
        }

        else if (x==2)
        {
           x= *st.rbegin();
			se.erase(se.find(x));
			st.pop_back();
        }else{
            cout<<*se.rbegin()<<endl;
        }
        
    }
    
}