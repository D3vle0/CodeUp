main() {
    int n;
    scanf("%d", &n);
    int n_=n;
    int cnt;
    for (int i=1;i<=n;i++){
        for (int j=1;i<=n;i++){
            printf("%d " , cnt);
            cnt+=n;
        }
        n_--;
        printf("\n");
    }
}