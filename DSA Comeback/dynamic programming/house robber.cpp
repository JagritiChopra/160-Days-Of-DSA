//recursion
int robbery ( int index , vector<int> nums)
{
    if ((index==0))
    {
        return nums[0]  ;      /* code */
    }
    if(index <0){
        return 0;
    }
    return  max( nums[index] + robbery(i-2 , nums) , Robbery(i-1 , nums)
  )
}

//top down

int robbery ( int index , vector<int> nums , vector<int>&dp )
{
    if ((index==0))
    {
        return nums[0]  ;      /* code */
    }
    if(index == 1){
        return max(nums[0] , nums[1] )  ;
    }
    if(dp[index] == -1){
        return dp[index] ;
    }
    return dp[index] = max( nums[index] + robbery(index-2 , nums , dp) , robbery(index-1 , nums , dp)
  )
}

//bottom up 
int rob( vector<int>&nums )
{
    int n =nums.size();
    vector<int>dp(n, -1);

    dp[0] = nums[0] ;
    dp[1] = max(nums [0] , nums[1]) ;

    for( int i =0 ;i<n ;i++)
    {
        dp[i] = max(nums[i] + dp[i-2] , dp[i-1] ) ;
    }
    
    return dp[n-1] ;
}


//better

int curr , prev = max(  nums[0] , nums[1]) , prev2 =nums[0]  ;

for( int i =2 ; i<n; i++){
    curr = max( nums[i] +prev2  , prev);
    prev2 = prev;
    prev = curr ;
}
return curr ;








