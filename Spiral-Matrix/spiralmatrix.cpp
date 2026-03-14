//
//  main.c
//  Spiral Matrix
//
//  Created by Ahmet Bora Bakır on 1/21/25.
//

#include <stdio.h>
#define size 1000

void inputPrinter9000(int input, int arr[][size])
{
    for(int i = 0 ; i < input ; i++)
    {
        if(i < 1 && input > 3)
        {
            for(int j = 0 ; j < input ; j++)
                printf("%d  ",arr[i][j]);
            printf("\n");
        }
        else
        {
            for(int j = 0 ; j < input ; j++)
                printf("%d ",arr[i][j]);
            printf("\n");
        }
    }
}


int main(void)
{
    int limiter = 0 , counter = 1 , arr[size][size];
    int temp;
    
    int input;
    
    printf("Input arr size: ");
    scanf("%d",&input);
    
    temp = input;
    
    
        while(limiter < (input - 1))
        {
            for(int i = limiter ; i < temp ; i++)
                arr[limiter][i] = counter++;
            for(int j = limiter + 1 ; j < temp ; j++)
                arr[j][temp - 1] = counter++;
            for(int k = temp - 2 ; k >= limiter ; k--)
                arr[temp - 1][k] = counter ++;
            for(int l = temp - 2 ; l > limiter ; l--)
                arr[l][limiter] = counter++;
            
            temp--;
            limiter++;
        }
    
   // if(input % 2  != 0)
   //  arr[(input - 1) / 2][(input - 1) / 2] = input * input;
    
    inputPrinter9000(input, arr);
}
