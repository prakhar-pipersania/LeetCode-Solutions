class Solution {
public:
    int expressiveWords(string S, vector<string>& words) 
    {
        char c;
        int count=0,j,k,oj,ok;
        for(int i=0;i<words.size();i++)
        {
            j=0,k=0;
            while(j<words[i].size())
            {
                c=words[i][j],oj=j,ok=k;
                while(words[i][j]==c&&j<words[i].size())
                    j++;
                while(S[k]==c&&k<S.size())
                    k++;
                oj=j-oj,ok=k-ok;
                if((oj>ok)||((ok>oj)&&(oj==0))||((ok>oj)&&(ok<3)))
                    break;
                if(j==words[i].size()&&k==S.size())
                    count++;
            }
        }
        return count;
    }
};
