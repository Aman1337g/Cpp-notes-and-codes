/*
    STL = Containers --> object which stores data
        + Algorithms --> procedure to process data
        + Iterators --> object which points to an element of a container


    Container Types (3)
                                Data Sotred
    1. Sequence Containers -->  linear fashion . eg - vector, list, dequeue.
    2. Associative Containers --> direct access . eg - set, multiset, map, multimap.
    3. Derived Containers --> Real world modelling . eg - stack, queue, priority-queue.


    SEQUENCE CONTAINERS

    1. Vector   --> Random Access = fast.
                --> Middle insertion / deletion = slow.
                --> Insertion/Deletion at the end = fast.

    2. List     --> Random Access = slow.
                --> Middle insertion / deletion = fast.
                --> Insertion/Deletion at the end = fast.

    ASSOCIATIVE CONTAINERS
    --> All operation are fast except Random Access.As it stores the elments in a tree DS format.

    DERIVED CONTAINERS
    --> Dpepends(we have to analyze all the derived containers seperately) --> Data Structure(autopsy can be done using data structure)
*/