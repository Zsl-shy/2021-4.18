#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,n=3;
	char password[20]="";
	for(i=0; i<3; i++){
		scanf("%s",&password);
		if(strcmp(password,"123456")==0){//不能直接用password==“123456”来比较一个字符串是否相等，必须要用到一个函数库 - strcmp 
			printf("登录成功\n");
			break;
		}
		else{	
			if(i==2){
				printf("三次登录失败，退出登录\n"); 
				break; 
			}
			printf("重新输入\n");
		}
	} 
	return 0;
}
