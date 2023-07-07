#include <stdio.h>
#include <string.h>

void check_password(char* password) {
    if (strlen(password) == 4) {
        if ((password[0] + (password[2] << 3) & 0x46C6F48) == 74215240 && password[1] == -1 && password[3] == 0) {
            // Correct password logic
        } else {
            // Incorrect password logic
        }
    } else {
        // Incorrect password length logic
    }
}

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <password>\n", argv[0]);
        return 1;
    }

    check_password(argv[1]);

    return 0;
}
