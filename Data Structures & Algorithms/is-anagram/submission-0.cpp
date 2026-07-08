class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false ; 
        unordered_map<char , int> match; 
        for(auto c : s)
        {
          match[c]++ ;
        }
        int l = 0 ; 
        for(int r = l + 1 ; r < t.length(); r++)
        {
          if(match.count(t[r - l + 1]))
          {
            return true; 
          }
        }
        return false ; 
    }
};
