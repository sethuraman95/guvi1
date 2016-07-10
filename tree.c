#include<stdio.h>
#include<conio.h>
void add(node* *hd, int v){
node* curr = *hd;
if(curr == NULL){
    curr = (node*)malloc(sizeof(node));
    curr->value = v;
}else{
    if(v < curr->value){
        add(&curr->left, v);
    }else{
        add(&curr->right, v);
    }
}
getch;
}
