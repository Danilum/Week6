//
//  ex3.c
//  Week6
//
//  Created by Daniil Shilintsev on 26/09/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void signal_handler(int signal_number) {
    printf("qwertyqwertyqwerty\n");
}

int main() {
    signal(SIGINT, signal_handler);
    sleep(5);
    return 0;
}
