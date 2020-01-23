void sort(int n, int x[ ]);
   main()
   {
       int i;
       int marks[5] = {40, 90, 73, 81, 35};

       printf("Marks before sorting\n");
       for(i = 0; i < 5; i++)
          printf("%d ", marks[i]);
       printf("\n\n");

       sort (5, marks);
       printf("Marks after sorting\n");
       for(i = 0; i < 5; i++)
          printf("%4d", marks[i]);
       printf("\n");
   }
   void sort(int n, int x[ ])
   {
       int i, j, t;

       for(i = 0; i < n; i++)
          for(j = i+1; j <= n; j++)
             if(x[i] >= x[j])
             {
                t = x[i];
                x[i] = x[j];
                x[j] = t;
             }
   }
