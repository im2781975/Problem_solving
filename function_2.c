#include<stdio.h>
#include<conio.h>

void linear_search();
int data_found();
void search_result(int value);

void main()
{
    linear_search();
    getch();
}
void linear_search()
{
    int n, i, ara[1000], value, flag=0;
    printf("How many numbers do you have: ");
    scanf("%d", &n);
    printf("Enter the values\n");
    for(i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    value = data_found();
    for(i=0; i<n; i++){
        if(value == ara[i]){
            flag = flag + 1;
        }
    }
    search_result(flag);
}

int data_found()
{
    int data;
    printf("Which data do you want to find: ");
    scanf("%d", &data);
    return data;
}

void search_result(int value)
{
    if(value > 0){
        printf("The data is found.\n");
    }
    else{
        printf("The data is not found.\n");
    }
}
