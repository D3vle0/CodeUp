main()
{
    int a, b, c;
    scanf("%d", &a);
    if (a < 60) printf("0 0 0 %d", a);
    else if (60 <= a && a < 3600) printf("0 0 %d %d", a / 60, a % 60);
    else if (3600 <= a && a < 86400)printf("0 %d %d %d", a / 3600, a / 60 % 60, a % 3600 % 60);
    else printf("%d %d %d %d", a / 86400, a / 3600 % 24, a / 60 % 60, a % 86400 % 60);
}