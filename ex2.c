//
//  ex2.c
//  Week6
//
//  Created by Daniil Shilintsev on 26/09/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <zconf.h>

int main() {
    int fd[2];
    char child[100], parent[100];
    scanf("%s", parent);
    pipe(fd);
    int pid;
    pid = fork();
    if (pid == 0) {
        close(fd[1]);
        read(fd[0], child, 100 + 1);
        close(fd[0]);
    } else {
        close(fd[0]);
        write(fd[1], parent, 100 + 1);
        close(fd[1]);
        printf("%s", parent);
    }
    return 0;
}
