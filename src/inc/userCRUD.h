
// user_CRUD.c에서 사용하는 함수들을 모아 놓은 헤더파일입니다.
#ifndef USER_CRUD_H
#define USER_CRUD_H

typedef struct _user
{
    int studentNum;        // user 학번
    int money;             // user가 가지고있는 돈
    char name[20];         // user 이름
    int detergent;         // 세제 수량
    int fabricConditioner; // 섬유유연제 수량

} User;

typedef struct _list
{
    User user;          // 노드 안에서 user의 데이터를 저장
    struct _list *link; // list를 가리키는 링크
} List;

void ListInit(List *list);                   // list의 초기화를 담당한다
void ListInsert(List *list);                 // list에서 노드 추가
void ListDelete(List *list);                 // list에서 노드 삭제
void ListPrint(List *list);                  // list print
void ListIsEmpty(List *list);                // list가 비어있는지 확인
void ListUpdate(List *list);                 // user에 대한 정보 수정
struct _list *ListFind(List *list, int num); // 원하는 user 탐색

void washerShop(List *list);

int IntListFind(List *list, int num);

int saveUserData(List *list);
void loadUserData(List *list);

#endif