    #include<stdio.h>
    #include<conio.h>
    void main()  
    {
        //clrscr();
        int i,n,p,k;
        printf("Enter any number ");
        scanf("%d", &n);
        p = 0;
        k = n;
        while(n>0)
        {
            i = n%10;
            p = p*10 + i;
            n = n/10;
        }
        if(p==k)
        {
            printf("The number is palendrome");
        }
        else
        {
            printf("The number is not palendrome");
        }
        getch();
    }