
int kthLargest(vector<int>& nums , int k){

    priority_queue<int , vector<int> , greate<int>p;

    for(int i = 0 ; i<k ;i++){
        p.push(nums[i]) ;
    }

    for(int i = k ; i<nums.size()  ;i++){
        if(nums[i] > p.top()){
            p.pop() ;
            p.push(nums[i]);
        }
    }
    return p.top() ;


}


