int romanToInt(char * s){
int i=0,answer=0;
while (s[i]!='\0')
{
    if(s[i]=='I')
        answer+=1;
    else if(s[i]=='V')
    {   if(i>=1 && s[i-1]=='I')
            answer+=3;
        else
            answer+=5;
    }
    else if(s[i]=='X')
    {   if(i>=1 && s[i-1]=='I')
            answer+=8;
        else if(i>=1 && s[i-1]=='V')
            answer+=0;
        else
            answer+=10;
    }
    else if(s[i]=='L')
    {   if(i>=1 && s[i-1]=='I')
            answer+=48;
        else if(i>=1 && s[i-1]=='V')
            answer+=40;
        else if(i>=1 && s[i-1]=='X')
            answer+=30;
        else
            answer+=50;
    }
    else if(s[i]=='C')
    {   if(i>=1 && s[i-1]=='I')
            answer+=98;
        else if(i>=1 && s[i-1]=='V')
            answer+=90;
        else if(i>=1 && s[i-1]=='X')
            answer+=80;
        else if(i>=1 && s[i-1]=='L')
            answer+=0;
        else
            answer+=100;
    }
    else if(s[i]=='D')
    {   if(i>=1 && s[i-1]=='I')
            answer+=498;
        else if(i>=1 && s[i-1]=='V')
            answer+=490;
        else if(i>=1 && s[i-1]=='X')
            answer+=480;
        else if(i>=1 && s[i-1]=='L')
            answer+=400;
        else if(i>=1 && s[i-1]=='C')
            answer+=300;
        else
            answer+=500;
    }
    else if(s[i]=='M')
    {   
        if(i>=1 && s[i-1]=='I')
            answer+=998;
        else if(i>=1 && s[i-1]=='V')
            answer+=990;
        else if(i>=1 && s[i-1]=='X')
            answer+=980;
        else if(i>=1 && s[i-1]=='L')
            answer+=900;
        else if(i>=1 && s[i-1]=='C')
            answer+=800;
        else if(i>=1 && s[i-1]=='D')
            answer+=0;
        else
            answer+=1000;
    }
    else
        return 1;  
    i++;    
}
return answer;
}