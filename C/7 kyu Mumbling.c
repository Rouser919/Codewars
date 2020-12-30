char* accum(const char* source) {
    int size = strlen(source);
    char* string = (char*)malloc(sizeof(char) * (size - 1 + ((1 + size) / 2 * size)));
    int i = 0;
    int index_string = 0;
    int multi = 1;
    int control;
    while (i < size) {
        string[index_string] = toupper(source[i]);
        index_string++;
        for (control = multi-1; control != 0; control--, index_string++) {
            string[index_string] = tolower(source[i]);
        }
        multi++;
        string[index_string] = '-';
        index_string++;
        i++;
    }
    string[index_string-1] = '\0';
    return string;
}
