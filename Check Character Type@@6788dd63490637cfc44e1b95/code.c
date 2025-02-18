 #include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    scanf(" %c", &ch); // Note the space before %c to consume any whitespace

    // Check if the character is a vowel, consonant, digit, or special character
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check for vowels
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    } else {
        printf("Special Character");
    }

    return 0;
}