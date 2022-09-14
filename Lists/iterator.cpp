using namespace std;

//method to find the index of a value in a list.

//returns -1 if not found

int findInList(list <int>&myList, int valueToFind){

//defining an iterator

list<int>::iterator it=myList.begin();

int index=0;//index variable

//looping from first element to the last element

while(it!=myList.end()){

//checking if value is the target value

if(*it==valueToFind){

return index; //returning the index

}

index++;//next index

++it;//next element

}

return -1; //not found

}