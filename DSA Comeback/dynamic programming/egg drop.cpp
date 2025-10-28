// n eggs k floors

int solve ( int n , int f){


    if( n==1 ){
        return f ;
    }
    
    if (f ==1){
        return 1 ;
    }

    
    int mn = INT_MAX ;

    for(int k = 0 ; k<f ;k++){

        int temp = 1 + max( solve(n-1 , k-1) , solve(n , n-k)  ) ;  
        mn = min(mn , temp) ;
        
    }
    
    return  mn ;
}

//bottom approach

int solve ( int n , int f){


    if( n==1 ){
        return f ;
    }
    
    if (f ==1){
        return 1 ;
    }

    if (t[n][f] == -1 ){
        return t[n][f] ;
    }
    
    int mn = INT_MAX ;

    for(int k = 0 ; k<f ;k++){

        int temp = 1 + max( solve(n-1 , k-1) , solve(n , n-k)  ) ;  
        mn = min(mn , temp) ;
        
    }
    
    return t[n][f] = mn ;
}




// optimization

 int solve ( int n , int f){


    if( n==1 ){
        return f ;
    }

    if (f ==1){
        return 1 ;
    }

    if (t[n][f] == -1 ){
        return t[n][f] ;
    }                   

    int mn = INT_MAX ;

    for(int k = 0 ; k<f ;k++){

        if( t[n-1][f-1]  != -1 ){
            int low  = t[n-1][k-1] ;
        }
        else{
             low = solve(n-1 ,k-1) ;
             t[n-1][k-1] =  low;
        }

        if(  t[n][f-k] != -1){
            int high= t[n][f-k] ;
        }
        else{
            high = solve(n , f-k) ;
            t[n][f-k] = high ;
        }



        int temp = 1 + max( low , high  ) ;  
        mn = min(mn , temp) ;

    }                                   

    return t[n][f] = mn ;
}                       



























