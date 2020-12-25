# How to implement Chaining?
### Program:
#include<stdio.h>\
#include<stdlib.h>\
#define size 7\
struct node\
{\
    int data;\
    struct node *next;\
};\
struct node *chain[size];\
void init()\
{\
    int i;\
    for(i = 0; i < size; i++)\
        chain[i] = NULL;\
}\
void insert(int value)\
{\
    struct node *newNode = malloc(sizeof(struct node));\
    newNode->data = value;\
    newNode->next = NULL;\
    int key = value % size;\
    if(chain[key] == NULL)\
        chain[key] = newNode;\
    else\
    {\
        struct node *temp = chain[key];\
        while(temp->next)\
        {\
            temp = temp->next;\
        }\
        temp->next = newNode;\
    }\
}\
int search(int value)\
{\
    int key = value % size;\
    struct node *temp = chain[key];\
    while(temp)\
    {\
        if(temp->data == value)\
            return 1;\
        temp = temp->next;\
    }\
    return 0;\
}\
void print()\
{\
    int i;\
    for(i = 0; i < size; i++)\
    {\
        struct node *temp = chain[i];\
        printf("chain[%d]-->",i);\
        while(temp)\
        {\
            printf("%d -->",temp->data);\
            temp = temp->next;\
        }\
        printf("NULL\n");\
    }\
}\
int main()\
{\
    init();\
    insert(7);\
    insert(0);\
    insert(3);\
    insert(10);\
    insert(4);\
    insert(5);\
    print();\
    printf("Searching element 10\n");\
    if(search(10))\
        printf("Search Found\n");\
    else\
        printf("Search Not Found\n");\
    return 0;\
}\
#### Output :
<img src="https://github.com/NihalSuresh007/DSA/blob/main/dsa-cp-1/Open%20Addressing%20%26%20Chaining/Chaining.png" alternate="input">\
**Explanation:** Let's assume table size as 3.
Then the array of linked list will be,
-------------         -------------
|           |         |           |
| chain[0]  |-------> |    NULL   |
|           |         |           |
-------------         -------------
-------------         -------------
|           |         |           |
| chain[1]  |-------> |    NULL   |
|           |         |           |
-------------         -------------
-------------         -------------
|           |         |           |
| chain[2]  |-------> |    NULL   |
|           |         |           |
-------------         -------------
Initialize each list to NULL.
Insert 6
Hash key = 6 % 3 = 0.
Hence add the node with data 6 in the chain[0].
 -------------         ----------------
 |           |         |     |        |
 | chain[0]  |-------> |  6  | NULL   |
 |           |         |     |        |
 -------------         ----------------
 -------------         -------------
 |           |         |           |
 | chain[1]  |-------> |    NULL   |
 |           |         |           |
 -------------         -------------
 -------------         -------------
 |           |         |           |
 | chain[2]  |-------> |    NULL   |
 |           |         |           |
 -------------         -------------

***Contributed by*** [NihalSuresh](https://github.com/NihalSuresh007) , If you find it helpful , don't forget to drop a like 💖	Contributed by [NihalSuresh](https://github.com/NihalSuresh007) 😊 , If you find it helpful , don't forget to drop a like 💖
##### connect with NihalSuresh 😊	
[Linkedin](https://www.linkedin.com/in/nihal-s-b0535a191)

