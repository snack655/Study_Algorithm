#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node * next;
} Node;

typedef struct _CLL
{
    Node * tail;
    Node * cur;
    Node * before;
    int numOfData;
} CList;

typedef CList List;

void ListInit(List * plist);
void LInsert(List * plist, Data data);      // 꼬리에 노드를 추가

int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);
Data LRemove(List * plist);
int LCount(List * plist);

int main() {
    // 원형 연결 리스트의 생성 및 초기화 ///////
    int N, K;
    List list;
    int data;
    ListInit(&list);
    scanf("%d %d", &N, &K);
    
    if(K == 1) {
        printf("<");
        for(int i = 1; i < N; i++) {
            printf("%d, ", i);
        }
        printf("%d>", N);
        return 0;
    }
    
    // 오름차순으로 N개의 값을 저장
    for (int j = 1; j <= N; j++)
        LInsert(&list, j);
    
    // 노드를 삭제하며 출력
    printf("<");
    int cnt = 0;
    
    if(LCount(&list) != 0) {
        LFirst(&list, &data);
        cnt++;
        if(LCount(&list) == 1) {
            LFirst(&list, &data);
            printf("%d>", LRemove(&list));
            return 0;
        }
        while (1) {
            LNext(&list, &data);
            cnt++;
            if(cnt%K == 0) {
                printf("%d, ", LRemove(&list));
                if(LCount(&list) == 1) {
                    LNext(&list, &data);
                    printf("%d>", LRemove(&list));
                    return 0;
                }
            }
        }
    }
    return 0;
}

void ListInit(List * plist)
{
    plist->tail = NULL;
    plist->cur = NULL;
    plist->before = NULL;
    plist->numOfData = 0;
}

void LInsert(List * plist, Data data)
{
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    
    if(plist->tail == NULL)
    {
        plist->tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        newNode->next = plist->tail->next;
        plist->tail->next = newNode;
        plist->tail = newNode;
    }
    
    (plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata)
{
    if(plist->tail == NULL)
        return FALSE;
    
    plist->before = plist->tail;
    plist->cur = plist->tail->next;
    
    *pdata = plist->cur->data;
    return TRUE;
}

int LNext(List * plist, Data * pdata)
{
    if(plist->tail == NULL)
        return FALSE;
    
    plist->before = plist->cur;
    plist->cur = plist->cur->next;
    
    *pdata = plist->cur->data;
    return TRUE;
}

Data LRemove(List * plist)
{
    Node * rpos = plist->cur;
    Data rdata = rpos->data;
    
    if(rpos == plist->tail)
    {
        if(plist->tail == plist->tail->next)
            plist->tail = NULL;
        else
            plist->tail = plist->before;
    }
    
    plist->before->next = plist->cur->next;
    plist->cur = plist->before;
    
    free(rpos);
    (plist->numOfData)--;
    return rdata;
}

int LCount(List * plist)
{
    return plist->numOfData;
}
