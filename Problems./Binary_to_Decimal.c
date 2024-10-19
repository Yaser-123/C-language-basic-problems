#include<stdio.h>
#include<math.h>
int binarytoDecimal(long binarynum)
    {
        int decimalnum=0, temp=0, remainder;
        while(binarynum!=0)
        {
            remainder = binarynum % 10;
            binarynum = binarynum / 10;
            decimalnum = decimalnum + remainder*pow(2,temp);
            temp ++;
        }
        return decimalnum;
    }
    void main()
    {
        long binarynum;
        printf("Enter Binary Number");
        scanf("%ld",&binarynum);
        printf("Equivalent decimal number is %d",binarytoDecimal(binarynum));
    }