// https://leetcode.com/problems/shuffle-string/

char* restoreString(char* s, int* indices, int indicesSize) {

    char *temp_s = malloc((indicesSize + 1) * sizeof(char));

    if (!temp_s) {
        return NULL;
    }

    for (int i = 0; i < indicesSize; i++) {

        temp_s[indices[i]] = s[i];
    } 
    
    temp_s[indicesSize] = '\0';

    return temp_s;
}
