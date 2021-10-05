#include<stdio.h>
#include <stdlib.h>

unsigned int size = 52000 ;
unsigned int realSizeOfLetter;
 int countWord=1;
 int countSentence=0;
 double index=0;
 int numberOfLetter=0;
 double L =0.0;
 double S =0.0;

int main(void){
        //le 3'ayd line number 37 count number of letter and take string and make array with the same size
        char *oldtext = malloc(sizeof(*oldtext) * size);
        printf("Text: ");
       scanf("%[^\n]%*c", oldtext);
       //printf("%s\n", oldtext);


        for(int i=1,c=0;c<=30;i++)
        {
                if(oldtext[i]==0)
                {
                        c++;

                }
                else
                {
                        c = 0;
                }

                realSizeOfLetter++;
        }
        realSizeOfLetter-=30;
        char newtext[realSizeOfLetter];
        for(int i=0;i<realSizeOfLetter;i++)
        {
                newtext[i]=oldtext[i];
        }
        //printf("your new size : %i\nyour new text : %s ",realSize,newtext);
        free(oldtext);
        //from line 39 to line 45 to count number of words
        for(int i=0;i<realSizeOfLetter;i++)
        {
                if (( newtext[i]==' '&&newtext[i+1]>=65&&newtext[i+1]<123)||(newtext[i]==34&&newtext[i+1]>=65&&newtext[i+1]<123 ))//32 becouse every char bigger than 65 '65'is the first number
                {
                        countWord++;
                        }
        }

        //printf("%i",countWord);
        //from line number 47 to line
        for(int i=0;i<realSizeOfLetter;i++)
        {
                if(newtext[i]==46||newtext[i]==33||newtext[i]==63)
                {
                      countSentence++;
                }
        }
        for(int i=0;i<realSizeOfLetter;i++)
        {
                if(newtext[i]>64&&newtext[i]<123)//32 becouse every char bigger than 65 '65'is the first number
                {
                        numberOfLetter++;
                        }

        }
        //printf("%i",countSentence);
        L = (double)((double)numberOfLetter*100.0)/(double)countWord;
        S = (double)((double)countSentence*100.0)/(double)countWord;
        //printf("size of letter %i\nnumber of leter%i\nsize of Sences %i\nsize of words%i\n",realSizeOfLetter,numberOfLetter,countSentence,countWord);
        //printf("L is %.2f\nS is %.2f",L,S);
        index = (0.0588 * L) - (0.296 * S) - 15.8;
        //printf("index %f\n",index);
        if ((int)(index+.5) == (int)(index+1))
        {
                ++index;

                if(index>16)
                {
                         printf("Grade %i+\n",16);

                }
                else if (index<1)
                {
                         printf("Before Grade 1\n");
                }
                else{
                 printf("Grade %i\n",(int)index);
                }
        }
        else
        {
                if(index>16)
                {
                         printf("Grade %i+\n",16);

                }
                else if (index<1)
                {
                         printf("BBefore Grade 1\n");
                }
                else
                {
                 printf("Grade %i\n",(int)index);
                }
        }


 }
