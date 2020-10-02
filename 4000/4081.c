main(n) {
    scanf("%d",&n);
    if (1<=n && n<74)
        printf("%d blue recommend",n);
    else if (74<=n && n<100)
        printf("%d green possible",n);
    else if (100<=n && n<148)
        printf("%d yellow careful",n);
    else if (148 <= n && n<=1000)
        printf("%d red stop",n);
    else
        printf("%d data error",n);
}