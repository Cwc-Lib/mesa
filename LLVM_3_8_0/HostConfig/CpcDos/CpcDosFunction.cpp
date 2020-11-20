#include "CpcDosFunction.h"

#include <stdio.h>

////Dummy Functions
#ifndef CpcDos


extern "C" {
    int 	cpc_Creer_Contexte				(int TAILLEX, int TAILLEYn){return 0;}
    void* 	cpc_Obtenir_Zone_Contexte		(int ID){return 0;}
    int 	cpc_Blitter						(int ID){return 0;}
    void 	cpc_CCP_Exec_Commande			(char* COMMANDE, int ID){}
    int 	cpc_CCP_Exec_Thread_cpc			(char* chemin, int Thread_Priorite){return 0;}
    char*	cpc_Exec_en_cours				(int ARG){printf("\nAAAAAAAAAAAAAsssss");

        return "Ass";}
    int		cpc_cpinti_Fichier_Existe		(char* chemin){return 0;}
    unsigned int	cpc_cpinti_Taille_Fichier		(char* chemin){return 0;}
    int 	cpc_cpinti_Lire_Fichier_complet	(char* Chemin, char* Mode, char *retour_str){return 0;}

}
#endif // CpcDos
