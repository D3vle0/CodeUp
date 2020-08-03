main() {
    int n;
    scanf("%d", &n);
    int cnt=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            printf("%d ", cnt);
            cnt+=n;
        }
        printf("\n");
        cnt=i+1;
    }
}