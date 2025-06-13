int findRadius(int* houses, int housesSize, int* heaters, int heatersSize) {
    int q=housesSize/heatersSize;
    int h=0,k=0,p=q,u=0;
    for(int i=0;i<heatersSize;i++){
        
        for (int j = u; j < p && j < housesSize; j++){
            k=abs(heaters[i]-houses[j]);
            if(k>h){
                h=k;
            }
        }
        u=p;
        p=q+p;
    }
    return h;
}