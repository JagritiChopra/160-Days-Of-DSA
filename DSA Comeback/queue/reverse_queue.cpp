///  givn a queue and have to reerse it :

stack <int> st;

while(!q.empty()){
    st.push(q.front()) ;
    q.pop() ;
}
while(st.empty()){
    q.push(st.top()) ;
    st.pop() ;
}

