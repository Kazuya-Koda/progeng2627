//dino game
//input 0 to do nothing, input 1 to jump, input 2 to stop
//todo implement dino update system, implement death mechanic
#include<iostream>
int main()
//lots of bugs i dont have time to resolve, kinda works.
{
    int n0=0,n1=0,n2=2,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,in=0,seed=1234324543,cgen=1,air=0;
    //n8 is directly above n2, both dino bits
    while (in!=1)
    {
        std::cout << "00" << n8 << "00000" << std::endl <<
            n0 << n1 << n2 << n3 << n4 << n5 << n6 << n7 << std::endl;
        std::cin >> in;
        n0=0;

        //jump up code
        if ((in==1)&&(n2==2))
        {
            air=2;
            n2=0;
            n8=2;
        }
        //cell updating code:
        if (n1==1)
        {
            n1=0;
            n0=1;
        }
        if (n2==1)
        {
            n2=0;
            n1=1;
        }
        if (n3==1)
        {
            if (n2==2)
            {
                in=2;
            }
            else
            {
                n3=0;
                n2=1;
            }
        }
        if (n4==1)
        {
            n4=0;
            n3=1;
        }
        if (n5==1)
        {
            n5=0;
            n4=1;
        }
        if (n6==1)
        {
            n6=0;
            n5=1;
        }
        if (n7==1)
        {
            n7=0;
            n6=1;
        }
        if (cgen==1)
        {
            n7=1;
        }
        //dino update code

        //jump down
        else if ((air==0)&&(n8==2))
        {
            if (n3==1)
            {
                in=2;
            }
            else
            {
                n2=2;
                n8=0;
            }
        }
        else if (air>0)
        {
            air = air-1;
        }
        //cactus gen code
        for (int i=10;i<12;i++)
        {
            seed=seed+i;
        }
        cgen=seed%2;
    }
}