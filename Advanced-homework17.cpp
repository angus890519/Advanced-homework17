/* �p������׹��-�i���m�ߧ@�~-�@�~17*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/24 10:00 */
#include <stdio.h>  //��ܮw 
#include <stdlib.h> //��ܮw
#include <string.h> //��ܮw

int main(void)
{
	printf("�p������׹��-�i���m�ߧ@�~-�@�~17\n");
    printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/24 10:00\n");
	printf("-----------------------------------\n");
    char *ptr; 
    char string[]="Happy New Year"; //�r��
    int length=strlen(string);//��X���r�ꪺ����
    //�t�m�r�ꪺ�Ŷ����r������ptr
    ptr=(char*)malloc(sizeof(char)*(length+1));
    ptr=string;
    puts(ptr);
    system("pause");//�Ȱ����� 
    return 0;//�^�ǭ� 0 
}
