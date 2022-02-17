class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int  x,i,y,n=tokens.size(),j,k=0;
        stack <int> st;
        for(i=0;i<n;i++){
        if(tokens[i]!="+" && tokens[i]!="*" && tokens[i]!= "-" && tokens[i]!="/"){
            if((tokens[i])[0]=='-'){
            for(j=1;(tokens[i])[j]!='\0';++j){ 
            k=k*10+((int)((tokens[i])[j])-48);
                   }
            st.push(-k);}
            else{
            for(j=0;(tokens[i])[j]!='\0';++j){ 
            k=k*10+((int)((tokens[i])[j])-48);
                   }
            st.push(k);}
                
            
            k=0;
            
        }
            else{
                if(tokens[i]=="+"){
                    x=st.top();
                    st.pop();
                    y=st.top();
                    st.pop();
                    st.push(x+y);
                }
                 else if(tokens[i]=="-"){
                    x=st.top();
                    st.pop();
                    y=st.top();
                     st.pop();
                    st.push(y-x);
                }
                 else if(tokens[i]=="*"){
                    x=st.top();
                    st.pop();
                    y=st.top();
                     st.pop();
                    st.push(x*y);
                }
                 else if(tokens[i]=="/"){
                    x=st.top();
                    st.pop();
                    y=st.top();
                     st.pop();
                    st.push(y/x);
                }
            }
        } 
           return st.top();}
};
