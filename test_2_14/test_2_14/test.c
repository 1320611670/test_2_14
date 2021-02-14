#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// 描述一个学生
// 名字
// 年龄
// 电话
// 性别

/*struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s2; */// 是三个全局的结构体变量

typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu; 

struct s
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct t
{
	char ch[10];
	struct s S;
	char *pc;
};

void print1(stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}

void print2(stu*ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}

int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//stu s={"张三",20,"1524927545","男"}; // 局部变量
	//print1(s);
	//print2(&s);
	//char arr[] = "hello bit\n";
	struct t T = { "hehe",{100,"w","hello world",3.14},NULL};
	/*int a = 10;
	int b = 20;
	int ret = 0;
	ret = add(a, b);*/ 
	return 0;
}
