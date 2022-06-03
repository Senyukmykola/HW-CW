#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_DATES 20

struct str
{
    int date;
    int month;
    int year;
} dat[MAX_DATES];


int main()
{
    FILE* read;
    int n, i, min_year, max_year;

   
    i = 0;
    read = fopen("dates.txt", "rt");
    while (!feof(read))
    {
        fscanf(read, "%d./%d/%d", &dat[i].date, &dat[i].month, &dat[i].year);
        i++;
    }
    fclose(read);
    n = i++;  

    min_year = dat[0].year;
    max_year = dat[0].year;
    for (i = 1; i < n; i++)
    {
        if (dat[i].year < min_year) {
            min_year = dat[i].year;
        }

        if (dat[i].year > max_year) {
            max_year = dat[i].year;
        }
    }
    FILE* write;
   
   write = fopen("out.txt", "w");
   
        fprintf(write, "\nMin year = %d\n", min_year);
        fprintf(write, "\nMax year = %d", max_year);
        
        
    
    fclose(write);
    
  


    return 0;
}