main(n,i,j,c){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2){
            c=(i-1)*n;
            for(j=1;j<=n;j++)
                printf("%d ",++c);
            printf("\n");
        }
        else{
            c=i*n+1;
            for(j=1;j<=n;j++)
                printf("%d ",--c);
            printf("\n");
        } 
    }
}