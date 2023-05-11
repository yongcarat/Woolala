#include <stdio.h>
main(){
 int a;

printf("당신이 좋아하는 남돌은 무엇인가요? 아래 번호를 선택해주세요.\n");
printf("방탄=1, 세븐틴=2, 스키즈=3, 몬스타엑스=4, 모두 좋아하지 않는다=0\n");

printf("선택한 번호를 입력해주세요: ");
scanf("%d", &a);
  
switch(a){
  case 1:
   printf("당신은 방탄을 좋아하는군요!\n");
   break;
  case 2:
   printf("당신은 세븐틴을 좋아하는군요!\n");
   break;
  case 3:
   printf("당신은 스키즈를 좋아하는군요!\n");
   break;
  case 4:
   printf("당신은 몬스타엑스를 좋아하는군요!\n");
   break;
 default:
  printf("당신은 아마도 남돌을 별로 좋아하지 않는 것 같군요!\n");
  break;
}
}