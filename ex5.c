//
//  ex5.c
//  Week6
//
//  Created by Daniil Shilintsev on 26/09/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main() {
    int pid = fork();
    if (pid != 0) {
        sleep(10);
        kill(pid, SIGTERM);
    }
    else {
        while (1) {
            printf("Kill Him!!!!! ");
            printf("Hahaha...I'm alive\n");
            sleep(1);
        }
    }
    return 0;
}
