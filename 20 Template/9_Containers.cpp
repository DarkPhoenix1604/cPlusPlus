/*
containers:
1. Sequence Containers -> liners fashion: example: vector, list, deque
2. Associative Containers -> direct access: example: set/multiset, map/multimap
3. Derieved Containers -> real world modelling: example: stack, queue, priority queue


sequence containes:
1. vector
Faster random access to elements in comparison to array
Slower insertion and deletion at some random position, except at the end.
Faster insertion at the end.

2. list
Random accessing elements is too slow, because every element is traversed using pointers.
Insertion and deletion at any position is relatively faster, because they only use pointers, which can easily be manipulated.

associate containers: everything fast except random access

derieved containers: depends->data structure*/