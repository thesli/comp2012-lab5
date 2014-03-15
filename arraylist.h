/* arraylist.h  
   The header file for a Linear List of integers implemented with arrays */

#include<iostream>

using namespace std;

class List
{
   private:
      // member variables
      int length;
      int maxSize;
      int* element;
         // change this to ptr for dynamic array
     
   public:
      // constructor
      List(int size);

      // destructor
      ~List();

      // member methods
      int isEmpty() const {return length==0;}
         // return 0 if the list is empty, i.e. contains no elements
      int Find(int k,int &x) const; 
         // return 1 if there exist an element at position k, store the value in x. else return 0.
   
      int Find(int x) const; 
         // return 0 if x does not exist, else return the position of x in the list.

      void Delete(int k);
         // Delete the element at position k.
      void Insert(int k, int x);
         // Insert a value to position k in the list 
      void Output() const;
         // Print the elements of the list 

      // Add the friend declaration of duplicate()
      // ...
      friend List duplicate(const List& other);

};

/* A function which makes a duplicate of a List object */
List duplicate(const List& other);
