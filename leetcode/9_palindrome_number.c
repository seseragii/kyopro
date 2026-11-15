bool isPalindrome(int x){
    if(x<0){
        return false;
    }
    int xx = x;
    int digits=-1;
    int *arr = (int*) malloc(0);
    while(xx>0){
        int rem = xx%10;
        xx = (xx-rem)/10;
        digits++;
        int *myonmyon = (int*) realloc(arr, sizeof(int)*(digits+1));
        arr = myonmyon;
        arr[digits]=rem;
    }
    bool palin = true;
    for(int i=0; i<digits; i++){
        if(arr[i]!=arr[digits-i]){
            palin = false;
            return false;
        }
        else{
            palin = true;
        }
    }
    free(arr);
    if(palin){
        return true;
    }
    else{
        return false;
    }
}