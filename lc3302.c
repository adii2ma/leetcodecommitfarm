/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* validSequence(char* word1, char* word2, int* returnSize) {
    int c=0,k=0,len=0,len2=0;
    while(word2[len]!='\0') len2++;
    int arr[len2]={0}
    while(word1[len]!='\0') len++;
    for(int l=0;word1[l]!='\0';l++){
    for(int i=0;word1[i]!='\0';i++){
        if(word1[0]!=word2[0]){
                continue;
        }
        for(int j=k;word2[j]='\0';j++ ){
                if(word1[i]==word2[j]){
                    k=j+1;
                    len2[c]=i;
                    c++;
                    break;
                    
                }
                 
        }
         
    }
    if(c==len-1){
        
    }
    }
}