#include <stdio.h> 
#include <stdlib.h>
#define LEN sizeof(struct ListNode)
struct ListNode{
	int val;
	struct ListNode *next;
};

struct ListNode *create(){
	int num = 0;
	struct ListNode *cur, *pre, *head = NULL;
	cur = pre = (struct ListNode*) malloc(LEN);
	printf("请输入第%d个值：",++num);
	scanf("%d",&cur->val);
	while(cur->val >=0 ){
		if(num == 1) head = cur;
		else pre->next = cur;
		pre = cur;
		cur = (struct ListNode*)malloc(LEN);		
		printf("请输入第%d个值：",++num);
		scanf("%d",&cur->val);		
	}
	pre->next = NULL;
	return head;
}

void print(struct ListNode *head){
	struct ListNode *pt = head;
	printf("链表的值为：");
	while (pt!= NULL){
		printf("%d",pt->val);
		if(pt->next != NULL) printf("->");
		pt = pt->next;
	}
	printf("\n");
}

struct ListNode *mergeTwoList(struct ListNode *L1,struct ListNode *L2){
	struct ListNode *cur, *pre ,*p1, *p2, *head = NULL;
	p1 = L1, p2 = L2;
	pre = cur =(struct ListNode *)malloc(LEN);
	int num = 0;
	while(p1 != NULL || p2 != NULL){
		if(p1 != NULL && p2 != NULL && p1->val <= p2->val) {
			cur->val = p1->val;
			p1 = p1->next;
		}
		else if(p1 != NULL && p2 != NULL && p1->val >= p2->val) {
			cur->val = p2->val;
			p2 = p2->next;
		}
		else if(p1 == NULL && p2 != NULL){
			cur->val = p2->val;
			p2 = p2->next;
		}
		else if(p2 == NULL && p1 != NULL){
			cur->val = p1->val;
			p1 = p1->next;
		}
		num++;
		if (num == 1) head = cur;
		else pre->next = cur;
		pre = cur;
		cur = (struct ListNode *)malloc(LEN);
	}
	pre->next = NULL;
	return head;
	
}

int main(){
	struct ListNode *L1 = create();
	struct ListNode *L2 = create();
	struct ListNode *L = mergeTwoList(L1,L2);
	print(L1);
	print(L2);
	print(L);
	return 0;
}
