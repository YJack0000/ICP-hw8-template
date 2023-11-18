#include <stdio.h>
#include <string.h>
#include "webpage.h"
#include "browser.h"

int main() {
    char op[10];
    // TODO: Create browser with capacity 10

    while(scanf("%s", op) != EOF) {
        if (strcmp(op, "new") == 0) {
            // TODO
        } else if (strcmp(op, "back") == 0) {
            // TODO
        } else if (strcmp(op, "forward") == 0) {
            // TODO
        } else if (strcmp(op, "current") == 0) {
            puts("---");
            // TODO
            puts("---");
        } else {
            printf("Invalid operation\n");
        }
    }

    // TODO: Destory browser
}