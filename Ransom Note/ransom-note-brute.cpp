class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()) return false;
        multiset<int> s(magazine.begin(), magazine.end());
        for (char ran : ransomNote) {
            if (s.count(ran)) {
                s.erase(s.find(ran));
            }
            else return false;
        }
        return true;
    }
};
