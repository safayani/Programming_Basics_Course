#include <stdio.h>
int print_diamond();
int main()
{
    int d=0;
    int s=0;
    print_diamond();
    printf("enter input=");
    scanf("%d",&d);
    while (d!=0)
    {
        int r=d%10;
        d=d/10;
        s=s*10+r;
    }
    printf("\n result =%d",s);
}
int print_diamond()
{
    for (int i=1; i<=9;i++){
      int    space=(i<=5)? 4-(i-1):i-5;
      int    star=(i<=5) ? i*2-1:7-(i-6)*2;
      for (int j=1; j<=space;j++)
        printf(" ");
      for (int j=1; j<=star;j++)
        printf("*");

        printf("\n");

    }

}
