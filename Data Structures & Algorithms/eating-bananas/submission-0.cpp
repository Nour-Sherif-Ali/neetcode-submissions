class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1 ; 
        int r = 0 ; 
        for(int pile : piles)
        {
            r = max(r , pile);
        }
        int answer = r ;
        while(l <= r)
        {
            int m = (l + r) / 2;
            long long hours = 0 ;
            for(int pile : piles)
            {
                hours += (pile + m - 1) / m ;
            } 
            if(hours <= h)
            {
                answer = m ; 
                r = m - 1;
            }
            else{
                l = m+1;
            }
        }
        return answer ;
    }
};
