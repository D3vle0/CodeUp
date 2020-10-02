main(a,b,c,A,B,C){
    scanf("%d%d%d",&a,&b,&c);
    printf("%d ",a);
    if(0<=a&&a<=30){
        puts("Blue");
        A=1;
    }
    else if(31<=a&&a<=80){
        puts("Green");
        A=2;
    }
    else if(81<=a&&a<=150){
        puts("Yellow");
        A=3;
    }
    else{
        puts("Red");
        A=4;
    }
    printf("%d ",b);
    if(0<=b&&b<=15){
        puts("Blue");
        B=1;
    }
    else if(16<=b&&b<=35){
        puts("Green");
        B=2;
    }
    else if(36<=b&&b<=75){
        puts("Yellow");
        B=3;
    }
    else{
        puts("Red");
        B=4;
    }
    printf("%d ",c);
    if(0<=c&&c<=30){
        puts("Blue");
        C=1;
    }
    else if(31<=c&&c<=90){
        puts("Green");
        C=2;
    }
    else if(91<=c&&c<=150){
        puts("Yellow");
        C=3;
    }
    else{
        puts("Red");
        C=4;
    }
    if (A>=B&&A>=C){
        switch (A){
            case 1: puts("Recommend"); break;
            case 2: puts("Possible"); break;
            case 3: puts("Careful"); break;
            default: puts("Stop"); break;
        }
    }
    else if (B>=A&&B>=C){
        switch (B){
            case 1: puts("Recommend"); break;
            case 2: puts("Possible"); break;
            case 3: puts("Careful"); break;
            default: puts("Stop"); break;
        }
    }
    else{
        switch (C){
            case 1: puts("Recommend"); break;
            case 2: puts("Possible"); break;
            case 3: puts("Careful"); break;
            default: puts("Stop"); break;
        }
    }
    double avg;
    avg=(double)(a+b)/2;
    if (avg>=115.0)
        puts("SMS");
}