#include <iostream>
using namespace std;
/**************this problem link:https://leetcode.com/problems/number-of-1-bits/*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while (n)
        {
            count++;
            n=n&(n-1);
        }
              
        return count;
    }
};
int main()
{
 return 0;
}