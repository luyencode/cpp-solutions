/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

#define szCode 8
#define szFName 25
#define szName 12
#define szDate 11

typedef struct
{
    char Code[szCode];
    char FamilyName[szFName], Name[szName];
    char BirthDate[szDate];
    double Grade1, Grade2, Grade3;
    double GPA;
} Student;

char* fgetline(FILE* fp, char* str, int maxSize)
{
    int len, ch;
    if(feof(fp))
        return NULL;
    str[0] = 0; len = 0;
    do
    {
        ch = fgetc(fp);
        if(ch == '\n' || ch == EOF)
            break;
        if(len < maxSize - 1)
        {
            str[len] = ch;
            len++;
        }
    }while(1);
    str[len] = 0;
    return str;
}

int getStudent(FILE* fp, Student& sv)
{
    double s1, s2, s3; int ch;
    fgetline(fp, sv.Code, szCode);
    fgetline(fp, sv.FamilyName, szFName);
    fgetline(fp, sv.Name, szName);
    fgetline(fp, sv.BirthDate, szDate);
    if(fscanf(fp, "%lf %lf %lf", &s1, &s2, &s3) <= 0)
    {
        return 0;
    }
    ch = fgetc(fp);  // Lấy ký tự xuống dòng '\n'
    sv.Grade1 = s1; sv.Grade2 = s2; sv.Grade3 = s3; sv.GPA = (s1 + s2 + s3) / 3;
    return 1;
}
#define maxStudent 100

void getAllStudents(FILE* fp, Student svList[], int &n)
{
    Student sv; n = 0;
    while(!feof(fp))
    {
        if(n < maxStudent && getStudent(fp, sv))
        {
            svList[n] = sv;
            n++;
        }
        else
            break;
    }
}

void printStudent(FILE* fp, Student svList[], int n)
{
    for(int i = 0; i < n; i++)
    {
        fprintf(fp, "%s\t%15s %7s\t%s\t %4.1f %4.1f %4.1f %4.1f\n",
            svList[i].Code, svList[i].FamilyName,
            svList[i].Name, svList[i].BirthDate,
            svList[i].Grade1, svList[i].Grade2, svList[i].Grade3,
            svList[i].GPA);
    }
}

void sortStudentByGPA(Student svList[], int n)
{
    Student sv;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(svList[i].GPA < svList[j].GPA)
            {
                sv = svList[i];
                svList[i] = svList[j];
                svList[j] = sv;
            }
        }
    }
}

void main()
{
    Student MyStudents[maxStudent]; int nStudent;
    FILE* fp = fopen("Students.txt", "rt");
    FILE* fpOut;
    if(fp == NULL)
    {
        return;
    }
    getAllStudents(fp, MyStudents, nStudent);
    sortStudentByGPA(MyStudents, nStudent);
    fpOut = fopen("SortStudents.txt", "wt");
    if(fpOut != NULL)
    {
        printStudent(fpOut, MyStudents, nStudent);
        fclose(fpOut);
    }
    fclose(fp);

    getch();

}