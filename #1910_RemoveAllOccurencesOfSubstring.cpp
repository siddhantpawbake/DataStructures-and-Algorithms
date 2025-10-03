class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t pos = s.find(part);
        while (pos != string::npos) {
            s.erase(pos, part.length());
            pos = s.find(part);
        }
        return s;
    }
};

java:
class Solution {
    public String removeOccurrences(String s, String part) {
        while(s.contains(part)){
            s=s.substring(0,s.indexOf(part))+s.substring(s.indexOf(part)+part.length());
        }
        return s;
    }
}