int main()
{
    int fib1=0, fib2=1,fib3,num,count;
    printf("Enter the value of num\n");
    scanf("%d", &num);
    printf("First %d Fibonacci numbers are");
    scanf("%d\n",&fib1);
     count=2;
    while(count<num)
    {
        fib3=fib1+fib2;
        count++;
        printf("%d\n",fib3);
        }
    return 0;
    }
