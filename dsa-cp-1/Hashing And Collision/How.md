## This is a C Program to Implement Hash Tables.

### Problem Description
A hash table is a data structure used to implement an associative array, a structure that can map keys to values. A hash table uses a hash function to compute an index into an array of buckets or slots. This program will implement a hash table by putting each element in a particular index of hash table array.

### Problem Solution
1. Create an array of structure, data (i.e a hash table).
2. Take a key to be stored in hash table as input.
3. Corresponding to the key, an index will be generated.
4. In case of absence of data in that index of array, create one and insert the data item (key and value) into it and increment the size of hash table.
5. In case the data already exists, the new data cannot be inserted if the already present data does not match given key.
6. To display all the elements of hash table, data at each index is extracted and elements (key and value) are read and printed.
7. To remove a key from hash table, we will first calculate its index and extract its data, delete the key in case it matches the given key.
8. Exit

### Program/Source Code

``` C
#include<stdio.h>
#include<stdlib.h>
 
struct data 
{
	int key;
	int value;
};
 
struct data *array;
int capacity = 10;
int size = 0;
 
/* this function gives a unique hash code to the given key */
int hashcode(int key)
{
	return (key % capacity);
}
 
/* it returns prime number just greater than array capacity */
int get_prime(int n)
{
	if (n % 2 == 0) 
        {
		n++;
	}
	for (; !if_prime(n); n += 2);
 
	return n;
}
 
/* to check if given input (i.e n) is prime or not */
int if_prime(int n)
{
	int i;
	if ( n == 1  ||  n == 0) 
        {
		return 0;
	}
	for (i = 2; i < n; i++) 
        {
		if (n % i == 0) 
                {
			return 0;
		}
	}
	return 1;
}
 
void init_array()
{
	int i;
	capacity = get_prime(capacity);
	array = (struct data*) malloc(capacity * sizeof(struct data));
	for (i = 0; i < capacity; i++) 
        {
		array[i].key = 0;
		array[i].value = 0;
	}
}
 
/* to insert a key in the hash table */
void insert(int key)
{
	int index = hashcode(key);
	if (array[index].value == 0) 
        {
		/*  key not present, insert it  */
		array[index].key = key;
		array[index].value = 1;
		size++;
		printf("\n Key (%d) has been inserted \n", key);
	}
	else if(array[index].key == key) 
        {
		/*  updating already existing key  */
		printf("\n Key (%d) already present, hence updating its value \n", key);
		array[index].value += 1;
	}
	else
        {
		/*  key cannot be insert as the index is already containing some other key  */
		printf("\n ELEMENT CANNOT BE INSERTED \n");
	}
}
 
/* to remove a key from hash table */
void remove_element(int key)
{
	int index  = hashcode(key);
	if(array[index].value == 0)
        {
		printf("\n This key does not exist \n");
	}
	else {
		array[index].key = 0;
		array[index].value = 0;
		size--;
		printf("\n Key (%d) has been removed \n", key);
	}
}
 
/* to display all the elements of a hash table */
void display()
{
	int i;
	for (i = 0; i < capacity; i++)
        {
		if (array[i].value == 0)
                {
			printf("\n Array[%d] has no elements \n");
		}
		else 
                {
			printf("\n array[%d] has elements -:\n key(%d) and value(%d) \t", i, array[i].key, array[i].value);
		}
	}
}
 
int size_of_hashtable()
{
	return size;
}
 
void main()
{
	int choice, key, value, n, c;
	clrscr();
 
	init_array();
 
	do {
		printf("\n Implementation of Hash Table in C \n\n");
		printf("MENU-:  \n1.Inserting item in the Hash Table" 
                               "\n2.Removing item from the Hash Table"
		               "\n3.Check the size of Hash Table" 
                               "\n4.Display a Hash Table"
		       "\n\n Please enter your choice -:");
 
		scanf("%d", &choice);
 
		switch(choice) 
                {
 
		case 1:
 
		      printf("Inserting element in Hash Table\n");
		      printf("Enter key -:\t");
		      scanf("%d", &key);
		      insert(key);
 
		      break;
 
		case 2:
 
		      printf("Deleting in Hash Table \n Enter the key to delete-:");
		      scanf("%d", &key);
		      remove_element(key);
 
		      break;
 
		case 3:
 
		      n = size_of_hashtable();
		      printf("Size of Hash Table is-:%d\n", n);
 
		      break;
 
		case 4:
 
		      display();
 
		      break;
 
		default:
 
		       printf("Wrong Input\n");
 
		}
 
		printf("\n Do you want to continue-:(press 1 for yes)\t");
		scanf("%d", &c);
 
	}while(c == 1);
 
	getch();
 
}

```

### Runtime Test Cases

 ```
 
Implementation of Hash Table in C 
MENU-:
1. Inserting item in the Hash Table
2. Removing item from the Hash Table
3. Check the size of Hash Table
4. Display Hash Table
 
Please enter your choice-: 3
Size of Hash Table is-: 0
 
Do you want to continue-:(press 1 for yes) 1
Implementation of Hash Table in C 
MENU-:
1. Inserting item in the Hash Table
2. Removing item from the Hash Table
3. Check the size of Hash Table
4. Display Hash Table
 
Please enter your choice-: 1
Inserting element in Hash Table
Enter key -:   1 	
 
 key (1) and value (1) has been inserted
 
Do you want to continue-:(press 1 for yes) 1
Implementation of Hash Table in C chaining with singly linked list
MENU-:
1. Inserting item in the Hash Table
2. Removing item from the Hash Table
3. Check the size of Hash Table
4. Display Hash Table
 
Please enter your choice-: 4
array[0] has no elements		
array[1] has no elements	key = 1 and value = 1
array[2] has no elements
array[3] has no elements
array[4] has no elements
array[5] has no elements
array[6] has no elements
array[7] has no elements
array[8] has no elements
array[9] has no elements
*****************************

Do you want to continue-:(press 1 for yes) 1
Implementation of Hash Table in C 
MENU-:
1. Inserting item in the Hash Table
2. Removing item from the Hash Table
3. Check the size of Hash Table
4. Display Hash Table
 
Please enter your choice-: 2
Deleting key from Hash Table
Enter the key to delete-: 3
 
 This key does not exist.
 
Do you want to continue-:(press 1 for yes) 1
Implementation of Hash Table in C 
MENU-:
1. Inserting item in the Hash Table
2. Removing item from the Hash Table
3. Check the size of Hash Table
4. Display Hash Table
 
Please enter your choice-: 2
Deleting key from Hash Table
Enter the key to delete-: 1
 
 Key 1 has been removed.
 
Do you want to continue-:(press 1 for yes) 2
```


<hr>

 Contributed by <a href="https://github.com/ShyamKumar1">Shyam Kumar</a> With 💜. 

 Reach me on
<p align='center'>
  <a href="https://www.linkedin.com/in/shyam-kumar-9b9841157/"><img src="https://img.shields.io/badge/linkedin-%230077B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white" /></a>&nbsp;&nbsp;&nbsp;&nbsp;
  <a href="https://www.instagram.com/_smiling_storm_/" target="_blank"><img src="https://img.shields.io/badge/Instagram-%23E4405F.svg?&style=for-the-badge&logo=instagram&logoColor=white" alt="Instagram"></a>&nbsp;&nbsp;&nbsp;&nbsp;
  <a href="mailto:shyam.ceolife@gmail.com?subject=Olá%20Punit"><img src="https://img.shields.io/badge/gmail-%23D14836.svg?&style=for-the-badge&logo=gmail&logoColor=white" /></a>&nbsp;&nbsp;&nbsp;&nbsp;
  <a href="https://www.facebook.com/shyam.george15/" target="_blank"><img src="https://img.shields.io/badge/Facebook-%231877F2.svg?&style=for-the-badge&logo=facebook&logoColor=white" alt="Facebook"></a>&nbsp;&nbsp;&nbsp;&nbsp;
</p>
