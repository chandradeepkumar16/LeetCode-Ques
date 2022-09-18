class Solution {
public:
        bool isPalindrome(string S)
    {
        string P = S;

        // Reverse the string P
        reverse(P.begin(), P.end());
        return S==P;
    }

    /*
    The approach goes like this we can say a word obtained by concatinating word A and B will be palindrome only if- 
	A and B are reverse of each other
	or one of A/B is empty and the other is a plaindromic word
    */
    
    vector<vector<int>> palindromePairs(vector<string>& words) {
        unordered_map<string,int> map;
        int n = words.size();
        vector<vector<int>> ans;
        string temp,s,temp2;
        int r,l;
        
        for(int i=0 ; i<n ; i++)
            map[words[i]] = i;
        
        for(int i=0 ; i<n ; i++) {
            s = words[i];
            l = s.length();
            temp = words[i];
            
            //check if reverse of word is present in map then puch the index pair to ans
            reverse(temp.begin(),temp.end());
            if(map.find(temp) != map.end() && map[temp] != i) {
                ans.push_back({i,map[temp]});
            }
            
            ////check if word is palindrome and an empty word is also present in map
            if(map.find("") != map.end() && isPalindrome(s) && map[""] != i) {
                ans.push_back({map[""] , i});
                ans.push_back({i,map[""]});
            }
            
            /*
            now for every word we have to check from backwards if the substring temp from l-1 to r is present in the map and the remaing s i.e s.substr(0,r) is already palindromic then also we can push indices pair to ans i.e temp + s.substr(0,r) = palindromic concatenated word
            */
            temp = "";
            r = s.length()-1;
            while(r >= 1) {
                temp += s[r];
                if(map.find(temp) != map.end() && isPalindrome(s.substr(0,r)) && map[temp] != i)
                    ans.push_back({map[temp] , i});
                r--;
            }
            
            /*
            now for every word we have to check from 0 to r if reverse of substr(0,r) is present in map and remaining string from s.substr(r+1,l-1-r) is already palindromic then also we can push indices pair to ans i.e s.substr(r+1,l-1-r) + temp2 = palindromic concatenated word
            */
            temp = "";
            r = 0;
            while(r < l-1) {
                temp += s[r];
                temp2 = temp;
                reverse(temp2.begin(),temp2.end());
                if(map.find(temp2) != map.end() && isPalindrome(s.substr(r+1,l-1-r)) && map[temp2] != i)
                    ans.push_back({i,map[temp2]});
                r++;
            }
        }
        
        return ans;
    }
};