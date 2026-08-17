bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        // Opening bracket
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        }

        // Closing bracket
        else {
            // No matching opening bracket
            if (top == -1)
                return false;

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                return false;
            }
        }
    }

    // Stack should be empty
    return top == -1;
}