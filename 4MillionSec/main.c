//
//  main.c
//  4MillionSec
//
//  Created by Ken Swain on 6/5/14.
//  Copyright (c) 2014 KenSwain. All rights reserved.
//

#include <stdio.h>
#include <time.h>
void futureDate (int seconds)
{
    long epochPLusTarget = time(NULL) + seconds;
    
    struct tm future;
    
    localtime_r(&epochPLusTarget, &future);
    
    printf("The future date is %d-%d-%d.\n", future.tm_wday, future.tm_mon+1, future.tm_year + 1900);
   
};

int main(int argc, const char * argv[])
{
    futureDate(4000);
    
    return 0;

    
}

