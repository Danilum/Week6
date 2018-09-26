//
//  ex4.c
//  Week6
//
//  Created by Daniil Shilintsev on 26/09/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void usr1_handler(int signal_number) {
    printf("qwertyqwertyqwerty\n");
}

void kill_handler(int signal_number) {
    printf("qwertyqwertyqwerty\n");
}

void stop_handler(int signal_number) {
    printf("qwertyqwertyqwerty\n");
}

int main() {
    signal(SIGUSR1, usr1_handler);
    signal(SIGKILL, kill_handler);
    signal(SIGSTOP, stop_handler);
    while (1) {
        sleep(1);
    }
    return 0;
}
