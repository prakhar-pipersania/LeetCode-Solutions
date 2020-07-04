class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        set<string> s;
        string formword;
        vector<string> str={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<words.size();i++)
        {
            formword.resize(0);
            for(int j=0;words[i][j]!='\0';j++)
                formword+=str[words[i][j]-97];
            s.insert(formword);
        }
        return s.size();
    }
};
