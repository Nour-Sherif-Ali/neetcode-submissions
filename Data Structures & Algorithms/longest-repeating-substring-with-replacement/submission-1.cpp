class Solution {
public:
    int characterReplacement(string s, int k) {
        //            A   : 4 
        unordered_map<char,int> count ; 
        int l = 0 ; 
        int maxfre = 0 ; 
        int length = 0 ; 
        for(int r = 0 ; r < s.length() ; r++)
        {
            count[s[r]]++;
            maxfre = max(maxfre, count[s[r]]);
            while((r - l + 1) - maxfre > k)
            {
                count[s[l]]--;
                l++;
            }

            length = max(length , r - l + 1);
        }
        return length ; 

    }
};
