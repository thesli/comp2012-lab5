/* The main program to use a Linear List of integers implemented with arrays */

#include "arraylist.h"

using namespace std;

/* Print the list of commands */
void menu()
{
   cout<<"\n MENU\n" ;
   cout<<"-----------\n";
   cout<<"f -- Find an integer at a particular position\n";
   cout<<"s -- Search for an integer in the list\n";
   cout<<"d -- Delete an integer from the list\n";
   cout<<"i -- Insert an integar at a particular position\n";
   cout<<"p -- Print the list\n";
   cout<<"q -- Exit the program\n";
   cout<<"-------------\n";
}

// Main Program
int main(void)
{
   char ch;
   int k,x,p;

   List obj(10);
   menu();
   do
   {
      cout << endl;

      cout<<"Enter Command > ";
      cin>>ch;
      switch(ch) {
         case 'f':
            cout << "Find the element value at a position" << endl;
            cout <<"Enter the position (k>=0): ";
            cin >> k;
            p=obj.Find(k,x);
            if(p==1) 
               cout << "found, x=" << x << endl;
            if(p==0)
               cout << "not found" << endl;
            break;
         case 's':
            cout << "Search a value" << endl;
            cout << "enter the element value: ";
            cin >> x;
            p=obj.Find(x);
            if(p)
               cout<<"searching is sucessful and found at"<<p<<endl;
            else
               cout<<"searching not sucessful"<<endl;
            break;
         case 'd':
            cout << "Delete the element at a position" << endl;
            cout << "enter the position (k>=0): ";
            cin >> k;
            obj.Delete(k);
            break;
         case 'i':
            cout << "Insert a value at a position" << endl;
            cout <<"enter the position(k>=0): ";
            cin >> k;
            cout << "enter the value: ";
            cin >> x;
            obj.Insert(k,x);
            break;
         case 'p':
            cout << "Output" << endl;
            cout << "elements in the list are:" << endl;
            obj.Output();
            cout << endl;
            break;
         case 'c':
	    cout << "Duplicate" << endl;
            cout << "the duplicated List is:" << endl;
	    duplicate(obj).Output(); 
            cout << endl;
            break;
         case 'q':
            cout << "Exit the program" <<endl;
            break;
         default:
            cout<<"invalid choice\n";
            break;
      }  } while(ch != 'q');

      return (0);
}