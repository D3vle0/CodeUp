double abs(double n){
    return n>=0?n:-n;
}

main() {
    double n;
    scanf("%lf", &n);
    printf("%.10g", abs(n));
}