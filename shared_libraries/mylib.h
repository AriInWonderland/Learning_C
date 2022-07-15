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

/* 1-19 A function which reverses a character string*/
void reverse(char s[]){
    int i,j;
    char temp;

    for(i=0; s[i]!='\0'; i++)
        ;
    i--;
   
    j=0;
    while(j<i){
        temp=s[j];
        s[j]=s[i];
        s[i]=temp;
        j++;
        i--;
    }
}

/* 2-3 Write a function htoi(s) which converts a string of hexadecimal digits (including an optional 
 * 0x or 0X) to its equivalent integer value, 0 through 9, a through f, and A through F*/
int htoi(char s[], int lim){
    int i, n, j, c=0, sk, dec=0;
    
    n = getlen(s, lim);   
    for(sk=0; s[sk] == 'x' || s[sk] == 'X' || s[sk] == '0'; sk++) 
        ; 

    for(i=sk, j=n-sk-1; i < n; i++, j--){
        if(isdigit(s[i]))
            c = s[i] - '0'; 

        else{
            switch(s[i]){
                case 'A': case 'a':
                    c = 10;
                    break;
                case 'B': case 'b':
                    c = 11;
                    break;
                case 'C': case 'c':
                    c = 12;
                    break;
                case 'D': case 'd':
                    c = 13;
                    break;
                case 'E': case 'e':
                    c = 14;
                    break;
                case 'F': case 'f':
                    c = 15;
                    break;
            }
        }
        dec += c * pot(16, j);
    }
    return dec;
}
/* A not-very-good power function, it's name is pot because of power in spanish,
 * (potencia), I just didn't want to use the math.h library so I made one myself
 * which works with ints (the one from the library uses doubles if I am not mistaken*/
int pot(x,y){
    int c = x;   /* Not sure why but I doesn't work properly whithout this*/
    if(y != 0 && y != 1)
        while(y>1){
            x *= c;
            --y;
        }
    else if(y == 0)
        x = 1;
    else if(y == 1)
        return x;
    return x;
}

int getlen(char s[], int lim){
    int i;

    for(i=0; s[i] != '\0' && i < lim; i++)
        ;

    return i-1;
}
