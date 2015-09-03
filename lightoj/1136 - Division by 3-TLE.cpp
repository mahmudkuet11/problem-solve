#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t, caseCounter = 1;
    scanf("%d", &t);
    while(t)
    {
        long long int a, b;
        scanf("%lld", &a);
        scanf("%lld", &b);
        long long int counter = 0;
        long long int sum = 0;
        sum = a * (a-1) /2;
        sum = sum % 3;
        for(long long int i=a; i<=b; i++)
        {
            sum += i;
            if(sum % 3 == 0)
            {
                counter++;
            }
            sum = sum % 3;
        }
        printf("Case %d: %d\n", caseCounter, counter);
        t--;
        caseCounter++;
    }


}

