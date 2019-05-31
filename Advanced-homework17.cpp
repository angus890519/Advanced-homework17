/* 計算機概論實務-進階練習作業-作業17*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/24 10:00 */
#include <stdio.h>  //函示庫 
#include <stdlib.h> //函示庫
#include <string.h> //函示庫

int main(void)
{
	printf("計算機概論實務-進階練習作業-作業17\n");
    printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/05/24 10:00\n");
	printf("-----------------------------------\n");
    char *ptr; 
    char string[]="Happy New Year"; //字串
    int length=strlen(string);//算出此字串的長度
    //配置字串的空間給字元指標ptr
    ptr=(char*)malloc(sizeof(char)*(length+1));
    ptr=string;
    puts(ptr);
    system("pause");//暫停視窗 
    return 0;//回傳值 0 
}
