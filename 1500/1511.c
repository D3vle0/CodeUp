main() {
    int arr[101][101], cnt=1, n, sum=0;
    scanf("%d", &n);

    /* 배열에 값 저장 */
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            arr[i][j]=cnt;
            cnt++;
        }
    }

    /* 테두리 계산 */
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==0 || i==n-1)
                sum+=arr[i][j];
            else
                if (j==0 || j==n-1)
                    sum+=arr[i][j];
        }
    }

    printf("%d",sum);
}