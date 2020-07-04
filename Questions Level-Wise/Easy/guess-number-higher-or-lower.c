/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
int guessNumber(int n)
{
    int x,l=1,h=n,mid;
    if(guess(h)==0&&h>0)
        return h;
    while(l<h)
    {
        mid=((h-l)/2)+l;
        x=guess(mid);  
        if(x==0)
            return mid;
        else if(x==1)
            l=mid;
        else
            h=mid;
    }
    return 1;
}
