main() {
    int n,tmp;
    scanf("%d", &n);
    for (int i=n;i>0;i--){
        tmp=i;
        for (int j=n;j>0;j--){
            printf("%d ", tmp);
            tmp+=n;
        }
        printf("\n");
    }
}