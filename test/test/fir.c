#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.递归和非递归分别实现求第n个斐波那契数。
//	递归方式
//int Fib(int n){
//     
//	if(n==1||n==2){
//		return 1;
//		
//	}
//	
//	return Fib(n-1)+Fib(n-2);
//
//	
//		
//}
//int main(){
//	
//    int num=0;
//	printf("请输入第n项的项数:");
//	scanf("%d",&num);
//	Fib(num);
//	printf("%d\n",Fib(num));
//    system("pause");
//	
//    return 0;
//}
//
//
////循环方式
//
//int Fib( int n){
//    //表示i-2项和i-1项的内容
//	int num1=1;
//	int num2=1;
//	int result=0;
//	int i=0;
//	if(n==1||n==2){
//	    return 1;
//	
//	}
//	
//	for(i=3;i<=n;i++){
//	    result=num1+num2;
//		num1=num2;
//		num2=result;
//		
//	}
//    return result;
//	
//}
//int main(){
//   int num=0;
//   printf("请输入第n项的项数:");
//	scanf("%d",&num);
//	Fib(num);
//	printf("%d\n",Fib(num));
//    system("pause");
//    return 0; 
//
//
//}



//2.编写一个函数实现n^k，使用递归实现
//int Suanfa(int a,int b){
//	
//	if(b==1){
//	    return a;
//	
//	}
//    return a*Suanfa(a,b-1);
//	
//}
//
//int main(){
//     int dishu=0;
//	 int zhishu=0;
//	 printf("请输入底数：");
//	 scanf("%d",&dishu);
//	 printf("请输入指数：");
//	 scanf("%d",&zhishu);
//	 printf("%d\n",Suanfa(dishu,zhishu));
//     system("pause");
//	 return 0;
//
//}


//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 
//#include<math.h>
//
// //先求这个数是几位数
//int weishu(int x){
//int count=0;
//while(x!=0){
//	   count++;
//	   x=x/10;
//	}
//  return count;
//}
//int DigitSum(int n){
//    //先求这个数是几位数
//	int count=weishu(n);
//	if(n<10){
//		return n;
//	}
//	return n/(pow(10,count-1))+DigitSum(n%(int)(pow(10,count-1)));//按顺序求出每一位
//
//}
//int main(){
//
//    int a=0;
//    printf("请输入一个数：");
//	  scanf("%d",&a);
//    printf("%d\n",DigitSum(a));
//    system("pause");
//    return 0;
//}


//倒序输出每一位再相加
//int DigitSum(int n){
//	if(n<10){
//	  return n;
//	}
//	return n%10+DigitSum(n/10);
//
//}
//
//
//int main(){
//
//   int a=0;
//   printf("请输入一个数：");
//   scanf("%d",&a);
//   printf("%d\n",DigitSum(a));
//   system("pause");
//   return 0;
//}


//4. 编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。 
//要求：不能使用C函数库中的字符串操作函数。

//abcdef
//先求字符串的长度


//5.递归和非递归分别实现strlen
//递归方式
//int Strlen(char* str){
//	if(*str=='\0'){
//	   return 0;
//	
//	}
//    return 1+Strlen(str+1);
//}                                           
//int main(){
//	
//	printf("%d\n",Strlen("hello"));
//   system("pause");
//   return 0;
//
//}
//
//
////非递归方式
//int Strlen(char* str){//指针
//    int count=0;
//	while(*str!='\0'){
//	  count++;
//	  str++;
//	}
//
//   return count;
//}
//
//
//int main(){
//	  char ch[]="";//这个地方要用数组，否则会出错，不能用char ch="";
//	  printf("请输入一个字符串：");
//	  scanf("%s",&ch);
//      printf("%d\n",Strlen(ch));
//      system("pause");
//	  return 0;
//
//}


// 6.递归和非递归分别实现求n的阶乘 
//递归方式

//int F(int n){
//	if(n<=1){
//	   return 1;
//	}
//	return n*F(n-1);
//
//}
//int main(){
//   int x=0;
//   printf("请输入一个数x：");
//   scanf("%d",&x);
//   printf("x的阶乘为：%d\n",F(x));
//   system("pause");
//   return 0;
//}
//
//非递归方式
//int F(int n){
//   int result=1;
//   int i=1;
//   for(i=n;i>0;i--){
//     result*=i;
//   
//   }
//   return result; 
//
//}
//
//int main(){
//     int x=0;   
//	 printf("请输入一个数x：");
//     scanf("%d",&x);
//     printf("x的阶乘为：%d\n",F(x));
//    system("pause");
//	return 0;
//}


//7.递归方式实现打印一个整数的每一位 


////第一种递归方法
////先求这个整数有多少位
//#include<math.h>
//int Count(int n){
//	if(n<10){
//	  return 1;
//	
//	}
//	return 1+Count(n/10);
//
//}
//void Print(int n){//按顺序输出一个整数的每一位
//	int count=0;
//    count=Count(n);
//	if(n<10){
//	  printf("%d\n",n);
//	}else{
//	 printf("%d\n",n/(int)pow(10,count-1));
//	 Print(n%(int)pow(10,count-1));
//	}
//}
//
//int main(){
//int num=0;
//printf("请输入一个整数num：");
//scanf("%d",&num);
//Print(num);
//
//  system("pause");
//  return 0;
//}




//第二种递归方法

//void Print(int n){
//    
//
//	if(n<10){
//        printf("%d\n",n);	  
//	}else{
//	Print(n/10);
//	printf("%d\n",n%10);
//	}	
//}
//
//int main(){
//
//	int num=0;
//	printf("请输入一个整数num：");
//	scanf("%d",&num);
//	Print(num);
//
//   system("pause");
//   return 0;
//}