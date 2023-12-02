// 1160. Find Words That Can Be Formed by Characters
// Solved
// Easy
// Topics
// Companies
// Hint
// You are given an array of strings words and a string chars.

// A string is good if it can be formed by characters from chars (each character can only be used once).

// Return the sum of lengths of all good strings in words.

 

// Example 1:

// Input: words = ["cat","bt","hat","tree"], chars = "atach"
// Output: 6
// Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
// Example 2:

// Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
// Output: 10
// Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.

bool Ispossible(string &word, vector <int> &counts)
{
    vector<int> count(26, 0);

    for(char ch:word)
    {
        count[ch - 'a']++;
        if(count[ch-'a'] > counts[ch-'a'])
        {
            return false;
        }
    }
    return true;
}

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> h(26, 0);
        for (char ch :chars)
        {
            h[ch - 'a']++;
        }
        int len = 0;

        for(int i = 0; i < words.size() ; i++)
        {
            if(Ispossible(words[i], h))
            {
                len += words[i].length();
            }
        }
        return len;
    }
};