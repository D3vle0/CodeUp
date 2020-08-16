main(a,b,c) {
    scanf("%d %d %d",&a,&b,&c);
    b%2?printf("%d%d%d",a,b,c):printf("%d%d%d %d%d%d",a,b,c,a,b,c);
}