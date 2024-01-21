#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//node structure
struct student {
//data
char stu_name[40];
int id;
char fa_name[35];
char sem[20];

 //link / next node address
 struct student *next;
};

// create a node with data and link
void create(struct student *head)
{
    printf("Enter Student Information (Name,ID,Father name,Semester)\n");
    while(head!=NULL)
    {
      scanf("%s", head->stu_name);
      scanf("%d", &head->id);
      scanf("%s", head->fa_name);
      scanf("%s", head->sem);
      printf("\n");

       if(head->id==0)
       {
           head->next=NULL;
           break;
       }
       else {
        head->next=(struct student*)malloc(sizeof(struct student));
        head= head->next;
       }
    }
}

void print(struct student *head)
{
    while(head!=NULL)
    {
        printf("Student Name= %s\n",head->stu_name);
        printf("Student ID= %d\n",head->id);
        printf("Student Father Name= %s\n",head->fa_name);
        printf("Semester Name= %s\n",head->stu_name);
        printf("\n");


        head=head->next;
    }
}




int main()
{
struct student *head;
head=(struct student*)malloc(sizeof(struct student));

create(head);
print(head);
return 0;
}
