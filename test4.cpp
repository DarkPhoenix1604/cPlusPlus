#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
    
class Person{
    public:
    string name;
    int age;
    virtual void getdata(){};
    virtual void putdata(){};
};

class Professor: public Person{
  public:
  int publications;
  static int cur_id;
  void getdata()  
  {
    cin>>name>>age>>publications;  
  }
  void putdata(){
      cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
  }
};
int Professor:: cur_id = 1;
class Student: public Person{
    public:
    int marks[6];
    static int cur_id;
    void getdata()
    {
        cin>>name>>age>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4]>>marks[5];
        ++cur_id;
    }
    void putdata(){
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id<<endl;
    }
};
   int Student:: cur_id = 1;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
