int main(int argc, char const *argv[])
{
    int num, up=0, down=0;
    scanf("%d", &num);
    int arr[10001];
    
    for (int i=0;i<num;i++)
        scanf("%d", &arr[i]);

    for (int i=0;i<num-1;i++){
        if (arr[i] < arr[i+1])
            up++;
        else if (arr[i] > arr[i+1])
            down++;
    }

    printf("%d %d", up, down);

    return 0;
}