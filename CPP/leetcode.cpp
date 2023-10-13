//this is my solution for roman number to integer

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        
        int sum = map[s[s.size() - 1]]; 
        for (int i = s.size() - 2; i >= 0; i--) {
            if (map[s[i]] < map[s[i + 1]]) {
                sum = sum - map[s[i]];
            } else {
                sum = sum + map[s[i]];
            }
        }
        return sum;
    }
};
