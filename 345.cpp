class Solution {
public:
    string reverseVowels(string s) {
        int low = 0, high = s.length() - 1;
        while (low < high) {
            while ((s[low] != 'a' && s[low] != 'e' && s[low] != 'i' && s[low] != 'o' && s[low] != 'u' && s[low] != 'A' && s[low] != 'E' && s[low] != 'I' && s[low] != 'O' && s[low] != 'U') && low < high) {
                low++;
            }
            while ((s[high] != 'a' && s[high] != 'e' && s[high] != 'i' && s[high] != 'o' && s[high] != 'u' && s[high] != 'A' && s[high] != 'E' && s[high] != 'I' && s[high] != 'O' && s[high] != 'U') && low< high) {
                high--;
            }
            swap(s[low], s[high]);
            low++;
            high--;
        }
        return s;
    }
};
