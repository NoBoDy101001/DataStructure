#include <stdio.h>
#include <stdlib.h>

/*两个单链表的合并*/ 
typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表；空链表将输出NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();

    Print(L1);
    return 0;
}

List Read()
{
	int N;
	List L, p;
	scanf("%d", &N);
	L = (List)malloc(sizeof(List));
	p = (List)malloc(sizeof(List));
	L->Next = p;
	p->Next = NULL; 
	for(int i=0; i<N; i++){
		scanf("%d", &p->Data);
		p->Next = (List)malloc(sizeof(List));
		p = p->Next;
	}
	p->Next = NULL;
	return L;
} 

void Print( List L ){
	if(L->Next == NULL){
		printf("NULL");
		
	}
	while( L->Next != NULL ){
		L = L->Next;
		printf("%d", L->Data);
	}
}
