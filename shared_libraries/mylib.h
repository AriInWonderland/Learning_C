/* This file includes custom libraries I use for the stuff that I do in C.*/

/* This function prints the s char, x times, so it can be easily used to make 
 * cute outputs without making the code an unreadible mess.*/
void repeater(char s, int x){
	int i;
	
	printf("*");
	for(i=1;i < x; i++)
		printf("%c", s);
	printf("*");

	printf("\n");
}
/* The for() loop begins with i=1 and goes until i < x instead of going from i=0 to i<=x because I wanted to 
 * have the little starts without printing more digits than the ones you specify when calling the function.*/

/*Chapter 1-9, Character arrays
 *------------------------------

getline: read a line into s, return length*/
int getline(char s[], int lim){
    int c,i;

    for(i=0; i<lim-1 && (c=getchar())!='[' && c!='\n'; ++i)
        s[i]=c;
    if(c=='\n'){
        s[i]=c;
        ++i;
    }
    s[i]='\0';
 
    return i;
}

/* copy: copy 'from' into 'to'*/
void copy(char to[], char from[]){
    int i=0;

    while((to[i] = from[i]) != '\0')
        ++i;
}
/*"Static variable copy"(concatenate) I made this specially for 1-17, it concatenates
 * the lines instead of overwriting them. So yeah, my versions of strcpy and strcat*/
void concat(char to[], char from[]){
    static int i=0;
    int a=0;

    while((to[i] = from[a])!='\0'){
        i++;
        a++;
    }
}

/* 1-18 a function which removes the trailing blanks and tabs and deletes entirely blank lines.*/
int rmv(char s[]){
    int i=0;

    while(s[i] != '\n') /* Searches for the end of the line*/
        i++;
    i--;
    while(i>= 0 && s[i] == ' ' || s[i] == '\t') /*Goes backwards for each ' ' or tab, to overwrite them later*/
        i--;
    
    if(i>=0){ /* If it's all blanks i should be -1*/
        i++;
        s[i]='\n';
        i++;
        s[i]='\0';
    }
    return i;
}

