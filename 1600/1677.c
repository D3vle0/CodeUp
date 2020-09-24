//main(a,b,i,j){scanf("%d%d",&a,&b);for(i=1;i<=b;i++){for(j=1;j<=a;j++)i==1||i==b?j==1||j==a?printf("+"):printf("-"):j==1||j==a?printf("|"):printf(" ");puts();}}
// 위쪽 코드는 분명히 로컬에서는 잘 돌아가는데 코드업에서는 안돌아감...
main() {
    int a,b;
    scanf("%d %d", &a, &b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=a;j++){
            if (i == 1 || i == b){
                if (j == 1 || j == a){
                    printf("+");
                }
                else {
                    printf("-");
                }
            }
            else {
                if (j == 1 || j == a){
                    printf("|");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}