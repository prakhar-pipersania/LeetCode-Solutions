bool isPalindrome(int x){  
long int rev=0,n,i=x;   
while(x!=0)
{
    n=x%10;
    rev=(rev*10)+n;
    x=x/10;
}  
if(rev==i&&i>=0)
    return true;
else
    return false;
}