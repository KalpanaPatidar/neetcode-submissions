class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i=0;
        int j=0;
        int n=word.length();
        int m=abbr.length();

        while(i<n && j<m){
            if(abbr[j]=='0'){
                return false;

            }
            if(isdigit(abbr[j])){
                int num=0;
                while(j < m && isdigit(abbr[j])){
                    num=num*10 +(abbr[j]-'0');
                    j++;
                }
                i += num;
            }
            else{
                if(word[i]!=abbr[j]){
                    return false;
                }
                i++;
                j++;
            }
        }
        return i == n && j == m;
    }
};          