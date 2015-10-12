#include<stdio.h>
#include<math.h>
int prefix(int host)
{
    int ans = 0;
    int x=1,y=2;

    while(ans==0)
    {
        if(host >= (pow(2,x)-2) && host <= ((pow(2,y)-2)))
        {
            ans = 32 - y;
        }
        else{x++;y++;}

    }
    return ans;
}

void subnetmask(int x)
{
    int ans = 0;

    if(x >= 9 && x <=16)
    {
        ans = 256 - pow(2,(16 - x));
        printf("\nSM: 255.%d.0.0",ans);
    }
    else if(x >= 17 && x <=24)
    {
        ans = 256 - pow(2,(24 - x));
        printf("\nSM: 255.255.%d.0",ans);
    }

    else if(x >= 25 && x <=32)
    {
        ans = 256 - pow(2,(32 - x));
        printf("\nSM: 255.255.255.%d",ans);
    }

}
main()
{
    int x;
    printf("VLSM by v4hn\n\nHosts: ");
    scanf("%d",&x);
    printf("\nPN: /%d", prefix(x));
    subnetmask(prefix(x));
return 0;
}


