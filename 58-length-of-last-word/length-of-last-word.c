int lengthOfLastWord(char* s) {
    int i = 0;

    // Find end of string
    while (s[i] != '\0') {
        i++;
    }

    // Move backwards
    i--;

    // Skip spaces at the end
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count last word
    int count = 0;

    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;
}