main() {
    int n;
    scanf("%d", &n);
    int cnt=n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            printf("%d ", cnt);
            cnt--;
        }
        cnt=n*(i+1);
        printf("\n");
    }
}