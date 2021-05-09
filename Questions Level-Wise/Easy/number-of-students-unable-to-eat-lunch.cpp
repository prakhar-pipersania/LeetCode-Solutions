class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        int c=students.size(),old=c,f=0;
        while(c!=0)
        {
            for(int i=0;i<students.size()&&c!=0;i++)
                if(sandwiches[f]==students[i])
                    students[i]=-1,f++,c--;
            if(c==old)
                break;
            old=c;
        }
        return c;
    }
};
