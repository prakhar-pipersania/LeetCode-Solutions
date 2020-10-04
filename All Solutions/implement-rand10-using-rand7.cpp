// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() 
    {
        int i=7*rand7()+rand7()-7; 
        return i<41?i%10+1:rand10();
    }
};
