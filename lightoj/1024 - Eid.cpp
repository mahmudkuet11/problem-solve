#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t, counter = 1;
    scanf("%d", &t);
    while(t--)
    {
        int n, i=0, max=0,j;
        scanf("%d", &n);
        int a[n];
        j = n;
        while(j--)
        {
            scanf("%d", &a[i]);
            if(a[i] >= max)
            {
                max = a[i];
            }
            i++;
        }
        j=0;
        bool loop = true;
        while(loop)
        {
            for(int i=0; i<n; i++)
            {
                if(max % a[i] == 0){
                    j++;
                }
            }
            if(j == n){
                loop = false;
            }else{
                max *= 2;
            }
        }
        printf("Case %d: %d\n", counter++, max);
    }
}
