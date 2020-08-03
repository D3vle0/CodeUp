main() {
    int t, s1, s2;
    scanf("%d %d %d", &t, &s1, &s2);
    for (int i=t;i<90;i+=5){
            s1++;
    }
    if (s1==s2)
        printf("same");
    else if (s1 > s2)
        printf("win");
    else
        printf("lose");
}