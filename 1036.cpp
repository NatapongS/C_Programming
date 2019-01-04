#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    char a[5];
    double xx=0,y=0;
    do
    {
        scanf("%s",a);
        int i=0;
        int x=strlen(a);
        double val=0;
        while(a[i]>='0'&&a[i]<='9')
        {
            i++;
        }

        for(int m=0;m<i;m++){
            val=val+(a[m]-'0')*pow(10,i-m-1);

        }
        if(x-i==2) val/=sqrt(2);
        switch(a[i])
        {
        case 'N' :
            y+=val;
            break;
        case 'S' :
            y-=val;
            break;
        case 'E' :
            xx+=val;
            break;
        case 'W' :
            xx-=val;
            break;
        }
        i++;
        if(x-i==1)
        {
            switch(a[i])
            {
            case 'E':
                xx+=val;
                break;
            case 'W':
                xx-=val;
                break;
            }
        }
    }
    while(a[strlen(a)-1]!='*');
    printf("%.3f %.3f\n%.3f",xx,y,sqrt(pow(xx,2)+pow(y,2)));
}
