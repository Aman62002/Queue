class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
       stack<int> st;
       while(!q.empty()){
           int ele=q.front();
           st.push(ele);
           q.pop();
       }
       
       while(!st.empty()){
           int ele=st.top();
           q.push(ele);
           st.pop();
       }
       return q;
    }
};
