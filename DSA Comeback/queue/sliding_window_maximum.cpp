// brute force approach

for(int i =0 ; i<n-k  ;i++ ){
    
    for(int j = i ; j<i+k ;j++){
        int mac_ele = arr[i];
        mmax_ele ( max, arr[j]) ;
    }
    ans.push_back(max_ele)  ;
}


// optimised using dque


for(int i = 0 ;i<k ;i++){
    while(q.back() > nums[i] && !q.empty()){
        q.pop();
    }q.push_back(nums[i]) ;
}

ans.push_back(q.front()) ;

for (int i =k-1 ; i<n ;i++){
    if(d.front() <=i-k   ){
        d.pop_front();
    }
    while(q.back() < nums[i] && !q.empty()){
        q.pop() ;
    }    q.push_back(nums[i]) ;
ans.push_back(q.front()) ;

}

return ans


