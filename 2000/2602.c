sum;main() {
    int s1[3]={0},s2[3]={0},s3[3]={0};
    for (int i=0;i<3;i++)
        scanf("%d", &s1[i]);
    for (int i=0;i<3;i++)
        scanf("%d", &s2[i]);
    for (int i=0;i<3;i++)
        scanf("%d", &s3[i]);

    for (int i=0;i<3;i++){
        printf("%d ", s1[i]);
    }
    printf("%d\n", s1[0]+s1[1]+s1[2]);
    sum+=s1[0]+s1[1]+s1[2];

    for (int i=0;i<3;i++){
        printf("%d ", s2[i]);
    }
    printf("%d\n", s2[0]+s2[1]+s2[2]);
    sum+=s2[0]+s2[1]+s2[2];

    for (int i=0;i<3;i++){
        printf("%d ", s3[i]);
    }
    printf("%d\n", s3[0]+s3[1]+s3[2]);
    sum+=s3[0]+s3[1]+s3[2];

    printf("%d ",s1[0]+s2[0]+s3[0]);
    printf("%d ",s1[1]+s2[1]+s3[1]);
    printf("%d ",s1[2]+s2[2]+s3[2]);
    printf("%d ",sum);
}