class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s = "";
        string s1 = "";
        for(int i = 0; i < word1.size() ; i++)
        {
            s.append(word1[i]);
        }
        for(int i = 0 ; i < word2.size() ; i++)
        {
            s1.append(word2[i]);
        }

        if(s == s1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};