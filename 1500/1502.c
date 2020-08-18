main(n,cnt,i,j){
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        cnt=i;
        for (j=1;j<=n;j++){
            printf("%d ",cnt);
            cnt+=n;
        }
        printf("\n");
    }
}