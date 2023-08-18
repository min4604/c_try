

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
/*
uint16_t data[]={};
int main()
{
    printf("{");
    for(int i=0;i<342;i++)
    {
        
        printf("{");
        for(int j=0;j<200;j++)
        {
            uint32_t ss=0;
            if(data[i*400+j]<32767)
                ss=2;
            else
                ss=0;
            if(data[i*400+j+200]<32767)
                ss+=1;
            else
                ss+=0;
            
           //ss=(data[i*400+j]<<1)+data[i*400+j+200];
            printf("0x%x ," ,ss);
            
        }
        for(int j=0;j<200;j++)
        {
            uint32_t ss=0;
            
            if(data[i*400+j]<16383)
                ss=0;
            else if(data[i*400+j]<32767)
                ss=2;
            else if(data[i*400+j]<49151)
                ss=0;
            else
                ss=2;
            if(data[i*400+j+200]<16383)
                ss+=0;
            else if(data[i*400+j+200]<32767)
                ss+=1;
            else if(data[i*400+j+200]<49151)
                ss+=0;
            else
                ss+=1;
                
                
             //ss=(data[i*400+j]<<1)+data[i*400+j+200];
            printf("0x%x ," ,ss);
            
        }
        printf("0x0,0x0,0xaa,0x0,0xa0,0x0,0xaa,0xa0");
        printf("},\n");
    }
    printf("};");

    return 0;
}
*/
int ct=0;
int coot=0;
int main()
{
    printf("{");
    for(int i=0;i<400;i++)
    {
        if(i%40==0)
        {
           ct++;
        }
        for(int j=0;j<400;j++)
        {
            
            if(i <2 || i>397)
            {
                printf("1,");
            }
            else
            {
                
                if(j%10==ct && j%10==(ct+1))
                {
                    printf("1,");
                }
                else
                {
                    printf("0,");
                }
            }
        }
        printf("\n");
    }/*
    for(int i=0;i<400;i++)
    {
        
        printf("{");
        for(int j=0;j<200;j++)
        {
            
           uint8_t ss=(data[i*400+j]<<1)+data[i*400+j+200];
            printf("0x%x ," ,ss);
            
        }
        for(int j=0;j<200;j++)
        {
           
            uint8_t ss=(data[i*400+j]<<1)+data[i*400+j+200];
            printf("0x%x ," ,ss);
            
        }
        printf("0x0,0x0,0xaa,0x0,0xa0,0x0,0xaa,0xa0");
        printf("},\n");
    }
    printf("};");
*/
    return 0;
}