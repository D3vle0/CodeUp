main(n,m,tmp1) {
    scanf("%d %d", &n, &m);
    if (m!=1){
        for (int i=n;i>0;i--){
        tmp1=i*i;
        for (int j=0;j<m;j++){
            printf("%d ", tmp1);
            tmp1++;
        }
        printf("\n");
        }
    }
    else {
        for (int i=n;i>0;i--)
            printf("%d\n", i);
    }
}