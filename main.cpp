#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void accueil() {
    printf("'##:::::'##:                                                \n");
    printf(" ##:'##: ##:                                                \n");
    printf(" ##: ##: ##:                                                \n");
    printf(" ##: ##: ##:                                                 \n");
    printf(" ##: ##: ##:                                            \n");
    printf(" ##: ##: ##:                                         \n");
    printf(". ###. ###::                        \n");
    printf(":...::...:::                         \n");
    printf(":::'###::::'##::: ##:'##::: ##:'########::'######::'##:::'##:\n");
    printf("::'## ##::: ###:: ##: ###:: ##: ##.....::'##... ##:. ##:'##::\n");
    printf(":'##:. ##:: ####: ##: ####: ##: ##::::::: ##:::..:::. ####:::\n");
    printf("'##:::. ##: ## ## ##: ## ## ##: ######::: ##:::::::::. ##::::\n");
    printf(" #########: ##. ####: ##. ####: ##...:::: ##:::::::::: ##::::\n");
    printf(" ##.... ##: ##:. ###: ##:. ###: ##::::::: ##::: ##:::: ##::::\n");
    printf(" ##:::: ##: ##::. ##: ##::. ##: ########:. ######::::: ##::::\n");
}

struct Inscription {
    char nom[30];
    char code[3];
    char nationalite[20];
    int rang;
    int dossard;
    };

void option_1 (struct Inscription participant[], int nbp, int nco) {
    char code_verifier[10][3] = {"CH","FR","IT","GE","JP","NO","RU","US"};
    int i,j, code_valider=1, str[10];

if (nbp == 10 || nbp > 10) {
    printf("\n");
    printf("Le maximum de participants est 10.");
    return;
}


    participant[nbp].dossard = nbp+1;




printf("Saisir le nom : ");
fflush(stdin);
gets(participant[nbp].nom);

printf("                        \n");
printf("  Code   Nationalite    \n");
printf("  CH      Suisse     \n");
printf("  FR    Francais(e)  \n");
printf("  IT    Italien(ne)  \n");
printf("  GE    Allemand(e)  \n");
printf("  JP    Japonais(e)  \n");
printf("  NO    Norvegien(ne)\n");
printf("  RU      Russe      \n");
printf("  US    Americain(e) \n");

if (nco == 9) {
        strcat(code_verifier[nco-1], participant[nco-1].code);
        printf("  %s    %s\n", participant[nco-1].code, participant[nco-1].nationalite);
}

if (nco == 10) {
    for (i=8;i<nco;i++) {
            strcat(code_verifier[i], participant[i].code);
            printf("  %s    %s\n", participant[i].code, participant[i].nationalite);
                }
}

        printf("Saisir le code de nationalite : ");
        fflush(stdin);
        gets(participant[nbp].code);

    for (i=0;i<8;i++) {
        str[i] = strcmp(participant[nbp].code, code_verifier[i]);
            if (str[i]==0) {
                code_valider = 0;
            }

            if (nco==9) {
                    if (str[i]==0 ||  strcmp(participant[nbp].code, participant[8].code) == 0)
                        {
                        code_valider = 0;
                    }
            }

            if (nco==10) {
                    if (str[i]==0 || strcmp(participant[nbp].code, participant[8].code) == 0 || strcmp(participant[nbp].code, participant[9].code) == 0)
                    {
                    code_valider = 0;
                }
            }
    }


    while(code_valider!=0) {
        printf("Erreur ! Recommencer : ");

        fflush(stdin);
        gets(participant[nbp].code);

        for (i=0;i<8;i++) {
            str[i] = strcmp(participant[nbp].code, code_verifier[i]);
            if (str[i]==0) {
                code_valider=0;
            }

            if (nco==9) {
                    if (str[i]==0 || strcmp(participant[nbp].code, participant[8].code) == 0)
                        {
                        code_valider = 0;
                    }
            }

            if (nco==10) {
                    if (str[i]==0 || strcmp(participant[nbp].code, participant[8].code) == 0 || strcmp(participant[nbp].code, participant[9].code) == 0)
                    {
                    code_valider = 0;
                }
            }
        }
    }

        printf("Saisir le rang mondial : ");
        fflush(stdin);
        scanf("%d", &participant[nbp].rang);

        for (i=0;i<nbp;i++) {
            for (j=i+1;j<nbp+1;j++) {
                    if (strcmp (participant[i].nom, participant[j].nom) == 0 || (participant[i].rang) == (participant[j].rang)) {
                        printf("----------------------\n");
                        printf("C'est impossible d'inscrire deux fois le meme participant!\n");
                        printf("Memes noms ou rangs interdits\n");
                        printf("Refaites, s'il vous plait.\n");
                        printf("----------------------\n");
                        exit(0);
                    }
            }
        }

}
void option_2 (struct Inscription participant[], int nbp, int nco) {
    int i,j, str[10];
    int ndd;
    int code_valider=1;
    char code_verifier[10][3] = {"CH","FR","IT","GE","JP","NO","RU","US"};

    printf("Saisir le numero de dossard : ");
    fflush(stdin);
    scanf("%d", &ndd);

    if (ndd > nbp) {
        printf("\n");
        printf("Erreur. Ce dossard n'existe pas");
        return;
    }

    if(ndd == nbp || ndd < nbp) {
        printf("%d  %s  %s  %d\n", participant[ndd-1].dossard, participant[ndd-1].nom, participant[ndd-1].code, participant[ndd-1].rang);
        printf("--------------\n");
        printf("Modifier le nom : ");
        fflush(stdin);
        gets(participant[ndd-1].nom);
        printf("Modifier le code : ");

        fflush(stdin);
        gets(participant[ndd-1].code);

            for (i=0;i<8;i++) {
        str[i] = strcmp(participant[ndd-1].code, code_verifier[i]);
            if (str[i]==0) {
                code_valider = 0;
            }

            if (nco==9) {
                    if (str[i]==0 ||  strcmp(participant[ndd-1].code, participant[8].code) == 0)
                        {
                        code_valider = 0;
                    }
            }

            if (nco==10) {
                    if (str[i]==0 || strcmp(participant[ndd-1].code, participant[8].code) == 0 || strcmp(participant[ndd-1].code, participant[9].code) == 0)
                    {
                    code_valider = 0;
                }
            }
    }


    while(code_valider!=0) {
        printf("Erreur ! Recommencer : ");

        fflush(stdin);
        gets(participant[ndd-1].code);

        for (i=0;i<8;i++) {
            str[i] = strcmp(participant[ndd-1].code, code_verifier[i]);
            if (str[i]==0) {
                code_valider=0;
            }

            if (nco==9) {
                    if (str[i]==0 || strcmp(participant[ndd-1].code, participant[8].code) == 0)
                        {
                        code_valider = 0;
                    }
            }

            if (nco==10) {
                    if (str[i]==0 || strcmp(participant[ndd-1].code, participant[8].code) == 0 || strcmp(participant[ndd-1].code, participant[9].code) == 0)
                    {
                    code_valider = 0;
                }
            }
        }
    }

        printf("Modifier le rang : ");
        fflush(stdin);
        scanf("%d", &participant[ndd-1].rang);

        for (i=0;i<ndd-1;i++) {
            for (j=i+1;j<ndd;j++) {
                    if (strcmp (participant[i].nom, participant[j].nom) == 0 || (participant[i].rang) == (participant[j].rang)) {
                        printf("----------------------\n");
                        printf("C'est impossible d'inscrire deux fois le meme participant!\n");
                        printf("Memes noms ou rangs interdits\n");
                        printf("Refaites, s'il vous plait.");
                        exit(0);
                    }
            }
        }

        printf("--------------\n");
        printf("%d  %s  %s  %d\n", participant[ndd-1].dossard, participant[ndd-1].nom, participant[ndd-1].code, participant[ndd-1].rang);
    }





}
void option_3 (struct Inscription participant[], int nbp) {
        int i;
        printf("Dossard Nom           Code       Rang\n");
        printf("-------------------------------------\n");

        for (i=0;i<nbp;i++) {
            printf("%d--------%.10s-------%s---------%d\n", participant[i].dossard, participant[i].nom, participant[i].code, participant[i].rang);
        }


}
void option_4 (struct Inscription participant[], int nco, int option_4_premier) {
    int i, str[10];
    char code_verifier[10][3] = {"CH","FR","IT","GE","JP","NO","RU","US"};
    int code_valider=0;

    if (nco == 10) {
        printf("\n");
        printf("Impossible de rajouter. Le total de maximum doit etre 10. Refaites s'il vous plait");
        return;
    }

    if (option_4_premier == 1) {
        printf("  Code   Nationalite    \n");
    printf("  CH      Suisse     \n");
    printf("  FR    Francais(e)  \n");
    printf("  IT    Italien(ne)  \n");
    printf("  GE    Allemand(e)  \n");
    printf("  JP    Japonais(e)  \n");
    printf("  NO    Norvegien(ne)\n");
    printf("  RU      Russe      \n");
    printf("  US    Americain(e) \n");
    printf("---------------------\n");
    }


    printf("Code : ");
    fflush(stdin);
    gets(participant[nco].code);
    printf("Nationalite : ");
    fflush(stdin);
    gets(participant[nco].nationalite);

    for (i=0;i<8;i++) {
        str[i] = strcmp(participant[nco].code, code_verifier[i]);
            if (str[i]==0) {
                code_valider = 1;
            }
    }

printf("  Code   Nationalite    \n");
printf("  CH      Suisse     \n");
printf("  FR    Francais(e)  \n");
printf("  IT    Italien(ne)  \n");
printf("  GE    Allemand(e)  \n");
printf("  JP    Japonais(e)  \n");
printf("  NO    Norvegien(ne)\n");
printf("  RU      Russe      \n");
printf("  US    Americain(e) \n");
printf("---------------------\n");

if (nco == 8 && code_valider != 1) {
    printf("\n");
    printf("  %s    %s - Code Rajoute !\n", participant[nco].code, participant[nco].nationalite);
    }

if (nco == 9 && code_valider != 1 && strcmp(participant[8].code,participant[9].code) !=0) {
    printf("\n");
    printf("  %s    %s - Code Rajoute !\n", participant[nco-1].code, participant[nco-1].nationalite);
    printf("  %s    %s - Code Rajoute !\n", participant[nco].code, participant[nco].nationalite);
    }



    while(code_valider == 1 || strcmp(participant[8].code,participant[9].code) == 0) {

        if (nco == 9) {
            printf("  %s    %s - Code Rajoute !\n", participant[8].code, participant[8].nationalite);
        }

        printf("Ce code existe deja ! Recommencer\n");
        printf("Code : ");
        fflush(stdin);
        gets(participant[nco].code);
        printf("Nationalite : ");
        fflush(stdin);
        gets(participant[nco].nationalite);

        for (i=0;i<8;i++) {
            str[i] = strcmp(participant[nco].code, code_verifier[i]);
            if (str[i] == 0)
            {
             code_valider = 1;
            }
        }
            if (nco==8 && str[0]!=0&&str[1]!=0&&str[2]!=0&&str[3]!=0&&str[4]!=0&&str[5]!=0&&str[6]!=0&&str[7]!=0) {
             code_valider = 2;
             }
            if (nco==9 && str[0]!=0&&str[1]!=0&&str[2]!=0&&str[3]!=0&&str[4]!=0&&str[5]!=0&&str[6]!=0&&str[7]!=0&&strcmp(participant[nco-1].code, participant[nco].code)!=0) {
             code_valider = 2;
            }
    }

    if (nco == 8 && code_valider == 2) {
    printf("  Code   Nationalite    \n");
    printf("  CH      Suisse     \n");
    printf("  FR    Francais(e)  \n");
    printf("  IT    Italien(ne)  \n");
    printf("  GE    Allemand(e)  \n");
    printf("  JP    Japonais(e)  \n");
    printf("  NO    Norvegien(ne)\n");
    printf("  RU      Russe      \n");
    printf("  US    Americain(e) \n");
    printf("  %s    %s - Code Rajoute !\n", participant[nco].code, participant[nco].nationalite);
    }

    if (nco == 9 && code_valider == 2) {
    printf("  Code   Nationalite    \n");
    printf("  CH      Suisse     \n");
    printf("  FR    Francais(e)  \n");
    printf("  IT    Italien(ne)  \n");
    printf("  GE    Allemand(e)  \n");
    printf("  JP    Japonais(e)  \n");
    printf("  NO    Norvegien(ne)\n");
    printf("  RU      Russe      \n");
    printf("  US    Americain(e) \n");
    printf("  %s    %s - Code Rajoute !\n", participant[nco-1].code, participant[nco-1].nationalite);
    printf("  %s    %s - Code Rajoute !\n", participant[nco].code, participant[nco].nationalite);
    }
}

void menu() {
    printf("\n\n\n");
    printf("--------------------------------------------\n");
    printf("| 1. Inscrire un participant               |\n");
    printf("| 2. Modifier une inscription              |\n");
    printf("| 3. Lister les inscrits                   |\n");
    printf("| 4. Ajouter une nouvelle nationalite      |\n");
    printf("| *. Debut de la competition               |\n");
    printf("--------------------------------------------\n");
}

int main()
{   int nbp=0, option_4_premier=1, nco=8;
    char a;

    struct Inscription participant[10];

    accueil();

    printf("\n\n\n");
    menu();
    printf("\n");
    printf("Selectionner le menu\n");
    fflush(stdin);
    scanf("%c",&a);

    while(a!='*') {
    switch (a) {

    case '1' :
        option_1(participant,nbp,nco);

        if(nbp<10) {
        nbp++;
        }
        break;

    case '2' :
        option_2(participant,nbp,nco);
        break;


    case '3' :
        option_3(participant,nbp);
        break;

    case '4' :

        printf("\n");
        option_4(participant,nco,option_4_premier);
        if (nco == 10) break;
        nco++;
        option_4_premier++;


    break;

    }

    printf("\n\n");
    menu();
    printf("\n");
    printf("Selectionner le menu\n");
    fflush(stdin);
    scanf("%c",&a);
}

    printf("---------------------\n");
    printf("La Competition !\n");

    printf("\n");
    return 0;
}

