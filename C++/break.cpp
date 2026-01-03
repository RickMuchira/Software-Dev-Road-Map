#include <iostream>
using namespace std;

int main(){
    int i=0;
    //breaking in while loop the iteration will not continue
    while(i<10){
        cout<<i<<endl;
        i++;
       if(i==4){
    break;
    }
//output
/*
0
1
2
3
*/
}
//continue:skips and creates a new iteration
int b;
for(b= 0; b<10 ;b++){
    if(b==4){
        continue;
    }
    cout<<b<<endl;
}
//output
/*
0
1
2
3
5
6
7
8
9
*/
return 0;
}