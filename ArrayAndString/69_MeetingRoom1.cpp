//LintCode


// /**
//  * Definition of Interval:
//  * class Interval {
//  * public:
//  *     int start, end;
//  *     Interval(int start, int end) {
//  *         this->start = start;
//  *         this->end = end;
//  *     }
//  * }
//  */

// class Solution {
// public:
//     bool canAttendMeetings(vector<Interval> &intervals) {
//         if(intervals.size()==0){
//             return true;
//         }
//        vector<int>start(intervals.size());
//        vector<int>end(intervals.size());
//        for(int i = 0;i<intervals.size();i++){
//            start[i] = intervals[i].start;
//            end[i] = intervals[i].end;
//        }
//        sort(start.begin(),start.end());
//        sort(end.begin(),end.end());
//        int i = 0;
//        int j = 0;
//        int count = 0;
//        int ans = 0;
//        while(i<start.size()  && j <end.size()){
//            if(start[i]<end[j]){
//              count++;
//              i++;
//            }else if(start[i] >= end[j]){
//                count--;
//                j++;
//            }
//            //cout<<count<<endl;
//            ans=max(ans,count);
//        }
//        if(ans == 1){
//            return true;
//        }else{
//            return false;
//        }
       
//     }
// };