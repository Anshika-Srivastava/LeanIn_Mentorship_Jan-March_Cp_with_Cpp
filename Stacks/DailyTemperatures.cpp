class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr){
        vector<int> ans;
        stack<int> st;
        
        int n = arr.size();
        for(int i=n-1;i>=0;i--){
            while(st.size() and arr[st.top()] <= arr[i]) st.pop();
            
            if(st.empty()) ans.push_back(0);
            else ans.push_back(st.top() - i);
            
            st.push(i);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
