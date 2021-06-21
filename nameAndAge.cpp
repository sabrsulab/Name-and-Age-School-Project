// Programming Assignemnt 2 - Proffessor Daniel Mullen: Cosc II
//
// Name: Brandon Sabrsula
//
#include <iostream>
using namespace std;

int people = 3;
/*
void get_name(char *, int)
  Prompt the user for a name and return the entered value.  

Args: 
    char* name - the name variable is passed in by reference.
    int max - the maximum length of the name.    
Returns: void
*/
string get_name() ;

/*
int get_age()
    Prompt the user for an age.
Args:
    None
Returns: int : age entered
*/


int get_age();
/*
void print_order(char *, int, char*, int, char*, int)
    Print out the name and ages in order.
Args:
    char * n1
    int a1
    char * n2
    int a2
    char* n3
    int  a3
*/
void print_order(char n1, int a1, char n2, int a2, char n3, int a3);

string get_name()
{
	string name;
	cout << "Please input name: " << endl;
	cin >> name;

	return name;	
}

int get_age()
{
	int age;
	
	cout << "Enter age: ";
	cin << age;
	
	return age;
	}
void print_order(string n1, int a1, string n2, int a2, string n3, int a3)
{
	if(age[0] < age[1] && age[1] < age[2] && age[0] < age[2]){
	/*0 < 1	  and	1 < 2	and		0 < 2 <=== 0, 1, 2
	*/
		cout << name[0] << " " << age[0] << "\n" << name[1] << " " << age[1] << "\n" << name[2] << " " << age[2] << endl;
	}
	else if(age[1] < age[0] && age[0] < age[2] && age[1] < age[2]){
	/*1 < 0	  and	0 < 2	and	  1 < 2 <=== 1, 0, 2
	1 first, 	0 second, 		2 third
	*/
		cout << name[1] << " " << age[1] << "\n" << name[0] << " " << age[0] << "\n" << name[2] << " " << age[2] << endl;
	}
	else if(age[2] < age[1] && age[1] < age[0] && age[2] < age[0]){
	/*2 < 1	  and	1 < 0 	and  	2 < 0 <=== 2, 1, 0
	2 first, 		1 second,		0 third
	*/	
		cout << name[2] << " " << age[2] << "\n" << name[1] << " " << age[1] << "\n" << name[0] << " " << age[0] << endl;
	}
	else {
		/* Prints 2, 0, 1 if none of the other if or else if conditions are completely met. */
		cout << name[1] << " " << age[1] << "\n" << name[2] << " " << age[2] << "\n" << name[0] << " " << age[0] << endl;
	}
	
}
int main(){
	int age[3];
	age[0] = get_ages();
	age[1] = get_ages();
	age[2] = get_ages();
	
	string name[3];
	name[0] = get_name();
	name[1] = get_name();
	name[2] = get_name();
	
	return 0;
}
