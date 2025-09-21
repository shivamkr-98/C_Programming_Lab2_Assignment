#include <stdio.h>

int main() {
    printf("Hello\nWorld");       // \n -> newline
    printf("\n---\n");

    printf("Hello\tWorld");       // \t -> tab space
    printf("\n---\n");

    printf("Hello\bWorld");       // \b -> backspace (removes previous char visually)
    printf("\n---\n");

    printf("It\'s C language");   // \' -> single quote inside string
    printf("\n---\n");

    printf("This is a backslash: \\"); // \\ -> print single backslash
    printf("\n---\n");

    printf("Slash example: /");   // / itself prints normally, but sometimes shown as \/
    printf("\n---\n");

    printf("He said: \"C is powerful\""); // \" -> double quote inside string
    printf("\n---\n");

    printf("Hello\rWorld");       // \r -> carriage return (cursor goes to start of line)
    printf("\n---\n");

    printf("Beep!\a");            // \a -> alert sound (may beep depending on system)
    printf("\n---\n");

    return 0;
}
