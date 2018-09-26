//
//  ex1.c
//  Week6
//
//  Created by Daniil Shilintsev on 26/09/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <zconf.h>

int main() {
    int fd[2];
    char str1[100];
    char str2[100];
    pipe(fd);
    scanf("%s", str1);
    write(fd[1], str1, 100 + 1);
    read(fd[0], str2, 100 + 1);
    printf("%s", str2);
    return 0;
}
