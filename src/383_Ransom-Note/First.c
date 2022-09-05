// My First Solution... kind of a stupid program.
// 4 ms(< 88.2%), 6.6 MB(< 40.02%)

bool canConstruct(char * ransomNote, char * magazine){
    int alphabet[26] = {0};
    char* ptr = magazine;
    while(*ptr)
        alphabet[*(ptr++) - 'a']++;
    ptr = ransomNote;
    while(*ptr)
        if(--alphabet[*(ptr++) - 'a'] == -1)
            return false;
    return true;
}

// encountered bugs:
// runtime error: index -376483328 out of bounds for type 'int [26]' [solution.c]
// Cause: while(*ptr) not while(ptr)
//
// alphabet[*(ptr++) - 'a'] better than alphabet[(int)*(ptr++) - 95]
