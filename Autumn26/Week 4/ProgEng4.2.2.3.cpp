//next day program
#include <iostream>

bool leap_year(int year){
    bool ly=false;
    if ((year%4==0&&year%100!=0)||year%400==0)
    {
        ly=true;
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    //check for feb if feb check for leap, months in 30 days < 31 days so check 31 days first
    if (m1<8)
    {
        y2=y1;
        if (m1%2==1)
        {
            if (d1<31)
            {
                d2=d1+1;
                m2=m1;
                return;
            }
            d2=1;
            m2=m1+1;
            return;
        }
        //feburary
        if (m1==2)
        {
            if (leap_year(y1))
            {
                if (d1==29)
                {
                    d2=1;
                    m2=3;
                    return;
                }
                d2=d1+1;
                m2=2;
                return;
            }
            if (d1==28)
            {
                m2=3;
                d2=1;
                return;
            }
            m2=2;
            d2=d1+1;
            return;
        }
        if (d1<30)
        {
            d2=d1+1;
            m2=m1;
            return;
        }
        d2=1;
        m2=m1+1;
        return;
    }
    //when m1>=8 (august onwards)
    if (m1%2==0)
    {
        if (d1<31)
        {
            d2=d1+1;
            m2=m1;
            y2=y1;
            return;
        }
        d2=1;
        if (m1<12)
        {
            m2=m1+1;
            y2=y1;
            return;
        }
        m2=1;
        y2=y1+1;
        return;

    }
    y2=y1;
    if (d1<30)
    {
        d2=d1+1;
        m2=m1;
        return;
    }
    d2=1;
    m2=m1+1;
}

int main(){
    // TODO: write a main to test the function
    //test case for every month, normal day of the month, end of month for each
    //test cases for normal days of the month excluding feburary
    int d=23, m=1, y=2003, nd,nm, ny;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==24) << (nm==m) << (ny==y) << std::endl;
    m=3;
    for (int i=0;i<10;i++)
    {
        next_date(d,m,y,nd,nm,ny);
        std::cout << (nd==24) << (nm==m) << (ny==y) <<std::endl;
        m++;
    }
    //test cases for last days of the month for months with 31 days
    d=31;
    m=1;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==m+1) << (ny==y) << std::endl;
    m=3;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==m+1) << (ny==y) << std::endl;
    m=5;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==m+1) << (ny==y) << std::endl;
    m=7;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==m+1) << (ny==y) << std::endl;
    m=8;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==m+1) << (ny==y) << std::endl;
    m=10;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==m+1) << (ny==y) << std::endl;
    m=12;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==1) << (ny==2004) << std::endl;
    //test cases for last days of the month for months with 30 days
    d=30;
    m=4;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==m+1) << (ny==y) << std::endl;
    m=6;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==m+1) << (ny==y) << std::endl;
    m=9;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==m+1) << (ny==y) << std::endl;
    m=11;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==m+1) << (ny==y) << std::endl;
    //test cases for feburary
    //non-leap years
    m=2;
    d=23;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==24) << (nm==2) << (ny==y) << std::endl;
    d=28;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==3) << (ny==y) << std::endl;
    //leap years
    y=2004;
    d=23;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==24) << (nm==2) << (ny==y) << std::endl;
    d=29;
    next_date(d,m,y,nd,nm,ny);
    std::cout << (nd==1) << (nm==3) << (ny==y) << std::endl;
}
