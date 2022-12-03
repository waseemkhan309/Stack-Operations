// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class stack{
  private:
  int top;
  int arr[5];
  public:
  stack(){
      top=-1;
      for(int i=0;i<5;i++){
          arr[i]=0;
      }
  }
  bool isEmpty(){
      if(top==-1){
          return true;
      }else{
          return false;
      }
  }
 bool isFull(){
     if(top==4){
         return true;
     }else{
         return false;
     }
 }
 void push(int val){
     if(isFull()){
         cout<<"Stack is Overflow"<<endl;
     }else{
         top++;
         arr[top]=val;
     }
 }
 
 void pop(){
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
 void peek(){
     if(isEmpty()){
         cout<<"stack underFlow"<<endl;
     }else{
         cout<<"---Element display ---"<<endl;
         int posi;
         cout<<"Position is : ";cin>>posi;
         cout<<"arr["<<posi-1<<"]= "<<arr[posi-1]<<endl;
     }
 }
 void change(){
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
 void display(){
     cout<<"Elements of Stack "<<endl;
     for(int i=0;i<5;i++){
         cout<<arr[i]<<endl;
     }
 }
 
 
};
int main() {
    stack stk;
    stk.isEmpty();
    stk.isFull();
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.display();
    stk.pop();
    stk.pop();
    stk.display();
    stk.peek();
    stk.change();
    stk.display();
    return 0;
}