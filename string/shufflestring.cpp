class Solution {
public:
        string restoreString(string s, vector<int>& indices) {
        string res = s;
        int i=0;
        while(i<indices.size()){
            s[indices[i]] = res[i];
            i++;
        } return s;

    }
};