Int i = -26;
while(i<25){
    i++;
cout<<i<<endl;
}
}
2.void func2(){
for(int i=-10;i<11;i++)
    cout<<i<<endl;
}
int main() {    
    func2();
}
3.void func3(int top,int bottom){
for(int i=top;i<bottom;i++){
if(i%2==0)cout<<i<<endl;
}
}
int main() {
func3(1,20);
    return 0;
}
4.int func4(int k){
int total=0;
for(int i=0;i<k;i++){
int temp;
cout<<"Enter number "<<i+1<<" :";
cin>>temp;
total=total+temp;
}
return total/k;
}
int main() {
int result=func4(5);
}
5.void func5(){
int temp=1;
while(temp*temp<=100){
cout<<temp*temp<<endl;
temp=temp+1;
}
}
int main() {
func5();
}
6.int main(){
int i=-11;
while(i<20){
    i++;
cout<<i<<endl;
}
}



