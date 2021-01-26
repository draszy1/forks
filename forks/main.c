//
//  main.c
//  forks
//
//  Created by Szymon Drawski on 26/01/2021.
//

#include <stdio.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int counter = 0;
    
    int pidc1 = fork();
    int pidc2 = fork();
    
    if (pidc1 == 0) {
        printf("Child1: %\d\n", ++counter);
    }
    
    if (pidc2 == 0) {
        printf("Child2: %\d\n", ++counter);
    }
    
    printf("Parent: %d\n", counter);
    
    return 0;
}
