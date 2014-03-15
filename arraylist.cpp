/* arraylist.cpp -- 
   The source file of a Linear List of integers implemented with arrays */

#include "arraylist.h"

using namespace std;

// Constructor
List::List(int size=0)
{ 
   length = 0; 

   // Assign size to maxSize for a dynamic array
   maxSize = size;

   // Add your code here to allocate memory
   //   ...
   element = new int[maxSize];
}

// destructor
List::~List() { 
   // Add your code here to deallocate the dynamic array
   // ...
  delete[] element;
   length = 0;
}


/* Return 1 if there exists an element at position k and store the value in x, or else return 0.*/ 
int List::Find(int k, int &x) const
{
   if(k<0||k>=length)
      return 0;
   x=element[k];
   return 1;
}

/* Search for a value x in the list.
   return 0 if x does not exist, else return the position of x in the list */
int List::Find(int x) const
{
   for(int i=0;i<length;i++)
      if(element[i]==x)
         return ++i;
   return 0;
}

/* Delete the element at position k */ 
void List::Delete(int k)
{
   int x;
   if(Find(k,x))
   {
      for(int i=k;i<(length-1);i++)
         element[i]=element[i+1];
      length--;
   }
   else
      cout<<"out of bounds\n";
}

/* Insert a value to position k in the list */
void List::Insert(int k, int x)
{
   if(k<0||k>length)
      cout<<"out of bounds\n";
   else if(length==maxSize)
      cout<<"no memory\n";
   else {    
     /* starting from position k, shift the elements */

     /* insert the value x at position k */

     /* increment the member variable legnth */
    length++;
    if(length==1){
      element[0] = x;
    }
    for (int i = length; i > k; i--)
    {
        element[i] = element[i-1];
    }
    element[k] = x;
   }
}

/* Print the elements of the list */  
void List::Output() const
{
   if(isEmpty())
      cout<<"list is empty\n";
   else 
      for(int i=0;i<length;i++)
         cout<<element[i]<<"\t";
}
      
/* Make a duplicate of a List object */
List duplicate(const List& other)
{
    List res(other.maxSize);
    res.length = other.length;

    for (int i=0; i<other.maxSize; i++)
	res.element[i] = other.element[i];

    return res; 
}



