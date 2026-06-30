class Solution {
public:
    string decode(string &s, int &i) {
        string ans = "";
        int num = 0;

        while (i < s.size() && s[i] != ']') {

            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            else if (s[i] == '[') {
                i++; // skip '['

                string temp = decode(s, i);

                while (num--) {
                    ans += temp;
                }

                num = 0;
            }
            else {
                ans += s[i];
            }

            i++;
        }

        return ans;
    }

    string decodeString(string s) {
        int i = 0;
        return decode(s, i);
    }
};
