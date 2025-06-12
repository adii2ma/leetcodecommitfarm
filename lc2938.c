long long minimumSteps(char* s) {
    long long q = 0;
    int len = 0;
    int z=0;
    
    while (s[len] != '\0') len++;
    
    for(int i =0;i<len;i++){
        if(s[i]=='1'){
            z++;
        }
        if(z>=1 && s[i]=='0'){
            q+=z;
        }
    }
     

    return q;
}
