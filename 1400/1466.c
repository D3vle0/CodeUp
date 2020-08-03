main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int cnt=n*m;
    int n_=cnt;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            printf("%d ", cnt);
            cnt-=n;
        }
        printf("\n");
        cnt=--n_;
    }
}