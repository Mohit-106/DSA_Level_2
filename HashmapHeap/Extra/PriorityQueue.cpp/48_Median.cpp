// class MedianFinder {
// public:
//     MedianFinder() {
        
//     }

//     priority_queue<int,vector<int>>maxpq;
//     priority_queue<int,vector<int>,greater<int>>minpq;
    
//     void addNum(int num) {

        

//         if(maxpq.size()>0 && minpq.size()>0){
//             if(num<maxpq.top()){
//                 maxpq.push(num);
//             }else {
//                 minpq.push(num);
//             }
//         }else{
//             maxpq.push(num);
//         }

//         int n = maxpq.size();
//         int m = minpq.size();

//         if(abs(n-m) == 2){
//             if(maxpq.size()>minpq.size()){
//                 int val = maxpq.top();
//                 maxpq.pop();
//                 minpq.push(val);
//             }else{
//                 int val = minpq.top();
//                 minpq.pop();
//                 maxpq.push(val);
//             }
//         }
//     }
    
//     double findMedian() {
        
//         if(maxpq.size()==minpq.size()){
//             double ans = static_cast<double>(minpq.top() + maxpq.top()) / 2;
//             return ans;
//         }else{
//             if(maxpq.size()>minpq.size()){
//                 return maxpq.top();
//             }else{
//                 return minpq.top();
//             }
//         }
//         return -1;
//     }
// };

// /**
//  * Your MedianFinder object will be instantiated and called as such:
//  * MedianFinder* obj = new MedianFinder();
//  * obj->addNum(num);
//  * double param_2 = obj->findMedian();
//  */