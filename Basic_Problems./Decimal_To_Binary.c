#include<stdio.h>
long long convert (long long);
    void main()
        {
            long long n,bin;
            printf("Enter decimal number : ");
            scanf("%lld",&n);
            bin = convert(n);
            printf("%lld in decimal number = %lld binary",n,bin);
        }
        long long convert (long long n)
        {
            long long bin = 0;
            long long rem, i = 1;
            while (n!=0)
            {
                rem = n % 2;
                n/= 2;
                bin = bin + (rem * i);
                i = i * 10; 
            }
            return bin;
        }