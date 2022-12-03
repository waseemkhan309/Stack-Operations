// DSA Stack operations using array  in C++
#include <iostream>
using namespace std;
class stack{
  private:
  int top;
  int arr[5];
  public:
  stack(){                    //Constructor
      top=-1;
      for(int i=0;i<5;i++){
          arr[i]=0;
      }
  }
  bool isEmpty(){               //IsEmpty
      if(top==-1){
          return true;
      }else{
          return false;
      }
  }
 bool isFull(){               //isFull
     if(top==4){
         return true;
     }else{
         return false;
     }
 }
 void push(int val){            //Push operation
     if(isFull()){
         cout<<"Stack is Overflow"<<endl;
     }else{
         top++;
         arr[top]=val;
     }
 }
 
 void pop(){                   //pop operations
     if(isEmpty()){
         cout<<"Stack is UnderFlow"<<endl;
     }else{
         int popvalue;
         popvalue=arr[top];
         arr[top]=0;
         cout<<"Pop value is = "<<popvalue<<endl;
         top--;   
     }
 }
 void peek(){                   //peek operation
     if(isEmpty()){
         cout<<"stack underFlow"<<endl;
     }else{
         cout<<"---Element display ---"<<endl;
         int posi;
         cout<<"Position is : ";cin>>posi;
         cout<<"arr["<<posi-1<<"]= "<<arr[posi-1]<<endl;
     }
 }
 void change(){             //Change operation
     if(isEmpty()){
                  cout<<"stack underFlow"<<endl;
     }else{
         cout<<"---Change Stack Elements ----"<<endl;
         int posi,val;
         cout<<"Position = ";cin>>posi;
         cout<<"Value = ";cin>>val;
         arr[posi-1]=val;
     }
 }
 void display(){             //Display
     cout<<"Elements of Stack "<<endl;
     for(int i=0;i<5;i++){
         cout<<arr[i]<<endl;
     }
 }
 
 
};
int main() {
    stack stk;
    stk.isEmpty(); //isEmpty
    stk.isFull();   //isFull
    stk.push(2);    //Push
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.display();   //Display
    stk.pop();        //Pop
    stk.pop();
    stk.display();
    stk.peek();   //peek
    stk.change();  //Change
    stk.display();
    return 0;
}
