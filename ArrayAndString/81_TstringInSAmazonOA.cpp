//How may times t appears in s (substrings)
#include <bits/stdc++.h>
using namespace std;

int countSubstring(string s, string t) {

    unordered_map<char,int>mps;
    unordered_map<char,int>tps;

    for(int i= 0; i<s.size(); i++){
        mps[s[i]]++;
    }

    for(int i= 0; i<t.size(); i++){
        tps[t[i]]++;
    }

    int count = 0;
    int len = 0;
    while(true){

        for(auto val : tps){
            char ch = val.first;
            int freq = val.second;
            if(tps[ch]>mps[ch]){
                return count;
            }else{
                mps[ch] = mps[ch]-freq;
                len++;
            }
        }

        if(len==t.size()){
            count++;
            len=0;
        }else{
            return count;
        }

    }
    return count;
}

int main() {
  string s = "abaabbccccab";
  string t = "ab";
  int count = countSubstring(s, t);
  cout << "The substring \"" << t << "\" appears " << count << " times in the string \"" << s << "\"." << std::endl;
  return 0;
}
