/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long srt=1;
        long long end=n;
        while(srt<=end)
        {
            long long mid=(srt+end)/2;
            int x=guess(mid);
            if(x==0)return mid;
            if(x==-1)end=mid-1;
            if(x==1)srt=mid+1;
        }
        return -1;
    }
};