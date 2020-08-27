
NoScript XSS Warning

NoScript detected a potential Cross-Site Scripting attack

from https://cs50.stackexchange.com to http://www.pythontutor.com.

Suspicious data:

(URL) http://www.pythontutor.com/visualize.html#code=#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <strings.h>

int main(void)

{

int i = 0, j = 0, n = 0;

char* words = "This is a sentence";

char word[20];

char* s[4];

while (words[i] != '\0')

    {

// ' ' is the separator to split words

    if (words[i] == ' ')

    {

    word[j] = '\0';

    s[n] = malloc(sizeof(word));

    strcpy(s[n], word);

    j = 0;

    n++;

    memset(word, 0, sizeof(word));

    }

    else

    {

    word[j++] = words[i];

    }

    i++;

    }

// The last word isn't delimited by a ' ', so

// we copy it separately (you could also make it point

// to word, which now holds only the last word

s[n] = malloc(sizeof(word));

strcpy(s[n], word);

}&cumulative=true&curInstr=0&heapPrimitives=true&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=[]&textReferences=false
