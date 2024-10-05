#include<stdio.h>
int main()
{
        FILE *fp;
        char ch;
        fp = fopen ("open.TXT", "w");
    char name[50];
    int a[5], G[5], i;
    float cgpa;

    printf("Enter Student Name:");
    scanf("%s", &name);
    printf("Enter his course marks: ");
        for(i=0; i<5 ;i++)
    scanf("%d", &a[i]);

        for(i=0; i<5; i++)
    if(a[i]>=80 && a[i]<=100)
        G[i]=4;
        else if(a[i]>=70 && a[i]<= 79)
            G[i]= 3.5;
            else if(a[i]>=60 && a[i]<= 69)
                G[i]= 3;
                else if(a[i]>=50 && a[i]<= 59)
                    G[i]= 2.5;
                        else if(a[i]<=49)
                                G[i]= 0;
                                 cgpa= ((( G[0]*3)+(G[1]*1.5)+(G[2]*3)+(G[3]*1.5)+(G[4]*2))/ (3+1.5+3+1.5+2));
                                 printf("cgpa of %s is : %0.2f \n", name , cgpa);

                                 if (cgpa== 0)
                                     printf(" Letter Grade: F");
                                         else if (cgpa<= 2.5)
                                     printf("Letter Grade : D");

                                        else if (cgpa<= 3)
                                     printf(" Letter Grade: C");
                                         else if (cgpa<= 3.5)
                                     printf("Letter Grade : B");

                                        else if (cgpa<= 4)
                                     printf(" Letter Grade : A");
                                     fprintf(fp, "cgpa of %s is : %0.2f\n\n", name, cgpa);
                                     fclose(fp);
                                     return 0;
                                     }
/***/
#include<stdio.h>
int main()
{
    char name[50];
    int a[5], G[5], i;
    float cgpa;

    printf("Enter Student Name:");
    scanf("%s", &name);
    printf("Enter his course marks: ");
        for(i=0; i<5 ;i++)
    scanf("%d", &a[i]);

        for(i=0; i<5; i++)
    if(a[i]>=80 && a[i]<=100)
        G[i]=4;
        else if(a[i]>=70 && a[i]<= 79)
            G[i]= 3.5;
            else if(a[i]>=60 && a[i]<= 69)
                G[i]= 3;
                else if(a[i]>=50 && a[i]<= 59)
                    G[i]= 2.5;
                        else if(a[i]<=49)
                                G[i]= 0;
                                 cgpa= ((( G[0]*3)+(G[1]*1.5)+(G[2]*3)+(G[3]*1.5)+(G[4]*2))/ (3+1.5+3+1.5+2));
                                 printf("cgpa of %s is : %0.2f \n", name , cgpa);

                                 if (cgpa== 0)
                                     printf(" Letter Grade: F");
                                         else if (cgpa<= 2.5)
                                     printf("Letter Grade : D");

                                        else if (cgpa<= 3)
                                     printf(" Letter Grade: C");
                                         else if (cgpa<= 3.5)
                                     printf("Letter Grade : B");

                                        else if (cgpa<= 4)
                                     printf(" Letter Grade : A");
                                     return 0;
                                     }
/***/
#include<bits/stdc++.h>
using namespace std;
int arr[200005] ;
int main(){
    int n, i, sum=0,q;
    cin>>n>>q;
    for(i=1; i<=n; i++){
    scanf("%d", &arr[i]);
    if(arr[i]!=0) sum++;
    }

while(q--){
   int t,v;
   cin>>t>>v;
   if(t==2){
   arr[v]++;
   if(arr[v] == 1)
      sum++;
  }
  else{
  arr[v]--;
  if(arr[v] == 0)
      sum--;
}
        printf("%d\n",sum);
}
return 0;
}
/***/
#include<stdio.h>
int main()
{
    long long int a, b, c, n;
    scanf("%lld", &n);

    a=0;
    b=1;
    printf("\n");
    while(a<=n){
        printf("%lld\n",a);
        c=a+b;
        a=b;
        b=c;

    }
    printf("\n");
    return 0;
}
/***/
#include<stdio.h>
int main ()
{
    FILE *fp;
    int number, quantity, i;
    float price, value;
    char item[10], filename[10];
    printf("Input file name\n");
    scanf("%s", filename);
    fp= fopen("D:\\filename.doc", "w");
    printf("Input inventory data\n\n");
    printf("Item name Number Price Quantity\n");
    for(i=1; i<=3; i++)
    {
        fscanf(stdin, "%s %d %f %d", item, &number, &price, &quantity);
        fprintf(fp, "%s %d %0.2f %d", item, number, price, quantity);
        }
        fclose(fp);
        fprintf(stdout, "\n\n");
        fp=fopen("D:\\filename.doc", "r");
        printf("Item name Number Price Quantity value\n");
        for(i=1; i<=3; i++)
        {
             fscanf(fp, "%s %d %f %d", item, &number, &price, &quantity);
             value=price*quantity;
             fprintf(stdout, "%-8s %7d %8.2f %8d %11.2f\n", item, number, price, quantity, value);
             }
             fclose(fp);
             return 0;
             }
/***/
#include<stdio.h>
#include<conio.h>
int main()
{
   int n, i, a[100], data, flag=0;
   printf("How many number you want to enter:");
   scanf("%d", &n);
   printf("enter your values:");
   for(i=1; i<=n; i++){
   scanf("%d", &a[i]);
   }
   printf("which data you want to find:");
   scanf("%d", &data);
   for(i=1; i<=n; i++){
       if(a[i]== data){
       flag=flag+1;
       break;
       }
    }
    if(flag>0){
    printf("The data is found & position is : %d", &flag);
    }
    else
    printf("The data is not found");
    return 0;
    }
/***/
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c;
    printf("Enter the value of equation:");
    scanf("%f %f %f", &a, &b, &c);
    float D, r1, r2;
    D= (b*b-4*a*c);
    if(D>0){
        printf("The roots are real and distinct\n");
        r1=(-b+sqrt(D)/(2*a));
        r2=(-b-sqrt(D)/(2*a));
        printf("the roots are %0.3 %0.3", r1, r2);
        }
    else if (D==0){
        printf("the root is real");
        printf("and it is %f", (-b/(2*a)));
        }
    else
    printf("the roots are imaginary\n");
    return 0;
    }
/***/
#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}
/***/
#include<stdio.h>
int main()
{
    int ft_marks, st_marks, final_marks;
    float total_marks;
    ft_marks=80;
    st_marks=74;
    final_marks=97;
    total_marks=ft_marks/4.0+st_marks/4.0+final_marks/2.0;
    printf("%f\n",total_marks);
    return 0;
}
/***/
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

const int inf=(1<<28);
struct node{
    int value;
    int index;
    int last;
}tmp , BLOCK[400];
int INDEX[400],arr[100005],Output[100005];

void initialize(int N, int blockSZ ,int blockln)
{
    int tp;
    for(int i = 1; i <= blockSZ ; i++){
        int idx = (i-1)*blockln;
        for(int j = 1 ; j <= blockln; j++){
                for(int k = idx+1 ; k < idx+blockln; k++){
                    if(k >= N) break;
                    if(arr[k] > arr[k+1]){
                        tp = arr[k] ;
                        arr[k] =  arr[k+1];
                        arr[k+1] = tp;
                    }
                }
        }
        BLOCK[i].value = arr[idx+1];
        BLOCK[i].index = idx+1;
        if(idx+blockln <= N)
            BLOCK[i].last = idx+blockln;
        else
            BLOCK[i].last = N;
    }

}

void Sort(int N , int blockSZ , int blockln)
{
    for(int i = 1; i <= blockSZ; i++){
        for(int j = 1; j < blockSZ; j++){
            if(BLOCK[j].value > BLOCK[j+1].value){
                tmp = BLOCK[j];
            BLOCK[j] = BLOCK[j+1];
               BLOCK[j+1] = tmp;
            }
        }
    }
}
int main()
{
        double total_time;
    	clock_t start, end;
    	start = clock();
    	//time count starts
    	srand(time(NULL));



    freopen("set1.txt","r",stdin);
    int N;
    scanf("%d",&N);

    for(int i = 1; i <= N; i++)
        scanf("%d",&arr[i]);

    int blockSZ = sqrt(N);
    int blockln = N/blockSZ;

    if(blockln * blockSZ != N)
        blockln += 1;

    initialize(N , blockSZ , blockln);
    Sort(N , blockSZ , blockln);

    for(int i = 1; i <= N; i++){
        Output[i] = BLOCK[1].value;
        int inx = BLOCK[1].index + 1 , Crnt, pos , R;
        if(inx <= BLOCK[1].last){
            Crnt = arr[inx];
            pos = inx;
            R = BLOCK[1].last;
        }
        else{
            Crnt = inf;
            pos = N + 1;
            R = 0;
        }

        int j = 2;
        while(Crnt > BLOCK[j].value && j <= blockSZ){
            BLOCK[j-1] = BLOCK[j];
            j++;
        }
        BLOCK[j-1].value = Crnt;
        BLOCK[j-1].index = pos;
        BLOCK[j-1].last = R;
    }

    end = clock();
    	//time count stops
    	total_time = ((double) (end - start)) / CLK_TCK;
    	//calulate total time
    	printf("\nTime taken ---> : %f", total_time);
    	return 0;
}
/***/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[107];
    int n,s,j,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        gets(a);
        s=0;
        n=strlen(a);
            for(j=0;j<n;j++)
            {
            if((a[j]== '.')|| (a[j]=='a')||(a[j]=='d')||(a[j]=='g')||(a[j]=='j')||(a[j]=='m')||(a[j]=='p')||(a[j]=='t')||(a[j]=='w')||(a[j]==' '))
            s+=1;
                else if((a[j]== ',') || (a[j]=='b')||(a[j]=='e')||(a[j]=='h')||(a[j]=='k')||(a[j]=='n')||(a[j]=='q')||(a[j]=='u')||(a[j]=='x'))
            s+=2;
                    else if((a[j]== '*')|| (a[j]=='c')||(a[j]=='f')||(a[j]=='i')||(a[j]=='l')||(a[j]=='o')||(a[j]=='r')||(a[j]=='v')||(a[j]=='y'))
            s+=3;
                        else if((a[j]=='s')||(a[j]=='z'))
            s+=4;
        }
        printf("%d\n",s);
    }

    return 0;
}
/***/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
    {
    char n[1000];
    int num,i,result,j;
    double sum, l;


    while(scanf("%s", n)!=EOF)
    {
        l=strlen(n);
        sum=0;
        for(i=0; i<l; i++){
            sum=sum+pow(n[i]-'0' , l);
        }
        result=0;
        for(j=0; j<l; j++){
            result= result*10+(n[j]-'0');
        }
    if(sum==result)
         printf("Armstrong\n");
    else
         printf("Not Armstrong\n");
    }
    return 0;
}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n)!=EOF){
    int a, b,row, i;
    row=ceil(((sqrt(1+8*n))-1)/2);

    //cout<<v<<endl;

    int pos=row-1,x,y;
    int last=(pos*(pos+1))/2;

    if(row%2==0)
    {
        x=0;
        y=row+1;
    }
    else
    {
        x=row+1;
        y=0;
    }

    for(int i=last+1; ; i++)
    {
        if(row%2==0)
        {
            x++;
            y--;
        }
        else
        {
            x--;
            y++;
        }
        if(i==n)
        {

            printf("TERM %d IS %d/%d  \n",n,x,y);
            break;
        }
    }
    }

    return 0;

}
/***/


#include<bits/stdc++.h>
using namespace std;
int mian()
{

    int r=1, i, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        r=r*i;
    printf("factorial is %d", r);
    return 0;

}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, div, mod;
    while(scanf("%d %d", &t, &n)!=EOF)
    {
    div= t/n;
    mod=t%n;
    printf("div=%d mod=%d\n", div, mod);
    }
    return 0;

}
/***/
#include <stdio.h>

int main()
{
  int n, array[1000], i, d, temp;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 1 ; i <= i - 1; i++) {
    d = i;

    while ( d > 0 && array[d] < array[d-1]) {
      temp= array[d];
      array[d]= array[d-1];
      array[d-1]=temp;
      d--;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}
/***/
#include<algorithm>
#include<stdio.h>
using namespace std;
long int a[2000005],i,n;
int main()
{
    while (scanf("%ld",&n)!=EOF)
    {
        if (n==0)
        {
            break;
        }
        for (i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        sort(a,a+n);
        for (i=0;i<n;i++)
        {
            printf("%ld",a[i]);
            if (i<(n-1))
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, x, k, total, ans,t,i, rem;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
    scanf("%d %d %d", &n, &x,&k);
    //swap(x, k);
    total=n*(n+1)/2;
    rem= (x*(2*k+(x-1)*1))/2;
    //cout<<rem<<endl;
    ans= total-rem;
    printf("Case %d: %d\n",i, ans);
    }

    return 0;

}
/***/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i, r, l, sum;
    while(gets(s))
    {

        r=0;
        l=strlen(s);
        if(l==1 && s[0]=='0')
            break;
        for(i=0; i<l; i++)
        {
            sum=r*10+(s[i]- '0');
            r=sum%11;

        }
        if(r==0)
            printf("Y\n");
        else
            printf("N\n");

    }
    return 0;

}
/***/
#include <stdio.h>
int main ()
{
int num1,num2, value;
char sign;
printf("please enter a number:");
scanf("%d", &num1);
printf("please enter another number:");
scanf("%d", &num2);
value = num1+num2;
sign = '+';
printf("%d %c %d = %d\n",num1, sign, num2,value);
value = num1-num2;
sign ='-';
printf("%d %c %d =%d\n",num1, sign, num2, value);
value = num1*num2;
sign = '*';
printf("%d %c %d =%d\n",num1, sign, num2, value);
value =num1/num2;
sign = '/';
printf("%d %c %d = %d\n",num1,sign, num2, value );
return 0;
}
/***/
#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];
    int i,len,vowel,consonant;
    printf("Enter the string:");
    gets(text);

    vowel=0;
    consonant=0;
    len=strlen(text);

    for(i=0;i<len;i++)
    {

    if(text[i]=='a' || text[i]=='e' || text[i]=='i' ||text[i]=='o' || text[i]=='u' || text[i]=='A' || text[i]=='E'  || text[i]=='I'  || text[i]=='O'||text[i]=='U')
        {
            vowel++;
        }
    else if(text[i]>='a'&& text[i]>='z'||text[i]>='A'&& text[i]>='Z')
        {
            consonant++;

        }
}
    printf("total number of vowel = %d\n",vowel);
    printf("total number of consonant= %d",consonant);
    return 0;
    }
/***/
#include<stdio.h>

int main()
{

int n ,c ,p;

scanf("%d",&n);

while(n--)
{
    scanf("%d %d",&c,&p);

    printf("%d %d\n",c,p);

    if(c==1)
     printf("%d\n",p);
     else if(c>1)
     printf("%d\n",(c*p)-(c-1)*2);

}

return 0;
}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[100],i,j,t, n;
     scanf("%d", &t);
     for(j=0; j<t; j++)
     {
     scanf("%d", &n);
     for(i=0; i<3; i++)
     {
          scanf("%d", &a[i]);

     }
          sort(a,a+3);


     for(i=0; i<3; i++){
          printf("Data set #%d:\n Orginal order:\n smallest to largest: a[i]\n");
     }

}
 return 0;
}
/***/
