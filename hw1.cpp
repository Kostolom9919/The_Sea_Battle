#undef UNICODE

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<locale.h>
#include<dos.h>  //äëÿ sleep() - Ïàóçà íà êîë-âî ñåêóíä
#include<Windows.h>
//printf("%c",7); - Âîñïðîèçâåäåíèå çâóêà
//printf("%c",219); - Êîðàáëü
using namespace std;

int local=0;

void vivod1(int a[12][12],int b[12][12]) {
	int i=1,j=1,g=1,h=1;
	system("color F0");
	setlocale(LC_ALL,"Rus");
	if(h==1)
		if(local==1)
			printf("\n            Âàøè êîðàáëè                  Ïîëå âàøèõ îáñòðåëîâ        \n");
		else
			printf("\n            Yours ships                  Field of your shelling       \n");
	else if(local==1)
		printf("\n\n         Êîðàáëè êîìïüþòåðà            Ïîëå îáñòðåëîâ êîìïüþòåðà      \n");
	else
		printf("\n\n           Computer ships          The field of shelling the computer \n");
	printf("\n    A  B  C  D  E  F  G  H  I  J      A  B  C  D  E  F  G  H  I  J    \n");
	setlocale(LC_ALL,"C");
	for(j=1; j<=2; j++) {
		printf("   %c%c%c",201,205,205);
		for(i=1; i<=9; i++)
			printf("%c%c%c",203,205,205);
		printf("%c",187);
	}
	printf("\n");
	for(j=1; j<=2; j++) {
		printf("  %d%c",1,186);
		for(i=1; i<=10; i++) {
			if(((a[1][i]==0)&&(j==1))||((b[1][i]==0)&&(j==2)))printf("  ");
			else if(((a[1][i]==1)&&(j==1))||((b[1][i]==1)&&(j==2)))printf("%c%c",176,176);
			else if(((a[1][i]<-1)&&(j==1))||((b[1][i]<-1)&&(j==2)))printf("%c%c",125,123);
			else if(((a[1][i]>1)&&(j==1))||((b[1][i]>1)&&(j==2)))printf("%c%c",219,219);
			printf("%c",186);
		}
	}
	for(i=2; i<=10; i++) {
		printf("\n");
		for(g=1; g<=2; g++) {
			printf("   %c%c%c",204,205,205);
			for(j=1; j<=9; j++)
				printf("%c%c%c",206,205,205);
			printf("%c",185);
		}
		printf("\n");
		for(g=1; g<=2; g++) {
			if(i!=10)printf("  %d%c",i,186);
			else printf(" %d%c",i,186);
			for(j=1; j<=10; j++) {
				if(((a[i][j]==0)&&(g==1))||((b[i][j]==0)&&(g==2)))printf("  ");
				else if(((a[i][j]==1)&&(g==1))||((b[i][j]==1)&&(g==2)))printf("%c%c",176,176);
				else if(((a[i][j]<-1)&&(g==1))||((b[i][j]<-1)&&(g==2)))printf("%c%c",125,123);
				else if(((a[i][j]>1)&&(g==1))||((b[i][j]>1)&&(g==2)))printf("%c%c",219,219);
				printf("%c",186);
			}
		}
	}
	printf("\n");
	for(j=1; j<=2; j++) {
		printf("   %c%c%c",200,205,205);
		for(i=1; i<=9; i++)
			printf("%c%c%c",202,205,205);
		printf("%c",188);
	}
	printf("\n\n");
	if(local==1) setlocale(LC_ALL,"Rus");
}

int main() {
	int menu[2]= {0};
	int c[4]= {179};
	int Chose=3,ChoseOptions=0,sound=7,difficulty=1;
	int a1[12][12]= {0},a2[12][12]= {0},b1[12][12]= {0},b2[12][12]= {0};
	int ran1=0,ran2=0,t=1,baLL1=0,baLL2=0,x2[8]= {0,0,0,0,0,0,0,0},p2=0,prov1=0,prov2=0,proof1=0,proof2=0;
	int i=0,j=0,g=0,i1=0,j1=0,x=0,min=0,max=0,w=30;
	char ran,c1;
	srand((time_t)time(NULL));
	do {
		do {

		M1:
			system("cls");
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);// äëÿ ïîëó÷åíèÿ äåñêðèïòîðà
			SetConsoleTextAttribute(hConsole, (WORD) ((1 << 4) | 3));
			printf("\n\n");
			printf("\n       ##     ##     ##     ####       ##     ##   #     ##         ###     ");
			printf("\n       ###   ###   ##  ##   ##  ##   ##  ##   ##  #    ##  ##               ");
			printf("\n       ## # # ##  ##    ##  ##  ##  ##    ##  ## #    ##    ##   ##    ###  ");
			printf("\n       ##  #  ##  ##    ##  ####    #         ###     ##    ##   ##   # ##  ");
			printf("\n       ##     ##  ##    ##  ##      ##    ##  ## #    ##    ##   ##  #  ##  ");
			printf("\n       ##     ##   ##  ##   ##       ##  ##   ##  #    ##  ##    ## #   ##  ");
			printf("\n       ##     ##     ##     ##         ##     ##   #     ##      ###    ##  ");
			printf("\n     |=====================================================================|");
			printf("\n                          ######      ##        ###                         ");
			printf("\n                          ##        ##  ##                                  ");
			printf("\n                          ##       ##    ##  ##    ###                      ");
			printf("\n                          #####    ##    ##  ##   # ##                      ");
			printf("\n                          ##   ##  ##    ##  ##  #  ##                      ");
			printf("\n                          ##   ##   ##  ##   ## #   ##                      ");
			printf("\n                          #####       ##     ###    ##                      ");
			printf("\n\n");
			if(local==1) {
				setlocale(LC_ALL,"C");
				printf("%+33c", c[1]);
				setlocale(LC_ALL,"Rus");
			} else
				printf("%+33c", c[1]);
			if(local==1)printf("1.Íà÷àòü èãðó\n\n");
			else
				printf("1.Begin game\n\n");
			if(local==1) {
				setlocale(LC_ALL,"C");
				printf("%+34c", c[2]);
				setlocale(LC_ALL,"Rus");
			} else
				printf("%+35c", c[2]);
			if(local==1)printf("2.Íàñòðîéêè\n\n");
			else
				printf("2.Options\n\n");
			if(local==1) {
				setlocale(LC_ALL,"C");
				printf("%+36c", c[3]);
				setlocale(LC_ALL,"Rus");
			} else
				printf("%+37c", c[3]);
			if(local==1)printf("3.Âûõîä\n\n");
			else
				printf("3.Exit\n\n");
			for (i=1; i<=3; i++) {
				printf("\n");
			}
			if(local==1)printf("W-ââåðõ, S-âíèç, Esc-âûõîä, Enter");
			else
				printf("W-up, S-down, Esc-exit Enter");
			printf("\n");
			if(local==1)printf("Ðàçðàáîòàíî: Ãðóïïà 2 ÒÌÏ-42");
			else
				printf("Created: Group 2 TMP-42");

			x = getch();
			if(x==27)goto M2;
			i=1;
			if (x == 119) {
				Chose = Chose + 1;
			}

			if (x == 115) {
				Chose = Chose - 1;
			}

			if (Chose == 3) {
				c[1] = 219;
				c[2] = 179;
				c[3] = 179;
				menu[i] = 1;
			}

			if (Chose == 2) {
				c[1] = 179;
				c[2] = 219;
				c[3] = 179;
				menu[i] = 2;
			}

			if (Chose == 1) {
				c[1] = 179;
				c[2] = 179;
				c[3] = 219;
				menu[i] = 5;
			}

			if (Chose == 0) {
				Chose = 3;
				c[1] = 219;
				c[2] = 179;
				c[3] = 179;
			}

			if (Chose == 4) {
				Chose = 1;
				c[1] = 179;
				c[2] = 179;
				c[3] = 219;
			}
		} while (x != 13);




		switch (menu[i]) {



			case 1: //begin game

				for(i=1; i<=10; i++)
					for(j=1; j<=10; j++) {
						a1[i][j]=0;
						a2[i][j]=0;
						b1[i][j]=0;
						b2[i][j]=0;
					}
				for(i=0; i<=7; i++)
					x2[i]=0;
				proof1=0;
				proof2=0;
				prov1=0;
				prov2=0;
				p2=0;
				baLL1=0;
				baLL2=0;

				system("cls");
				system("color F0");
				if(difficulty==0)w=100;
				else w=30;

				if(local==1)
					printf("\n Õîòèòå ñëó÷àéíîå ðàñïîëîæåíèå êîðàáëåé? (1-Äà)\n");
				else
					printf("\n Do you want a random location of ships? (1-Yes)\n");
				x=getch();
				if(x==27)goto M1;
				//----------------ÈÍÈÖÈÀËÈÇÀÖÈß-ÊÎÐÀÁËÅÉ----------------//
				for(i=0; i<=11; i++) {
					a1[i][0]=1;
					a1[0][i]=1;
					a1[11][i]=1;
					a1[i][11]=1;
					b1[i][0]=1;
					b1[0][i]=1;
					b1[11][i]=1;
					b1[i][11]=1;
				}

				if(x==49)
					for(i=4; i>=1; i--) {

						prov2++;
						for(j=1; j<=prov2; j++)
							do {
								prov1=0;
								do {
									ran1=rand()%10+1;
									ran2=rand()%10+1;
								} while(a1[ran1][ran2]>0);
								x=rand()%4+1;
								switch(x) {
									case 1:
										if(((ran1-3>0)&&(a1[ran1-3][ran2]==0)&&(a1[ran1-2][ran2]==0)&&(a1[ran1-1][ran2]==0)&&(i==4))||((ran1-2>0)&&(a1[ran1-2][ran2]==0)&&(a1[ran1-1][ran2]==0)&&(i==3))||((ran1-1>0)&&(a1[ran1-1][ran2]==0)&&(i==2))||(i==1)) {
											for(g=0; g<=i-1; g++)a1[ran1-g][ran2]=i+1;
											prov1=1;
										}
										break;
									case 2:
										if(((ran2+3<11)&&(a1[ran1][ran2+3]==0)&&(a1[ran1][ran2+2]==0)&&(a1[ran1][ran2+1]==0)&&(i==4))||((ran2+2<11)&&(a1[ran1][ran2+2]==0)&&(a1[ran1][ran2+1]==0)&&(i==3))||((ran2+1<11)&&(a1[ran1][ran2+1]==0)&&(i==2))||(i==1)) {
											for(g=0; g<=i-1; g++)a1[ran1][ran2+g]=i+1;
											prov1=1;
										}
										break;
									case 3:
										if(((ran1+3<11)&&(a1[ran1+3][ran2]==0)&&(a1[ran1+2][ran2]==0)&&(a1[ran1+1][ran2]==0)&&(i==4))||((ran2+2<11)&&(a1[ran1+2][ran2]==0)&&(a1[ran1+1][ran2]==0)&&(i==3))||((ran2+1<11)&&(a1[ran1+1][ran2]==0)&&(i==2))||(i==1)) {
											for(g=0; g<=i-1; g++)a1[ran1+g][ran2]=i+1;
											prov1=1;
										}
										break;
									case 4:
										if(((ran2-3>0)&&(a1[ran1][ran2-3]==0)&&(a1[ran1][ran2-2]==0)&&(a1[ran1][ran2-1]==0)&&(i==4))||((ran2-2>0)&&(a1[ran1][ran2-2]==0)&&(a1[ran1][ran2-1]==0)&&(i==3))||((ran2-1>0)&&(a1[ran1][ran2-1]==0)&&(i==2))||(i==1)) {
											for(g=0; g<=i-1; g++)a1[ran1][ran2-g]=i+1;
											prov1=1;
										}
										break;
								}
								for(i1=1; i1<=10; i1++)
									for(j1=1; j1<=10; j1++)
										if(((a1[i1+1][j1]>1)||(a1[i1-1][j1]>1)||(a1[i1][j1+1]>1)||(a1[i1][j1-1]>1)||(a1[i1-1][j1-1]>1)||(a1[i1+1][j1+1]>1)||(a1[i1+1][j1-1]>1)||(a1[i1-1][j1+1]>1))&&(a1[i1][j1]==0))a1[i1][j1]=1;
							} while(prov1==0);
					}
				else {
					prov2=0;
					for(i=4; i>=1; i--) {
						prov2++;
						for(j=1; j<=prov2; j++) {
							do {
								do {
									do {
										system("cls");
										vivod1(a1,a2);
										if(local==1) printf("Ââåäèòå êîîðäèíàòû %d ïàëóáíîãî êîðàáëÿ\n",i);
										else printf("Enter the coordinates of the %d deck ship\n",i);
										if(i<4)if(local==1)printf("%d êîðàáëü",j);
											else printf("%d ship",j);
										if(local==1)printf("\nÂâåäèòå ñòîëáåö ");
										else printf("\nEnter column ");
										ran=0;
										ran=getch();
										if(ran==27)goto M1;
										printf("%c",ran);
										switch(ran) {
											case 'A':
												ran2=1;
												break;
											case 'B':
												ran2=2;
												break;
											case 'C':
												ran2=3;
												break;
											case 'D':
												ran2=4;
												break;
											case 'E':
												ran2=5;
												break;
											case 'F':
												ran2=6;
												break;
											case 'G':
												ran2=7;
												break;
											case 'H':
												ran2=8;
												break;
											case 'I':
												ran2=9;
												break;
											case 'J':
												ran2=10;
												break;
											default :
												ran2=11;
												break;
										}
									} while(ran2>10);
									if(local==1)printf("\nÅñëè âû õîòèòå âûáðàòü ëèíèþ 1, ïîñëå âûáîðà ëèíèè íàæìèòå ENTER");
									else printf("\nIf you want select line 1, after select line press ENTER");
									if(local==1)printf("\nÂâåäèòå íîìåð ñòðîêè ");
									else printf("\nEnter the line number ");
									c1=getche();
									if(c1==27)goto M1;
									if(c1==49) {
										c1=getch();
										if(c1==27)goto M1;
										if(c1==48) {
											printf("%c",c1);
											ran1=10;
										} else {
											c1=49;
											ran1=1;
										}
									} else ran1=(int)(c1)-48;
								} while((ran1<1)||(ran1>10)||(a1[ran1][ran2]>0));
								prov1=0;
								if(i>1) {
									if(local==1)printf("\nÂûáåðèòå ñòðåëî÷êàìè â êàêóþ ñòîðîíó áóäåò ñòðîèòñÿ êîðàáëü ");
									else printf("\nChoose the arrows to be built ship ");
									getch();
									c1=getch();
									if(c1==27)goto M1;
									switch((int)(c1)) {
										case 75:
											if(((ran2-3>0)&&(a1[ran1][ran2-3]==0)&&(a1[ran1][ran2-2]==0)&&(a1[ran1][ran2-1]==0)&&(i==4))||((ran2-2>0)&&(a1[ran1][ran2-2]==0)&&(a1[ran1][ran2-1]==0)&&(i==3))||((ran2-1>0)&&(a1[ran1][ran2-1]==0)&&(i==2))) {
												for(g=0; g<=i-1; g++)a1[ran1][ran2-g]=i+1;
												prov1=1;
											}
											break;
										case 72:
											if(((ran1-3>0)&&(a1[ran1-3][ran2]==0)&&(a1[ran1-2][ran2]==0)&&(a1[ran1-1][ran2]==0)&&(i==4))||((ran1-2>0)&&(a1[ran1-2][ran2]==0)&&(a1[ran1-1][ran2]==0)&&(i==3))||((ran1-1>0)&&(a1[ran1-1][ran2]==0)&&(i==2))) {
												for(g=0; g<=i-1; g++)a1[ran1-g][ran2]=i+1;
												prov1=1;
											}
											break;
										case 77:
											if(((ran2+3<11)&&(a1[ran1][ran2+3]==0)&&(a1[ran1][ran2+2]==0)&&(a1[ran1][ran2+1]==0)&&(i==4))||((ran2+2<11)&&(a1[ran1][ran2+2]==0)&&(a1[ran1][ran2+1]==0)&&(i==3))||((ran2+1<11)&&(a1[ran1][ran2+1]==0)&&(i==2))) {
												for(g=0; g<=i-1; g++)a1[ran1][ran2+g]=i+1;
												prov1=1;
											}
											break;
										case 80:
											if(((ran1+3<11)&&(a1[ran1+3][ran2]==0)&&(a1[ran1+2][ran2]==0)&&(a1[ran1+1][ran2]==0)&&(i==4))||((ran2+2<11)&&(a1[ran1+2][ran2]==0)&&(a1[ran1+1][ran2]==0)&&(i==3))||((ran2+1<11)&&(a1[ran1+1][ran2]==0)&&(i==2))) {
												for(g=0; g<=i-1; g++)a1[ran1+g][ran2]=i+1;
												prov1=1;
											}
											break;
									}
								} else {
									a1[ran1][ran2]=2;
									prov1=1;
								}
								if(prov1==0) {
									if(local==1)printf("\nÍåò ìåñòà");
									else printf("\nNot enough");
									//sleep(1);
								}
							} while(prov1==0);
							for(i1=1; i1<=10; i1++)
								for(j1=1; j1<=10; j1++)
									if(((a1[i1+1][j1]>1)||(a1[i1-1][j1]>1)||(a1[i1][j1+1]>1)||(a1[i1][j1-1]>1)||(a1[i1-1][j1-1]>1)||(a1[i1+1][j1+1]>1)||(a1[i1+1][j1-1]>1)||(a1[i1-1][j1+1]>1))&&(a1[i1][j1]==0))a1[i1][j1]=1;
						}
					}
				}
				prov2=0;
				for(i=4; i>=1; i--) {
					prov2++;
					for(j=1; j<=prov2; j++)
						do {
							prov1=0;
							do {
								ran1=rand()%10+1;
								ran2=rand()%10+1;
							} while(b1[ran1][ran2]>0);
							x=rand()%4+1;
							switch(x) {
								case 1:
									if(((ran1-3>0)&&(b1[ran1-3][ran2]==0)&&(b1[ran1-2][ran2]==0)&&(b1[ran1-1][ran2]==0)&&(i==4))||((ran1-2>0)&&(b1[ran1-2][ran2]==0)&&(b1[ran1-1][ran2]==0)&&(i==3))||((ran1-1>0)&&(b1[ran1-1][ran2]==0)&&(i==2))||(i==1)) {
										for(g=0; g<=i-1; g++)b1[ran1-g][ran2]=i+1;
										prov1=1;
									}
									break;
								case 2:
									if(((ran2+3<11)&&(b1[ran1][ran2+3]==0)&&(b1[ran1][ran2+2]==0)&&(b1[ran1][ran2+1]==0)&&(i==4))||((ran2+2<11)&&(b1[ran1][ran2+2]==0)&&(b1[ran1][ran2+1]==0)&&(i==3))||((ran2+1<11)&&(b1[ran1][ran2+1]==0)&&(i==2))||(i==1)) {
										for(g=0; g<=i-1; g++)b1[ran1][ran2+g]=i+1;
										prov1=1;
									}
									break;
								case 3:
									if(((ran1+3<11)&&(b1[ran1+3][ran2]==0)&&(b1[ran1+2][ran2]==0)&&(b1[ran1+1][ran2]==0)&&(i==4))||((ran2+2<11)&&(b1[ran1+2][ran2]==0)&&(b1[ran1+1][ran2]==0)&&(i==3))||((ran2+1<11)&&(b1[ran1+1][ran2]==0)&&(i==2))||(i==1)) {
										for(g=0; g<=i-1; g++)b1[ran1+g][ran2]=i+1;
										prov1=1;
									}
									break;
								case 4:
									if(((ran2-3>0)&&(b1[ran1][ran2-3]==0)&&(b1[ran1][ran2-2]==0)&&(b1[ran1][ran2-1]==0)&&(i==4))||((ran2-2>0)&&(b1[ran1][ran2-2]==0)&&(b1[ran1][ran2-1]==0)&&(i==3))||((ran2-1>0)&&(b1[ran1][ran2-1]==0)&&(i==2))||(i==1)) {
										for(g=0; g<=i-1; g++)b1[ran1][ran2-g]=i+1;
										prov1=1;
									}
									break;
							}
							for(i1=1; i1<=10; i1++)
								for(j1=1; j1<=10; j1++)
									if(((b1[i1+1][j1]>1)||(b1[i1-1][j1]>1)||(b1[i1][j1+1]>1)||(b1[i1][j1-1]>1)||(b1[i1-1][j1-1]>1)||(b1[i1+1][j1+1]>1)||(b1[i1+1][j1-1]>1)||(b1[i1-1][j1+1]>1))&&(b1[i1][j1]==0))b1[i1][j1]=1;
						} while(prov1==0);
				}
				for(i=1; i<=10; i++)
					for(j=1; j<=10; j++) {
						if(a1[i][j]==1)a1[i][j]=0;
						if(b1[i][j]==1)b1[i][j]=0;
					}
				prov2=0;
				//----------------------ÕÎÄ-ÈÃÐÎÊÀ----------------------//

				for(t=1; t<=w; t++) {
					do {
						do {
							do {
								ran2=0;
								system("cls");
								vivod1(a1,a2);
								if(local==1)printf("\nÍàæìèòå íà êëàâèøó íóæíîãî ñòîëáöà ");
								else printf("\nClick on the button of the selected column ");
								ran=getch();
								if(ran==27)goto M1;
								printf("%c",ran);
								switch(ran) {
									case 'A':
										ran2=1;
										break;
									case 'B':
										ran2=2;
										break;
									case 'C':
										ran2=3;
										break;
									case 'D':
										ran2=4;
										break;
									case 'E':
										ran2=5;
										break;
									case 'F':
										ran2=6;
										break;
									case 'G':
										ran2=7;
										break;
									case 'H':
										ran2=8;
										break;
									case 'I':
										ran2=9;
										break;
									case 'J':
										ran2=10;
										break;
									default:
										if(local==1)printf("\nÒàêîãî ñòîëáöà íåò!");
										else printf("\nThe entered column is missing!");
										ran2=11;
									//sleep(1);
										break;
								}
							} while(ran2>10);
							do {
								system("cls");
								vivod1(a1,a2);
								if(local==1)printf("\nÍàæìèòå íà êëàâèøó íóæíîãî ñòîëáöà ");
								else printf("\nClick on the button of the selected column ");
								printf("%c",ran);
								if(local==1)printf("\nÂâåäèòå íîìåð ñòðîêè ");
								else printf("\nEnter the line number ");
								c1=getch();
								if(c1==27)goto M1;
								printf("%c",c1);
								if(c1==49) {
									c1=getch();
									if(c1==27)goto M1;
									if(c1==48) {
										printf("%c",c1);
										ran1=10;
									} else {
										c1=49;
										ran1=1;
									}
								} else ran1=(int)(c1)-48;
							} while((ran1<1)||(ran1>10));
							if ((b1[ran1][ran2]==1)||(b1[ran1][ran2]<0)) {
								if(local==1)printf("\nÑòðåëÿéòå çàíîãî\n");
								else printf("\nShoot again\n");
								//sleep(1);
							}
						} while((b1[ran1][ran2]==1)||(b1[ran1][ran2]<0));
						if (b1[ran1][ran2]==0) {
							b1[ran1][ran2]=1;
							a2[ran1][ran2]=1;
							if(local==1)printf("\nÂû ïðîìàõíóëèñü\n");
							else printf("\nYou missed");
							prov1=0;
							//sleep(1);
						}

						else if (b1[ran1][ran2]>1) {
							b1[ran1][ran2]*=-1;
							a2[ran1][ran2]=b1[ran1][ran2];
							proof1=0;
							for(i=1; i<=10; i++)
								for(j=1; j<=10; j++)
									if((b1[i][j]<0)&&((b1[i-1][j]>1)||(b1[i+1][j]>1)||(b1[i][j-1]>1)||(b1[i][j+1]>1)))proof1=1;
							if(proof1==1) {

								if(local==1)printf("\n%cÏîïàë!\n",sound);
								else printf("\n%cHas got!\n",sound);
							} else {
								if(local==1)printf("\n%c%c%cÓíè÷òîæèë!\n",sound,sound,sound);
								else printf("\n%c%c%cDestroyed!\n",sound,sound,sound);
								for(i=1; i<=10; i++)
									for(j=1; j<=10; j++)
										if(((b1[i+1][j]<-1)||(b1[i-1][j]<-1)||(b1[i][j+1]<-1)||(b1[i][j-1]<-1)||(b1[i-1][j-1]<-1)||(b1[i+1][j+1]<-1)||(b1[i+1][j-1]<-1)||(b1[i-1][j+1]<-1))&&(b1[i][j]==0)) {
											b1[i][j]=1;
											a2[i][j]=1;
										}
							}
							baLL1++;
							prov1=1;
							//sleep(1);
						}
					} while((baLL1<20)&&(prov1==1));

					//--------------------ÕÎÄ-ÊÎÌÏÜÞÒÅÐÀ--------------------//

					if(baLL1<20)
						do {
							do {
								if(proof2==0) {
									ran1=rand()%10+1;
									ran2=rand()%10+1;
								} else {
									if((x2[0]==x2[2])||(x2[1]==x2[3])) {
										if(x2[1]==x2[3]) {
											min=x2[0];
											max=x2[0];
											for(i=2; i<=6 && x2[i]>0; i+=2) {
												if(min>x2[i])min=x2[i];
												if(max<x2[i])max=x2[i];
											}
											do {
												x=rand()%2+1;
												switch(x) {
													case 1:
														ran1=min-1;
														ran2=x2[1];
														break;
													case 2:
														ran1=max+1;
														ran2=x2[1];
														break;
												}
											} while((ran1<1)||(ran1>10)||(a1[ran1][ran2]<0)||(a1[ran1][ran2]==1));
										} else {
											min=x2[1];
											max=x2[1];
											for(i=3; i<=7 && x2[i]>0; i+=2) {
												if(min>x2[i])min=x2[i];
												if(max<x2[i])max=x2[i];
											}
											do {
												x=rand()%2+1;
												switch(x) {
													case 1:
														ran1=x2[0];
														ran2=min-1;
														break;
													case 2:
														ran1=x2[0];
														ran2=max+1;
														break;
												}
											} while((ran2<1)||(ran2>10)||(a1[ran1][ran2]<0)||(a1[ran1][ran2]==1));
										}
									} else {
										do {
											x=rand()%4+1;
											switch(x) {
												case 1:
													ran1=x2[0];
													ran2=x2[1]-1;
													break;
												case 2:
													ran1=x2[0]-1;
													ran2=x2[1];
													break;
												case 3:
													ran1=x2[0];
													ran2=x2[1]+1;
													break;
												case 4:
													ran1=x2[0]+1;
													ran2=x2[1];
													break;
											}
										} while((ran1<1)||(ran1>10)||(ran2<1)||(ran2>10)||(a1[ran1][ran2]<0)||(a1[ran1][ran2]==1));
									}
								}
							} while(a1[ran1][ran2]==1);
							if (a1[ran1][ran2]==0) {
								a1[ran1][ran2]=1;
								b2[ran1][ran2]=1;
								prov2=0;
								system("cls");
								vivod1(a1,a2);
								if(local==1)printf("\nÊîìïüþòåð ïðîìàõíóëñÿ\n");
								else printf("\nComputer missed\n");
								//sleep(1);
							} else if (a1[ran1][ran2]>1) {
								a1[ran1][ran2]*=-1;
								b2[ran1][ran2]=a1[ran1][ran2];
								proof2=0;
								for(i=1; i<=10; i++)
									for(j=1; j<=10; j++)
										if((a1[i][j]<0)&&((a1[i-1][j]>1)||(a1[i+1][j]>1)||(a1[i][j-1]>1)||(a1[i][j+1]>1)))proof2=1;
								if(proof2==1) {
									x2[p2]=ran1;
									x2[p2+1]=ran2;
									p2+=2;
									system("cls");
									if(local==1)printf("\n%cÊîìïüþòåð ïîïàë\n",sound);
									else printf("\n%cComputer hit\n",sound);
								} else {
									system("cls");
									if(local==1)printf("\n%c%c%cÊîìïüþòåð óíè÷òîæèë âàø êîðàáëü\n",sound,sound,sound);
									else printf("\n%c%c%cComputer destroyed your ship\n",sound,sound,sound);
									for(i=1; i<=10; i++)
										for(j=1; j<=10; j++)
											if(((a1[i+1][j]<-1)||(a1[i-1][j]<-1)||(a1[i][j+1]<-1)||(a1[i][j-1]<-1)||(a1[i-1][j-1]<-1)||(a1[i+1][j+1]<-1)||(a1[i+1][j-1]<-1)||(a1[i-1][j+1]<-1))&&(a1[i][j]==0)) {
												a1[i][j]=1;
												b2[i][j]=1;
											}
									p2=0;
									for(i=0; i<=7; i++)
										x2[i]=0;
								}
								baLL2++;
								vivod1(a1,a2);
								if(local==1)printf("Íàæìèòå Enter");
								else printf("Press the Enter");
								prov2=1;
								x=getch();
								if(x==27)goto M1;
								system("cls");
							}
						} while((baLL2<20)&&(prov2==1));
					if((baLL1==20)||(baLL2==20)||(t==w)) {
						system("cls");
						vivod1(a1,a2);
						vivod1(b1,b2);
						if(local==1)printf("\nÈãðà îêîí÷åíà çà %d õîä(-îâ/-à)\n",t);
						else printf("\nThe game is over in %d moves",t);
						break;
					}
				}
				if(baLL1>baLL2)
					if(local==1)printf("\nÂû ïîáåäèëè!");
					else printf("\nYou win!");
				else if(baLL1<baLL2)
					if(local==1)printf("\nÂû ïðîèãðàëè");
					else printf("\nYou lose");
				else if(baLL1=baLL2)printf("\nÝòî íåâåðîÿòíî!Íè÷üÿ!");
				else printf("\nThat's incredible!Draw!");
				if(local==1)printf("\n%d/20 ïðîòèâ %d/20 áàëëîâ\n",baLL1,baLL2);
				else
					printf("\n%d/20 vs %d/20 points\n",baLL1,baLL2);
				if(local==1)printf("Äëÿ âîçâðàùåíèÿ ê ìåíþ íàæìèòå ëþáóþ êëàâèøó");
				else printf("To return to the menu, press any key");
				getch();
				break;



			case 2: //options
				ChoseOptions=3;
				do {

					i=2;

					system("cls");
					printf("\n\n\n\n\n");
					if (local==1)printf("                                    Íàñòðîéêè");
					else
						printf("                                     Options");
					printf("\n\n\n\n\n");
					if(local==1) {
						setlocale(LC_ALL,"C");
						printf("%+35c", c[1]);
						setlocale(LC_ALL,"Rus");
					} else
						printf("%+35c", c[1]);
					if (local==1)printf("1.Òèï èãðû\n");
					else
						printf("1.Type game\n");
					if(local==1) {
						setlocale(LC_ALL,"C");
						printf("%+37c", c[2]);
						setlocale(LC_ALL,"Rus");
					} else
						printf("%+37c", c[2]);
					if (local==1)printf("2.Çâóê\n");
					else
						printf("2.Sound\n");
					if(local==1) {
						setlocale(LC_ALL,"C");
						printf("%+37c", c[3]);
						setlocale(LC_ALL,"Rus");
					} else
						printf("%+35c",c[3]);
					if (local==1)printf("3.ßçûê\n");
					else
						printf("3.Language\n");
					if(local==1) {
						setlocale(LC_ALL,"C");
						printf("%+37c", c[4]);
						setlocale(LC_ALL,"Rus");
					} else
						printf("%+38c", c[4]);
					if (local==1)printf("4.Íàçàä\n");
					else
						printf("4.Back\n");

					x = getch();
					if(x==27)goto M1;
					if (x == 119) {
						ChoseOptions = ChoseOptions + 1;
					}

					if (x == 115) {
						ChoseOptions = ChoseOptions - 1;
					}

					if (ChoseOptions == 4) {
						c[1] = 219;
						c[2] = 179;
						c[3] = 179;
						c[4] = 179;
						menu[i] = 1;
					}

					if (ChoseOptions == 3) {
						c[1] = 179;
						c[2] = 219;
						c[3] = 179;
						c[4] = 179;
						menu[i] = 2;
					}

					if (ChoseOptions == 2) {
						c[1] = 179;
						c[2] = 179;
						c[3] = 219;
						c[4] = 179;
						menu[i] = 3;
					}

					if (ChoseOptions == 1) {
						c[1] = 179;
						c[2] = 179;
						c[3] = 179;
						c[4] = 219;
						menu[i] = 4;
					}

					if (ChoseOptions == 0) {
						ChoseOptions = 4;
						c[1] = 219;
						c[2] = 179;
						c[3] = 179;
						c[4] = 179;
					}

					if (ChoseOptions == 5) {
						ChoseOptions = 1;
						c[1] = 179;
						c[2] = 179;
						c[3] = 179;
						c[4] = 219;
					}
				} while (x != 13);

				switch (menu[i]) {
						do {

						case 1: //type game

							if (difficulty == 1)	{
								if(local==1)printf("Ñëîæíîñòü: 30 õîäîâ \n\n");
								else
									printf("difficulty: 30 turns \n\n");
							}

							if (difficulty == 0) {
								if(local==1)printf("Ñëîæíîñòü: áåç îãðàíè÷åíèÿ íà êîë-âî õîäîâ \n\n");
								else
									printf("difficulty: No limits \n\n");
							}
							if(local==1)printf("Ñìåíèòü ñëîæíîñòü? Y-äà, N-íåò");
							else
								printf("Change difficulty? Y-yes, N-no");
							x=0;
							x = getch();

							if (x == 121) {

								if (difficulty == 1) {
									difficulty = 0;
									printf("\n\n\n\n");
								}

								else

									if (difficulty == 0) {
										difficulty = 1;
										printf("\n\n\n\n");
									}
								if (local==1)printf("Ñëîæíîñòü çàìåíåíà");
								else
									printf("Difficulty change");
								getch();
							}

							break;

						case 2: //sound

							if (sound == 7)	{
								if (local==1)printf("Çâóê: Âêëþ÷åí\n\n");
								else
									printf("Sound: ON \n\n");
							}

							else {
								if (local==1)printf("Çâóê: Âûêëþ÷åí\n\n");
								else
									printf("Sound: OFF\n\n");
							}
							if (local==1)printf("Ïåðåêëþ÷èòü çâóê? Y-äà, N-íåò");
							else
								printf("Switch sound? Y-yes, N-no");
							x=0;
							x = getch();

							if (x == 121) {

								if (sound == 7) {
									sound = 8;
									printf("\n\n\n\n");
								}

								else

									if (sound == 8) {
										sound = 7;
										printf("\n\n\n\n");
									}
								if (local==1)printf("Çâóê ïåðåêëþ÷¸í");
								else
									printf("Sound change");
								getch();
							}

							break;

						case 3: //language

							if (local == 1)	{
								printf("ßçûê: Ðóññêèé \n\n");
							}

							else {
								printf("Language: English \n\n");
							}
							if (local==1)printf("Ïîìåíÿòü ÿçûê? Y-äà, N-íåò");
							else
								printf("Change language? Y-yes, N-no");

							x=0;
							x = getch();

							if (x == 121) {

								if (local == 1) {
									local = 0;
									printf("\n\n\n\n");
								}

								else

									if (local == 0) {
										local = 1;
										printf("\n\n\n\n");
									}
								if (local==1) {
									setlocale(LC_ALL,"Rus");
									printf("ßçûê ñìåí¸í");
								} else {
									setlocale(LC_ALL,"C");
									printf("Language change");
								}
								getch();
							}

							break;
						} while (menu[i] != 4);
						break;

				}
		}

	} while (menu[i] != 5);
M2:
	;
}
