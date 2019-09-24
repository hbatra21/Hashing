#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	char data;
	struct node *next;
};

void hashingfunc(char c,struct node *hash)
{	
	printf("%c",c);
	struct node* newNode = (struct node*) malloc(sizeof(struct node));
	if(hash == NULL) {
		newNode->data = c;
		newNode->next = NULL;
		hash->next = newNode;	
		} else {
			struct node *traverse = NULL;
			traverse = hash;
			while(traverse->next != NULL) {
				traverse = traverse->next;
			}	
			newNode->data = c;
			newNode->next = NULL;
			traverse->next = newNode;
		}
	return;
}

int main()
{
	struct node *hashTable[26];
	int i;
	int j;	
	for(i = 0; i < 26; i++) {
		hashTable[i]= NULL;
	}
	int n;
	scanf("%d",&n);
	char c[n][100];
	for(i = 0; i < n; i++) {
		scanf("%s",c[i]);
		printf("%d", strlen(c[i]));
		printf("%d",(c[i][0]%97));
		for(j = 0; j < strlen(c[i]); j++) {
			printf("new");
			//hashingfunc(c[i][j],hashTable[(c[i][j]%97)]);
		}
	}
}
