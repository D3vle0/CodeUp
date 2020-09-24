a[100001];main(n,k,i) {
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(k==a[i]){
            printf("%d",i+1);
            return;
        }
    }
    puts("-1");
}