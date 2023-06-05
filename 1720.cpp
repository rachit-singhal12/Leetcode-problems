class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>v;
        int key = first;
        v.push_back(first);
        for(int i=0;i<encoded.size();i++)
        {
            key = key ^ encoded[i];
            v.push_back(key);
        }
        return v;
    }
};