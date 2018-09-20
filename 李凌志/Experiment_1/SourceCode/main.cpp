/*************************************************
** 功能 : 学生成绩管理系统
** 作者 : LiLingzhi/saintlilz@163.com
** 版本 : 2018-9-13 / 17:13
/**************************************************/

#include<iostream>
#include<stdlib.h>
#include<Windows.h>
#include"score.h"
using namespace std;

void main()
{
	cout << "******************************\n";
	cout << "       学生成绩管理分析系统        \n";
	cout << "           Lingzhi Li         \n";
	cout << "******************************\n\n";

	int N = 0;//学生总数
	SS  *pstu = NULL;
	cout << "开始数据读取——————>>>)" << endl;
	
	cout << "请输入需要读取学生个数：" << endl;
	cin >> N;
	pstu = readDataFromFile( N);
	//计算学生总成绩
	calcuScore(pstu, N);
	//根据学生成绩排名
	sortScore(pstu, N);
	//按照排名输出学生信息
	printOut(pstu, N);
	//写入Excel文档
	putintoExcel(pstu,N);
	system("pause");

}