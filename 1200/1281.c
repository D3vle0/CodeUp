main() {
    int a,b,sum=0;
    scanf("%d %d", &a, &b);

    if (a&1)
        printf("%d",a);
    else
        printf("-%d", a);
    for (int i=a+1;i<=b;i++)
        printf("%c%d", i&1?'+':'-', i);

    for (int i=a;i<=b;i++)
        if (i&1)
            sum+=i;
        else
            sum-=i;
    printf("=%d", sum);
}