# include <stdio.h>
# include <stdlib.h>
# define LEN sizeof(struct Student)

struct Student{
	long num;
	float score;
	struct Student * next;
};

int stud_Num;

struct Student * creat(void){
	stud_Num = 0;
	struct Student * p_now ,*p_pre ,*head = NULL;
	p_now = p_pre = (struct Student *) malloc(LEN);
	printf("请输入第%d个学生的学号：",stud_Num+1);
	scanf("%ld", &p_now->num);
	printf("请输入第%d个学生的成绩：",stud_Num+1);
	scanf("%f",&p_now->score);
	while(p_now -> num != 0){
		stud_Num ++;
		if(stud_Num == 1) head = p_now;
		else p_pre -> next = p_now;
		p_pre = p_now;
		p_now = (struct Student *) malloc(LEN);
		printf("请输入第%d个学生的学号：",stud_Num+1);
		scanf("%ld", &p_now->num);
		printf("请输入第%d个学生的成绩：",stud_Num+1);
		scanf("%f",&p_now->score);
	}
	p_pre -> next = NULL;
	return(head);
}

void print(struct Student * head){
	struct Student * pt = head;
	printf("%10s %10s\n","学号","成绩");
	while(pt != NULL){
		printf("%10ld %10.1f\n",pt->num,pt->score);
		pt = pt->next;
	}
} 

int main(void){
	struct Student *pt;
	pt = creat();
	printf("\nnum:%ld\nscore:%5.1f\n",pt->num,pt->score);
	print(pt);
	return 0;
}
 

