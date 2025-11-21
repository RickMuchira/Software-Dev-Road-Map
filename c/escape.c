#include <stdio.h>

//The backslash (\) escape character turns special characters into string characters:
//we need them to avid problems like this lets say we want to double quote a string

//x wrong way
//char txt ="We are the so called "Ricklings" so cool and awesome";
//instead we must use (/)
int main(){
    //to produce double quotes
char txt[] ="We are the so called \"Ricklings\" so cool and awesome";
printf("%s\n" ,txt);
//when you want a apostrophe in the case of c it s a single quote
//bs no change when It/'s or It's
char apostrophe[] = "It\'s raining";
printf("%s\n" ,apostrophe);
//if you want a backslash (//) works if not at the end
char backslash[] = "The character \\ is called backslash.";
printf("%s\n", backslash);
return 0;
}
