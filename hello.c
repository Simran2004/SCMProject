// // // // #include<stdio.h>
// // // // void swap(int**ptr1,int**ptr2){
// // // //     int *temp=*ptr1;
// // // //     *ptr1=*ptr2;
// // // //     ptr2=temp;

// // // // }
// // // // int main(){
// // // //     int arr1[3]={1,2,3};
// // // //     int arr2[4]={4,5};
// // // //     int *ptr1=arr1,*ptr2=arr2;
// // // //     swap(&ptr1,&ptr2);
// // // //     printf("%d%d%d%d%d",arr1[0],arr1[1],arr[])
// // // // }


// #include<stdio.h>
// float sq(int a){
//     float square=a*a;
//     return square;
// }
//  void main(){
//     int a;
//     scanf("%d",&a);
//     float b =sq(a);
//     printf("%.2f",b);
    
// }

// #include<stdio.h>
// void swap(int a,int b){
//     int c=a;
//     a=b;
//     b=c;
//     printf("%d%d",a,b);
// }
// void main(){
//     int a,b;
//     scanf("%d\n",&a);
//     scanf("%d\n",&b);
//     swap(a,b);
// }


// Pre defined functions in c

// #include<stdio.h>
// #include<string.h>
// void main(){
//     char a[45] ;
//     scanf("%s",&a);
//     printf("%d",strlen(a));
// }

// #include<stdio.h>
// #include<string.h>
// void main(){
//     char a[45] ;
//     gets(a);
// int i=0;
// while(a[i]!='\0') i=i+1;
// printf("%d",i);
// }

// #include<stdio.h>
// #include<string.h>
// void main(){
//     char a[45] ;
//     gets(a);
//     char i[100]=strrev(a);
// printf("%s",i);
// }




//ARRAYS

// basic array
// #include<stdio.h>
// int main(){
    
//     int a[3];
//     for (int i=0;i<3;i++) scanf("%d",&a[i]);

//     for (int i=2;i>=0;i--) printf("%d ",a[i]);

//     return 0;
// }


// #include<stdio.h>
// void main(){
//     int marks[5]={34,67,45,33,43};
//     for (int i=0;i<5;i++){
//         if (marks[i]<35) printf("\n%d ",i);
//     }

// }

// garbage values
 




