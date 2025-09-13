// Recursion

int count (int i, int n){
    if(i == n) return 1 ;
    if(i>n) return 0;

    return count(i ,n)+ count(i+2 ,n);
}

// top down approach

vector<int> dp(n+2 , -1) ;

int count (int i , int n , vector<int>&dp){
    if( i == n) return i ;
    if(i>n) return 0 ;
   
    if dp[i] != -1 return dp[i] ;
    
    return dp[i] = count(i ,n) + count(i+2, n);

}

// bottom down approach

int count (int i , int n, vector<int>&dp){
    if(i==n) return 1 ;
    
    if(i>n) return 0 ;
    
    if(dp[i] !=-1)  
    return dp[i];
}
int climbStairs (int n ){
    
    vector<int>dp(n+2,-1);
    
    dp[n]=1;
    dp[n+1]=0;

    for(int i = n-1 ;   i>=0 ;i--)
        dp[i] = dp[i+1] +dp[i+2] ;

        return dp[0] ;
}

// optimised:

int climbStairs (int n ){
    
   

    for(int i = n-1 ;   i>=0 ;i--)
        {
            curr = next+ next2;
            next2 = next ;
            next = curr ;
        }

        return curr;
}