#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int test_case = 1;
    while(t)
    {
        long long int s;
        cin>>s;
        long long int col, row;
        long long int sqrt_of_num = ceil(sqrt(s));
        long long int max = sqrt_of_num * sqrt_of_num;
        long long int min = (sqrt_of_num-1) * (sqrt_of_num-1) + 1;
        long long int mid = (min + max) / 2;
        if(sqrt_of_num % 2 == 0)
        {
            if(s - min >= sqrt_of_num)
            {
                row = max - s + 1;
                col = sqrt_of_num;
            }
            else
            {
                col = s - min + 1;
                row = sqrt_of_num;
            }
        }
        else
        {
            if(s - min >= sqrt_of_num)
            {
                row = sqrt_of_num;
                col = max - s + 1;
            }
            else
            {
                row = s - min + 1;
                col = sqrt_of_num;
            }
        }
        cout<<"Case "<< test_case <<": "<< col <<" "<<row<<endl;
        test_case++;
        t--;
    }
}
