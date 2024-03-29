class Solution {
public:
    int sum = 0;
    stack<int>st;
    int calPoints(vector<string>& o) {
        for( int i=0;i<o.size();i++){
            if(o[i]=="D"){
            int temp = 2*st.top();
            st.push(temp);
            sum = sum + st.top();
        }else if(o[i]=="C"){
            sum = sum - st.top();
            st.pop();
        }else if(o[i]=="+"){
            int x = st.top();
            st.pop();
            int y = st.top() + x;
            st.push(x);
            st.push(y);
            sum = sum + st.top();
        }else{
            st.push(stoi(o[i]));
            sum = sum + st.top();
        }
        }
        return sum;
        
        
    }
    
};
