main() {
    int n,cnt=1;
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }
}