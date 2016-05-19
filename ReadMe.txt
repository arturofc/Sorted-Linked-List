 Arturo Corro
 Stanley Chu
Systems Programming
Assignment 2: Sorted List

SortedListPtr SLCreate Function
This creates a brand new List that will be put into use from all data structure types into nodes. Eventually becoming a 
sorted list, the time/space Complexity for SLCreate is O(1).



Void SLDestroy Function
This function creates a pointer that points directly to the list of its head and current node. Since the amount of destroy 
loops depending on how much of the list there actually is, the pointer iterates through n times of n items.
Therefore the BigO Complexity for time is O(n) times depending on how big n size is. Best case is if only 1 item
is in the list which it will be O(1).  Whereas the space complexity is also O(n) due to n size we need n spaces of malloc to kill.




SortedListIteratorPtr SLCreateIterator Function
This is the creation of the Iterator, forming a new node pointer that will allow it to point to the original "list"
from SLCreate. There is no complexion here as the Run time/space Big O should be O(1).



int SLInsert Function
 SLInsert is the starting important function to create the *nodes which will be put into the function of SortedListPtr, it is
effectively called in main multiple times to enter in the User values (whatever value that it shall be). The newobj is a 
void pointer allowing any type to pass through into the node. Everytime it creates a Node, it is also sorted in this function
automatically by being placed in the right location in the list. The amount of n types that the user has depends, therefore
the Big O in terms of time is O(n), however the space complexity is O(1) because every time a node is created it calls the
same varaible to go through the Node.



SLRemove Function




void SLDestroyIterator Function



void* SLNextItem Function
This function applies getting the next Node for the iterator that is trying to traverse the original list of sorted items.
SLNextItem helps to understand what the User wants if they want to call upon a location in the list. It also helps by allowing
the user to traverse through the whole list and print everything in its correct order. The Big O for time/space in this case
is O(1) because there are no loops unless referred to the main.c that calls it multiple times. But just by itself, it only
goes through 1 item in the node next.



void* SLGetItem Function
This function is short and sweet by only returning the data that is inside the node. It works hand in hand with SLNextItem.
SLNextItem, traverses each individual Node, then SLGetItem is called to get the particular list data. This is therefore
Big O time/space of O(1).




