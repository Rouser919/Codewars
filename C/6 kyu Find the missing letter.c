char findMissingLetter(char array[], int arrayLength){
    int index = 0;
    while (index < arrayLength) {
        if (array[index] + 1 != array[index + 1]) {
            return array[index] + 1;
        }
        index++;
    }
    return ' ';
}
