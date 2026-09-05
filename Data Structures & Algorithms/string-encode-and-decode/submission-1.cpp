class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedstr; 
        for (const string& str : strs) {
            encodedstr += to_string(str.size());
            encodedstr.push_back('#');
            encodedstr += str;
        }
        return encodedstr;
    }

    vector<string> decode(string s) {
        vector<string> decodedstrs;
        size_t n = s.size(), i = 0;
        while (i < n) {
            size_t delim = s.find('#', i);
            int len = stoi(s.substr(i, delim - i));
            decodedstrs.push_back(s.substr(delim + 1, len));
            i = delim + 1 + len;
        }
        return decodedstrs;
    }
};
