#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

void Help(){
 system("cls");
 printf("\n\n\n\t�� ������ �ܼ��� ���� �������� �־����� ������ �´� �������� ���ø� �Ǵ� �����Դϴ�!");
 printf("\n\n\t�´� ������ ���߽ñ� �ٶ��ϴ�, ����� ����!");
}
 
int main(){
     int Rand,MaxNumber,A,QuestionCount,Correct;//Rand = ������ ������ȣ, MaxNumber = ���� ���� (5���� ����) , A = for���� ���� , QuestionCount = �������� ���� 
     int Question[6];
     
     char choice;
     
    system("cls");

    MainHome: // ���� ����â 
    system("cls");
    puts("\n\t\t SW Quiz | DoonChon Quiz \n\n") ;
    puts("\n\t\t-------------------------------");
    puts("\n\t\t 'S'�Է½� ���� ����");
    puts("\n\t\t 'H'�Է½� ���� ����");
    puts("\n\t\t 'Q'�Է½� ���� ����");
    printf("\n\t\t-------------------------------\n\n\t\t");
    printf("\n\t\t������ : 10925 �ѹμ� \n\n\t\t");
    choice=toupper(getch());

     if (choice == 'Q'){
 		exit(1); //'Q' �Է½� ���� ������ (���α׷� ����)
	}
     else if (choice == 'H'){
		 Help();
		 getch();
		 goto MainHome;
 		} // 'H' �Է½� ���ӵ��򸻷� �̵� (Ű���� �Է½� �ٽ� Ȩ���� ����) 
 
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
	  		printf("\n\n\nQ.���̰���б��� ���弱������ ������ �����ϱ��?");
	  		printf("\n\nA.�ּ��� ������\tB.������ ������\n\nC.��۰� ������\tD.�̰��� ������\n\n");
	  		QuestionCount++;
	  		if (toupper(getch())=='A'){
			  printf("\n\n�����Դϴ�!!!");
			  Correct++; 
			  break;
			}
		  else{
			printf("\n\nƲ�Ƚ��ϴ� �̤�, ������ A.�ּ��� ������ �Դϴ�.");
		  	break;
		  	}
  
		case 2:
	  	printf("\n\nQ.�츮�б��� �̸��� �����ϱ��?");
	  	printf("\n\nA.���ϰ���б�\tB.���̰���б�\n\nC.�ѿ�����б�\tD.�������б�\n\n");
	  	QuestionCount++;
	  		if (toupper(getch())=='B'){
			  printf("\n\n�����Դϴ�!!!");
			  Correct++; 
	   		  break;
	   }
	  else{
	  	printf("\n\nƲ�Ƚ��ϴ� �̤�, ������ B.���̰���б� �Դϴ�.");
		break;
		}
		
		case 3:
	  	printf("\n\nQ.�츮�б��� ������ ������ �����ϱ��?");
	  	printf("\n\nA.2003��\tB.1998��\n\nC.2000��\tD.1997��\n\n");
	  	QuestionCount++;
	  		if (toupper(getch())=='D'){
			  printf("\n\n�����Դϴ�!!!");
			  Correct++; 
	   		  break;
	   }
	  else{
	  	printf("\n\nƲ�Ƚ��ϴ� �̤�, ������ D.1997�� �Դϴ�.");
		break;
		}
		
		case 4:
	  	printf("\n\nQ.�츮�б��� ������ �����ϱ��?");
	  	printf("\n\nA.����Ӱ� ����\tB.�ǰ��ϰ� �����ϰ� \n\nC.Ȱ���� ������\tD.����, â��, ����\n\n");
	  	QuestionCount++;
	  		if (toupper(getch())=='D'){
			  printf("\n\n�����Դϴ�!!!");
			  Correct++; 
	   		  break;
	   }
	  else{
	  	printf("\n\nƲ�Ƚ��ϴ� �̤�, ������ D.����, â��, ���� �Դϴ�.");
		break;
		}
		
		case 5:
	  	printf("\n\nQ.�츮�б��� �л�ȸ�� �̸��� �����ϱ��?");
	  	printf("\n\nA.DCAOS \tB.UTP \n\nC.DOONCHONMAN \tD.���̰��ǥ\n\n");
	  	QuestionCount++;
	  		if (toupper(getch())=='A'){
			  printf("\n\n�����Դϴ�!!!");
			  Correct++; 
	   		  break;
	   }
	  else{
	  	printf("\n\nƲ�Ƚ��ϴ� �̤�, ������ A.DCAOS �Դϴ�.");
		break;
		}
		
		case 6:
	  	printf("\n\nQ.�츮�б��� ������  �̸��� �����ϱ��?");
	  	printf("\n\nA.��Ƽ���� \tB.�ҳ��� \n\nC.���೪�� \tD.������ \n\n");
	  	QuestionCount++;
	  		if (toupper(getch())=='A'){
			  printf("\n\n�����Դϴ�!!!");
			  Correct++; 
	   		  break;
	   }
	  else{
	  	printf("\n\nƲ�Ƚ��ϴ� �̤�, ������ A.��Ƽ���� �Դϴ�.");
		break;
		}
		
		case 7:
	  		printf("\n\n\nQ.���̰���б��� ���弱������ ������ �����ϱ��?");
	  		printf("\n\nA.�ּ��� ������\tB.������ ������\n\nC.��۰� ������\tD.�̰��� ������\n\n");
	  		QuestionCount++;
	  		if (toupper(getch())=='A'){
			  printf("\n\n�����Դϴ�t!!!");
			  Correct++; 
			  break;
			}
			else{
		printf("\n\nƲ�Ƚ��ϴ� �̤�, ������ A.�ּ��� ������ �Դϴ�.");
	  	break;
	  	}
	  	
	  	case 8:
	  		printf("\n\n\nQ.���̰���б��� ��ȭ�� �̸���  �����ϱ��?");
	  		printf("\n\nA.����\tB.ö��\n\nC.���\tD.������\n\n");
	  		QuestionCount++;
	  		if (toupper(getch())=='C'){
			  printf("\n\nCorrect!!!");
			  Correct++; 
			  break;
			}
			else{
		printf("\n\nƲ�Ƚ��ϴ� �̤�, ������ C.��� �Դϴ�.");
	  	break;
	  	}
	  	
	  	case 9:
	  		printf("\n\n\nQ.���̰���б��� ����ó��  �����ϱ��?");
	  		printf("\n\nA.02-484-0000\tB.02-484-1234\n\nC.02-483-3896\tD.02-484-9288\n\n");
	  		QuestionCount++;
	  		if (toupper(getch())=='C'){
			  printf("\n\n�����Դϴ�!!!");
			  Correct++; 
			  break;
			}
			else{
		printf("\n\nƲ�Ƚ��ϴ� �̤�, ������ C.02-483-3896 �Դϴ�.");
	  	break;
	  	}
	  	
	  	case 10:
	  		printf("\n\n\nQ.���̰���б��� �ʴ� ���弱������ ������ �����ϱ��?");
	  		printf("\n\nA.�ּ۰� ������\tB.����� ������\n\nC.�̰��� ������\tD.����� ������\n\n");
	  		QuestionCount++;
	  		if (toupper(getch())=='D'){
			  printf("\n\n�����Դϴ�!!!");
			  Correct++; 
			  break;
			}
			else{
		printf("\n\nƲ�Ƚ��ϴ� �̤�, ������ D.����� ������ �Դϴ�.");
	  	break;
	  	}
		
		
}// ����â 
 MaxNumber++;
 if (MaxNumber< 6)//������ �������� 5���� �������� ���� ���� 
 goto Start;
 	printf("\n\n\n\n\n\n���߽� ������ ������ %d�� �Դϴ�.", Correct);
 	puts("\n\n��� �����Ͻðڽ��ϱ�? ?(Y/N)");//���� ���� ���� ����� 
 		if (toupper(getch())=='Y') // 'Y'�Է½� �ٽ� ���� 
  			goto Home;
 		else{
  			goto MainHome; // 'Y'�̿��� Ű���� ���ý� ����Ȩ���� �̵� 
  		}
 	}
 return 0;
}
