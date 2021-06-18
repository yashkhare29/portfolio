#include<stdio.h>
#include "student.h"
int main()
{
    FILE *fp=fopen("d:\\stud_rec.txt","rb");
    if(fp==NULL)
    {
        printf("sorry ");
        return 1;
    }
    int n;
    printf("enter which no. record you want");
    scanf(" %d",&n);
    struct student s;
    fseek(fp,(n-1)*sizeof(s),SEEK_SET);
    fread(&s,sizeof(s),1,fp);
    {
        printf("\n%d %s %f",s.roll,s.name,s.per);

    }
    printf("\n file read successfully");
    fclose(fp);
    return 0;

}
