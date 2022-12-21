// class FreqStack {
// public:
//     unordered_map<int,int>freq;
//     unordered_map<int,stack<int>>maxFreqStack;
//     int maxFreq=0;
//     void push(int val) {
//         freq[val]++;
//         maxFreqStack[freq[val]].push(val);
//         maxFreq = max(maxFreq,freq[val]);
//     }
    
//     int pop() {
//         int val  = maxFreqStack[maxFreq].top();
//         maxFreqStack[maxFreq].pop();
//         if(maxFreqStack[maxFreq].size()==0){
//           maxFreq--;
//         }
//         freq[val]--;
//         return val;
//     }
// };