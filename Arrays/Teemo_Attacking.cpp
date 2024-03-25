class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
        int sum = d;
        int temp = t[0]+d-1;
        for(int i=1;i<t.size();i++){
            if(t[i]>temp){
                sum = sum + d;
            }else{
                sum = sum+t[i]+d-1-temp;
            }
           temp = t[i]+d-1;
        }
        return sum;
    }
};




// class Solution {
// public:
//     int findPoisonedDuration(vector<int>& timeSeries, int duration) {
//         int count = duration;
//         for (int i=1;i<timeSeries.size();i++){
//             int prev = timeSeries[i-1] + duration;
//             if(timeSeries[i]<=prev){
//                 count = count - (prev - timeSeries[i]);
//             }
//             count = count + duration;
//         }
//         return count;
//     }
// };
