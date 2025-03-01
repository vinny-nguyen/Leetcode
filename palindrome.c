bool isPalindrome(int x) {

    char temp[20] = {0};
    sprintf(temp, "%d", x);

    int len = strlen(temp);
    char rev[20]; // increased size to 20 incase of overflow

    for (int i = 0; i < len; i++) {
        rev[i] = temp[len - i - 1];
    }

    rev[len] = '\0';

    if (strcmp(rev, temp) == 0) {
        return true;
    } else {
        return false;
    }
    
}