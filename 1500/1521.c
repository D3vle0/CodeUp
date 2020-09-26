main() {
    int k,day,cnt=0;
    scanf("%d %d", &k, &day);
    int data[51][51];
    for (int i=0;i<k;i++)
        for (int j=0;j<k;j++)
            scanf("%d", &data[i][j]);
    for (int i=0;i<k;i++)
        for (int j=0;j<k;j++)
            if (data[i][j] + day >= 0 && data[i][j] + day <= 5 && data[i][j] != -1)
                cnt++;
    printf("%d",cnt);
}