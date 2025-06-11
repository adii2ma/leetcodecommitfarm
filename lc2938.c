long long minimumSteps(char* s) {
    int q=0,k=0;
    while(s[k+1]!='\0'){
         
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='1'){
                for(int j=i+1;s[j]!='\0';j++){
                    if(s[j]=='0'){
                        char temp=s[j];
                        s[j]=s[i];
                        s[i]=temp;
                        q++;
                    }
                    else{
                        k=j;
                        break;
                    }
            }
            
        }else{
            continue;
        }
    }}
    return q;
    
}