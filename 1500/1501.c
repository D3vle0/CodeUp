cnt;main(n,i,j) {
    scanf("%d",&n);
    for (i=0;++i<=n;){
        for (j=0;++j<=n;){
            printf("%d ",++cnt);
        }
        puts("");
    }
}