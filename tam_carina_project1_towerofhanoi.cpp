#include <iostream>
void tower(int number, int start, int end);
using namespace std;
int main(){
int n, s, e;
cout<<"Enter number of disk: ";
cin>>n;
while(n<1){ //if the number entered is not valid / is negative or 0
    cout<<"Enter number of disk: ";
    cin>>n;
}
cout<<"Enter where to start: ";
cin>>s;
cout<<"Enter where to end: ";
cin>>e; //get all variables
tower(n, s, e);
return 0;
}
void tower(int number, int start, int end){
    using namespace std;
    int aux=6-start-end; //the possible start and end numbers have to be 1, 2, or 3, so the other tower number is 6- the addition of those two (1+2+3=6)
if(number==1){ //if there is only one disk move it from start to end
    cout<<start<<"->"<<end<<endl;
}
else{ //if there is more than one disk
    tower(number-1, start, aux); //move the top disk on start to the auxiliary needle
    cout<<start<<"->"<<end<<endl; //print out where you moved it
    tower(number-1, aux, end); //move numbers from auxiliary needle to end
}
}
