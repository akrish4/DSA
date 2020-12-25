# What is Open Addressing?
**Open addressing** The open addressing is another technique for collision resolution. Unlike chaining, it does not insert elements to some other data-structures. It inserts the data into the hash table itself. The size of the hash table should be larger than the number of keys.
There are three different popular methods for open addressing techniques. These methods are −
***Linear Probing***
***Quadratic Probing***
***Double Hashing***
In this technique, we use a hash function like other hash techniques. If the place is free, then insert the element into that location. Now if that place is not free, we will find another free element by using some equations. For the linear probing, we will use some linear equations, for quadratic probing, we will use some quadratic equations.
In the double hashing, when a collision occurs, we will use another hash function, then put into that location. That hash function is called the secondary hash function. That will not be used directly, if there is no collision.
## Why Open Addressing?
Open addressing is used when the frequency and number of keys is known. 5. Cache performance of chaining is not good as keys are stored using linked list. Open addressing provides better cache performance as everything is stored in the same table.

# What is Chaining?
The Chaining is one collision resolution technique. We cannot avoid collision, but we can try to reduce the collision, and try to store multiple elements for same hash value.
this technique suppose our hash function h(x) ranging from 0 to 6. So for more than 7 elements, there must be some elements, that will be places inside the same room. For that we will create a list to store them accordingly. In each time we will add at the beginning of the list to perform insertion in O(1) time.
## Why Chaining?
Chaining is a technique used for avoiding collisions in hash tables. A collision occurs when two keys are hashed to the same index in a hash table. Collisions are a problem because every slot in a hash table is supposed to store a single element.

Contributed by [NihalSuresh](https://github.com/NihalSuresh007) , If you find it helpful , don't forget to drop a like 💖	Contributed by [NihalSuresh](https://github.com/NihalSuresh007) 😊 , If you find it helpful , don't forget to drop a like 💖
##### connect with NihalSuresh 😊	
[Linkedin](https://www.linkedin.com/in/nihal-s-b0535a191)
