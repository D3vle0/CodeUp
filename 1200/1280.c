main() {
    int a,b,sum=0;
    scanf("%d %d", &a, &b);

    for (int i=a;i<=b;i++)
        printf("%c%d", i&1?'+':'-', i);

    for (int i=a;i<=b;i++)
        if (i&1)
            sum+=i;
        else
            sum-=i;
    printf("=%d", sum);
}