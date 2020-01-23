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



