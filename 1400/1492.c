main() {
    int a, arr[101], sum=0;
    scanf("%d",&a);
    for (int i=0;i<a;i++)
        scanf("%d", &arr[i]);
    for (int i=0;i<a;i++){
        sum=0;
        for (int j=0;j<i+1;j++){
            sum+=arr[j];
        }
        printf("%d ",sum);
    }
}