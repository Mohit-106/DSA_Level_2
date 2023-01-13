// class Solution {
// public:

//     int n = 100;

//     unordered_map<string,string>mp;

//     // Encodes a URL to a shortened URL.
//     string encode(string longUrl) {
        
//         string str = to_string(rand()%n);
//         while(mp.find(str)!=mp.end()){
//             str+=to_string(rand()%n);
//         }
//         mp[str]=longUrl;
//         return str;
        
//     }

//     // Decodes a shortened URL to its original URL.
//     string decode(string shortUrl) {
//         return mp[shortUrl];
//     }
// };

// // Your Solution object will be instantiated and called as such:
// // Solution solution;
// // solution.decode(solution.encode(url));