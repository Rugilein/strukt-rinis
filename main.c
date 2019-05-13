#include <stdio.h>

    int kaina;
    int diena;
    int valandos;
    int a;
    int b;
    int c;

	void menu();
	void zalia();
	void geltona();
	void raudona();
	void leave();
	void aZona();
	void bZona();
	void cZona();
	void leave();

int main()
	{
	    printf("Sveiki atvyke i stovejimo aikstele!\n");
	    printf("Noredami testi spauskite ENTER...\n");
	    getchar();
	    menu();
	    return 0;
	}

	void menu()
	{
	    int menuChoice;
        do
        {
	    printf("Pasirinkite stovejimo zona: \n");
	    printf("...........\n");
	    printf("1. Zalia zona\n");
	    printf("2. Geltona zona\n");
	    printf("3. Raudona zona\n");
	    printf("4. Iseiti is programos\n");
	    scanf("%d", &menuChoice);
        }while (menuChoice < 1 || menuChoice > 4);
	    switch ( menuChoice )

	    {
	    case 1:
            {
	        zalia();
	        break;
            }
        case 2:
            {
            geltona();
            break;
            }
        case 3:
            {
            raudona();
            break;
            }
	    case 4:
            {
            leave();
            break;
            }

	    }

	}
	void zalia()
	{
	    printf( "\nZalioji zona\n\n" );
	    printf( "Mokestis: 1eur/h\n" );
	    printf( "Iveskite savaites diena:\n" );
        scanf("%d", &diena);
        if (diena>0 && diena<6){
            printf("Iveskite stovejimo laika valandomis:\n\n");
        scanf("%d", &valandos);
            aZona();
        } else if (diena>5 && diena<8){
            printf("Stovejimas savaitgaliais nemokamas!");
        } else {
            printf("Neteisingai ivedete diena.");
        }


	}
	void geltona()
	{
	    printf( "\nGeltonoji zona\n\n" );
	    printf( "Mokestis: 2eur/h\n" );
	    printf( "Iveskite savaites diena:\n" );
        scanf("%d", &diena);
        if (diena>0 && diena<6){
            printf("Iveskite stovejimo laika valandomis:\n\n");
        scanf("%d", &valandos);
            bZona();
        } else if (diena>5 && diena<8){
            printf("Stovejimas savaitgaliais nemokamas!");
        } else {
            printf("Neteisingai ivedete diena.");
        }
	}

    void raudona()
	{
	    printf( "\nRaudonoji zona\n\n" );
	    printf( "Mokestis: 3eur/h\n" );
	   // printf( "Iveskite savaites diena:\n" );
       //scanf("%d", &diena);
	    printf("Iveskite stovejimo laika valandomis:\n\n");
        scanf("%d", &valandos);
        cZona();
      /*  if (diena>0 && diena<8){
            cZona();
        } else {
            printf("Neteisingai ivedete diena.");
        } */
	}

	void aZona(){
    a=1;
	int d;
	d=a*valandos;
	printf("Moketina suma eurais:%d",d);
	}
	void bZona(){
	b=2;
	int e;
	e=b*valandos;
	printf("Moketina suma eurais:%d",e);
	}
	void cZona(){
    c=3;
	int f;
	f=c*valandos;
	printf("Moketina suma eurais:%d",f);
	}

	void leave()
	{
	    printf("Meniu uzdaromas");
	}
