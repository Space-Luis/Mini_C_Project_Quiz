#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

void Help(){
 system("cls");
 printf("\n\n\n\t이 게임은 단순한 퀴즈 게임으로 주어지는 문제에 맞는 선택지를 고르시면 되는 게임입니다!");
 printf("\n\n\t맞는 정답을 맞추시길 바랍니다, 행운을 빌죠!");
}
 
int main(){
     int Rand,MaxNumber,A,QuestionCount,Correct;//Rand = 문제의 랜덤번호, MaxNumber = 문제 개수 (5개로 지정) , A = for문의 문자 , QuestionCount = 문제개수 측정 
     int Question[6];
     
     char choice;
     
    system("cls");

    MainHome: // 게임 메인창 
    system("cls");
    puts("\n\t\t SW Quiz | DoonChon Quiz \n\n") ;
    puts("\n\t\t-------------------------------");
    puts("\n\t\t 'S'입력시 게임 시작");
    puts("\n\t\t 'H'입력시 도움말 오픈");
    puts("\n\t\t 'Q'입력시 게임 종료");
    printf("\n\t\t-------------------------------\n\n\t\t");
    printf("\n\t\t제작자 :  \n\n\t\t");
    choice=toupper(getch());

     if (choice == 'Q'){
 		exit(1); //'Q' 입력시 게임 나가기 (프로그램 종료)
	}
     else if (choice == 'H'){
		 Help();
		 getch();
		 goto MainHome;
 		} // 'H' 입력시 게임도움말로 이동 (키보드 입력시 다시 홈으로 복귀) 
 
    else if(choice == 'S'){
	    Home:
	    system("cls");
	     
	    QuestionCount = Correct = 0;
	    MaxNumber = 1;
	
	    Start:
	    Rand = rand()% 10 + 1;
	    Question[MaxNumber]= Rand;
     
     for (A=0;A<MaxNumber;A++)
 		if (Question[A] == Rand)
 			goto Start;
 			
     switch(Rand){
  		case 1:
	  		printf("\n\n\nQ.둔촌고등학교의 교장선생님의 성함은 무엇일까요?");
	  		printf("\n\nA.최성곤 선생님\tB.오학진 선생님\n\nC.김송경 선생님\tD.이건일 선생님\n\n");
	  		QuestionCount++;
	  		if (toupper(getch())=='A'){
			  printf("\n\n정답입니다!!!");
			  Correct++; 
			  break;
			}
		  else{
			printf("\n\n틀렸습니다 ㅜㅜ, 정답은 A.최성곤 선생님 입니다.");
		  	break;
		  	}
  
		case 2:
	  	printf("\n\nQ.우리학교의 이름은 무엇일까요?");
	  	printf("\n\nA.동북고등학교\tB.둔촌고등학교\n\nC.한영고등학교\tD.배재고등학교\n\n");
	  	QuestionCount++;
	  		if (toupper(getch())=='B'){
			  printf("\n\n정답입니다!!!");
			  Correct++; 
	   		  break;
	   }
	  else{
	  	printf("\n\n틀렸습니다 ㅜㅜ, 정답은 B.둔촌고등학교 입니다.");
		break;
		}
		
		case 3:
	  	printf("\n\nQ.우리학교의 개교한 연도는 언제일까요?");
	  	printf("\n\nA.2003년\tB.1998년\n\nC.2000년\tD.1997년\n\n");
	  	QuestionCount++;
	  		if (toupper(getch())=='D'){
			  printf("\n\n정답입니다!!!");
			  Correct++; 
	   		  break;
	   }
	  else{
	  	printf("\n\n틀렸습니다 ㅜㅜ, 정답은 D.1997년 입니다.");
		break;
		}
		
		case 4:
	  	printf("\n\nQ.우리학교의 교훈은 무엇일까요?");
	  	printf("\n\nA.슬기롭게 살자\tB.건강하고 씩씩하게 \n\nC.활기찬 둔촌인\tD.자주, 창조, 봉사\n\n");
	  	QuestionCount++;
	  		if (toupper(getch())=='D'){
			  printf("\n\n정답입니다!!!");
			  Correct++; 
	   		  break;
	   }
	  else{
	  	printf("\n\n틀렸습니다 ㅜㅜ, 정답은 D.자주, 창조, 봉사 입니다.");
		break;
		}
		
		case 5:
	  	printf("\n\nQ.우리학교의 학생회의 이름은 무엇일까요?");
	  	printf("\n\nA.DCAOS \tB.UTP \n\nC.DOONCHONMAN \tD.둔촌고대표\n\n");
	  	QuestionCount++;
	  		if (toupper(getch())=='A'){
			  printf("\n\n정답입니다!!!");
			  Correct++; 
	   		  break;
	   }
	  else{
	  	printf("\n\n틀렸습니다 ㅜㅜ, 정답은 A.DCAOS 입니다.");
		break;
		}
		
		case 6:
	  	printf("\n\nQ.우리학교의 교목의  이름은 무엇일까요?");
	  	printf("\n\nA.느티나무 \tB.소나무 \n\nC.은행나무 \tD.벚나무 \n\n");
	  	QuestionCount++;
	  		if (toupper(getch())=='A'){
			  printf("\n\n정답입니다!!!");
			  Correct++; 
	   		  break;
	   }
	  else{
	  	printf("\n\n틀렸습니다 ㅜㅜ, 정답은 A.느티나무 입니다.");
		break;
		}
		
		case 7:
	  		printf("\n\n\nQ.둔촌고등학교의 교장선생님의 성함은 무엇일까요?");
	  		printf("\n\nA.최성곤 선생님\tB.오학진 선생님\n\nC.김송경 선생님\tD.이건일 선생님\n\n");
	  		QuestionCount++;
	  		if (toupper(getch())=='A'){
			  printf("\n\n정답입니다t!!!");
			  Correct++; 
			  break;
			}
			else{
		printf("\n\n틀렸습니다 ㅜㅜ, 정답은 A.최성곤 선생님 입니다.");
	  	break;
	  	}
	  	
	  	case 8:
	  		printf("\n\n\nQ.둔촌고등학교의 교화의 이름은  무엇일까요?");
	  		printf("\n\nA.백합\tB.철쭉\n\nC.장미\tD.개나리\n\n");
	  		QuestionCount++;
	  		if (toupper(getch())=='C'){
			  printf("\n\nCorrect!!!");
			  Correct++; 
			  break;
			}
			else{
		printf("\n\n틀렸습니다 ㅜㅜ, 정답은 C.장미 입니다.");
	  	break;
	  	}
	  	
	  	case 9:
	  		printf("\n\n\nQ.둔촌고등학교의 연락처는  무엇일까요?");
	  		printf("\n\nA.02-484-0000\tB.02-484-1234\n\nC.02-483-3896\tD.02-484-9288\n\n");
	  		QuestionCount++;
	  		if (toupper(getch())=='C'){
			  printf("\n\n정답입니다!!!");
			  Correct++; 
			  break;
			}
			else{
		printf("\n\n틀렸습니다 ㅜㅜ, 정답은 C.02-483-3896 입니다.");
	  	break;
	  	}
	  	
	  	case 10:
	  		printf("\n\n\nQ.둔촌고등학교의 초대 교장선생님의 성함은 무엇일까요?");
	  		printf("\n\nA.최송곤 선생님\tB.김둔촌 선생님\n\nC.이강동 선생님\tD.노수형 선생님\n\n");
	  		QuestionCount++;
	  		if (toupper(getch())=='D'){
			  printf("\n\n정답입니다!!!");
			  Correct++; 
			  break;
			}
			else{
		printf("\n\n틀렸습니다 ㅜㅜ, 정답은 D.노수형 선생님 입니다.");
	  	break;
	  	}
		
		
}// 질문창 
 MaxNumber++;
 if (MaxNumber< 6)//문제가 랜덤으로 5개가 나갔으면 게임 종료 
 goto Start;
 	printf("\n\n\n\n\n\n맞추신 문제의 개수는 %d개 입니다.", Correct);
 	puts("\n\n계속 진행하시겠습니까? ?(Y/N)");//다음 게임 여부 물어보기 
 		if (toupper(getch())=='Y') // 'Y'입력시 다시 시작 
  			goto Home;
 		else{
  			goto MainHome; // 'Y'이외의 키보드 선택시 메인홈으로 이동 
  		}
 	}
 return 0;
}
