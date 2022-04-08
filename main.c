#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h> 
verifica(char* tabella, char* valore, char* nome1, char* nome2, char* secval) {
	if ((tabella[16] == valore[0] && tabella[20] == valore[0] && tabella[24] == valore[0])||(tabella[44] == valore[0] && tabella[48] == valore[0] && tabella[52] == valore[0])||(tabella[72] == valore[0] && tabella[76] == valore[0] && tabella[80] == valore[0])){
		printf("complimenti %s! Hai vinto!", nome1);
		return 1;
	}
	/*else if (tabella[44] == valore[0] && tabella[48] == valore[0] && tabella[52] == valore[0]) {
		printf("complimenti %s! Hai vinto!", nome1);
		return 1;
	}
	else if (tabella[72] == valore[0] && tabella[76] == valore[0] && tabella[80] == valore[0]) {
		printf("complimenti %s! Hai vinto!", nome1);
		return 1;
	}*/
	else if ((tabella[16] == valore[0] && tabella[44] == valore[0] && tabella[72] == valore[0]) || (tabella[20] == valore[0] && tabella[48] == valore[0] && tabella[76] == valore[0]) || (tabella[24] == valore[0] && tabella[52] == valore[0] && tabella[80] == valore[0])) {
		printf("complimenti %s! Hai vinto!\n\n\n\n", nome1);
		return 1;
	}
	else if ((tabella[16] == valore[0] && tabella[48] == valore[0] && tabella[80] == valore[0]) || (tabella[24] == valore[0] && tabella[48] == valore[0] && tabella[72] == valore[0])) {
		printf("complimenti %s! Hai vinto!\n\n\n\n", nome1);
		return 1;
	}
	else if ((tabella[16] == secval[0] && tabella[20] == secval[0] && tabella[24] == secval[0]) || (tabella[44] == secval[0] && tabella[48] == secval[0] && tabella[52] == secval[0]) || (tabella[72] == secval[0] && tabella[76] == secval[0] && tabella[80] == secval[0])) {
		printf("complimenti %s! Hai vinto!\n\n\n\n", nome2);
		return 1;
	}
	else if ((tabella[16] == secval[0] && tabella[44] == secval[0] && tabella[72] == secval[0]) || (tabella[20] == secval[0] && tabella[48] == secval[0] && tabella[76] == secval[0]) || (tabella[24] == secval[0] && tabella[52] == secval[0] && tabella[80] == secval[0])) {
		printf("complimenti %s! Hai vinto!\n\n\n\n", nome2);
		return 1;
	}
	else if ((tabella[16] == secval[0] && tabella[48] == secval[0] && tabella[80] == secval[0]) || (tabella[24] == secval[0] && tabella[48] == secval[0] && tabella[72] == secval[0])) {
		printf("complimenti %s! Hai vinto!\n\n\n\n", nome2);
		return 1;
	}
	return -1;
}


stampa_scacchiera(char* tab) {
	printf("%s", tab);
}

inserisci_valore(char* a, char* valore, int* vocc, int i, char *tabella) {
	int res;
	do {
		printf("Inserire il numero della casella in cui mettere \"%c\":\n", valore[0]);
	scan : scanf("%s", a);

		res = strtol(a, NULL, 10);
		if (res == 0) {
			printf("Casella non esistente, inserire una casella corretta: "); goto scan;
		}

		if (res != 11 && res != 12 && res != 13 && res != 21 && res != 22 && res != 23 && res != 31 && res != 32 && res != 33) {
			printf("Casella non corretta,\n");
		}
		else { continue; }
	} while (res != 11 && res != 12 && res != 13 && res != 21 && res != 22 && res != 23 && res != 31 && res != 32 && res != 33);
	switch (res) {
		case 11: if (vocc[0] == 0) {
		tabella[16] = valore[0];
		vocc[0] = 1;
		}
			   else { printf("la casella e' occupata, selezionarne un'altra\n"); goto scan; }
			break;
		case 12: if (vocc[1] == 0) {
			tabella[20] = valore[0];
			vocc[1] = 1;
		}
			   else { printf("la casella e' occupata, selezionarne un'altra\n"); goto scan; }
			break;
		case 13: if (vocc[2] == 0) {
			tabella[24] = valore[0];
			vocc[2] = 1;
		}
			   else { printf("la casella e' occupata, selezionarne un'altra\n"); goto scan; }
			break;
		case 21: if (vocc[3] == 0) {
			tabella[44] = valore[0];
			vocc[3] = 1;
		}
			   else { printf("la casella e' occupata, selezionarne un'altra\n"); goto scan; }
			break;
		case 22: if (vocc[4] == 0) {
			tabella[48] = valore[0];
			vocc[4] = 1;
		}
			   else { printf("la casella e' occupata, selezionarne un'altra\n"); goto scan; }
			break;
		case 23: if (vocc[5] == 0) {
			tabella[52] = valore[0];
			vocc[5] = 1;
		}
			   else { printf("la casella e' occupata, selezionarne un'altra\n"); goto scan; }
			break;
		case 31: if (vocc[6] == 0) {
			tabella[72] = valore[0];
			vocc[6] = 1;
		}
			   else { printf("la casella e' occupata, selezionarne un'altra\n"); goto scan; }
			break;
		case 32: if (vocc[7] == 0) {
			tabella[76] = valore[0];
			vocc[7] = 1;
		}
			   else { printf("la casella e' occupata, selezionarne un'altra\n"); goto scan; }
			break;
		case 33: if (vocc[8] == 0) {
			tabella[80] = valore[0];
			vocc[8] = 1;
		}
			   else { printf("la casella e' occupata, selezionarne un'altra\n"); goto scan; }
			break;


	}
	stampa_scacchiera(tabella);

}

int main(void) {					 //17						   //45
	char tabella[] = "   1   2   3\n 1   |   |   \n  -----------\n 2   |   |   \n  -----------\n 3   |   |   \n";
	char nome1[100];
	char nome2[100];
	char valore[2];
	char secval[2];
	int voccup[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0};
	stampa_scacchiera(tabella);
	printf("Inserire nome primo giocatore:\n");
	scanf("%s", nome1);
	printf("Inserire nome secondo giocatore:\n");
	scanf("%s", nome2);
	do{
		printf("%s scegli il segno, \"x\" oppure \"o\":\n", nome1);
		
		scanf("%s", valore);
		//char c = fgetc(stdout);

		if (valore[0] != 'x' && valore[0] != 'o') {
			printf("Segno non corretto,\n");
		}
		else {
			continue;
		}
	} while (valore[0] != 'x' && valore[0] != 'o');
	
	if (valore[0] == 'x') {
		secval[0] = 'o';
	}
	else if (valore[0] == 'o') {
		secval[0] = 'x';
	}
	
	char risultatoparziale[10];
	for (int i = 0; i < 7; ++i) {
		inserisci_valore(risultatoparziale, valore, voccup, i, tabella);
		int r = verifica(tabella, valore, nome1, nome2, secval);
		if (r == 1) {
			return 0;
		}
		if (voccup[0] == 1 && voccup[1] == 1 && voccup[2] == 1 && voccup[3] == 1 && voccup[4] == 1 && voccup[5] == 1 && voccup[6] == 1 && voccup[7] == 1 && voccup[8] == 1) {
			printf("Pareggio! Fate un'altra partita!\n\n\n\n");
			break;
		}
		inserisci_valore(risultatoparziale, secval, voccup, i, tabella);
		int g = verifica(tabella, valore, nome1, nome2, secval);
		if (g == 1) {
			return 0;;
		}
		if (voccup[0] == 1 && voccup[1] == 1 && voccup[2] == 1 && voccup[3] == 1 && voccup[4] == 1 && voccup[5] == 1 && voccup[6] == 1 && voccup[7] == 1 && voccup[8] == 1) {
			printf("Pareggio! Fate un'altra partita!\n\n\n\n");
			break;
		}
	}
	//printf("Pareggio! Fate un'altra partita!");
	return 0;
}