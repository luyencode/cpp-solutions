/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#define  MaxWords 1024
#define  wMaxLength 64

typedef struct {
    char word[wMaxLength];
    long count;
} WordEntry;

void checkNewWord(WordEntry Words[], int& nWord, char* word)
{
    int n = nWord; WordEntry newWord;
    if(word == NULL || strlen(word) == 0)
        return;

    while(n--)
    {
        if(strcmp(Words[n].word, word) == 0)
        {
            Words[n].count++; return;
        }
    }
    if(nWord < MaxWords)
    {
        strcpy(newWord.word, word); newWord.count = 1;
        Words[nWord] = newWord; nWord++;
    }
}

void countEachWord(FILE* inFile, WordEntry Words[], int& nWord)
{
    char word[wMaxLength] = "";
    int ch, len = 0;

    while(!feof(inFile))
    {
        ch = fgetc(inFile);
        if(ch == EOF)
            break;
        ch = tolower(ch);
        if('a' <= ch && ch <= 'z')
        {
            word[len] = ch; len++;       // thêm ký tự vào từ hiện hành        
        }
        else
        {
            word[len] = 0;
            checkNewWord(Words, nWord, word);
            word[0] = 0; len = 0;     // Đưa về chuỗi rỗng, xét từ kế
        }
    }
}

void showWords(FILE* outFile, WordEntry Words[], int nWord)
{
    for(int i = 0; i < nWord; i++)
    {
        fprintf(outFile, "%s: %ld time(s)\n", Words[i].word, Words[i].count);
    }
}

void main()
{
    WordEntry Words[MaxWords]; int nWord;
    FILE* inFile = fopen("Data.txt", "rt");
    //FILE* outFile = fopen("Result.txt", "wt");
    if(inFile != NULL)
    {
        countEachWord(inFile, Words, nWord);
        showWords(stdout, Words, nWord);
        fclose(inFile);
    }
    getch();
}