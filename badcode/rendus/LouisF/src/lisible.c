#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
  if (argc < 3)
    fprintf(stdout, "Il faut donner un mot et une phrase en arguments sur la ligne de commande.\n");
  else {
    int taille = 0;
    while(argv[1][taille]!= '\0'){
      taille++;
    }
      
    char * mot_a_trouver = malloc(sizeof(char)*(taille+1));
    taille = 0;
    while(argv[1][taille]!='\0'){
      mot_a_trouver[taille] = argv[1][taille];
      taille++;
    }
    mot_a_trouver[taille]='\0';


    taille = 0;
    int nb_mots = 1;
    while(argv[2][taille]!='\0'){
      if((argv[2][taille] == ' ') || (argv[2][taille] == '\''))
	nb_mots++;
      taille++;
    }
    
	
    char ** phrase = malloc(sizeof(char*)*(nb_mots));

    taille = 0;
    nb_mots = 0;
    int nb_lettres = 0;

    while(argv[2][taille]!='\0'){
      if(argv[2][taille] == ' ' || argv[2][taille] =='\''){

	if(argv[2][taille] == '\'')
	  nb_lettres++;
	phrase[nb_mots] = malloc(sizeof(char)*(nb_lettres + 1));
	nb_mots++;
	nb_lettres = 0;
      }
      else
	nb_lettres++;
      taille++;
    }
    phrase[nb_mots] = malloc(sizeof(char)*(nb_lettres + 1));



    taille = 0;
    nb_mots = 0;
    nb_lettres = 0;
    while(argv[2][taille]!='\0'){
      if(argv[2][taille] == ' ' || argv[2][taille] =='\''){
	if (argv[2][taille] == '\''){
	  phrase[nb_mots][nb_lettres] = '\'';
	  nb_lettres++;
	}
	  
	phrase[nb_mots][nb_lettres] = '\0';
	nb_mots++;
	nb_lettres = 0;
      }
      else {
	phrase[nb_mots][nb_lettres] = argv[2][taille];
	nb_lettres++;
      }
      taille++;

    }
    phrase[nb_mots][nb_lettres] = '\0';

    	         
    char ** phrase_sans_ponctuation = malloc(sizeof(char*)*(nb_mots+1));
    for(int i = 0 ; i < nb_mots+1 ; i++){
      taille = 0;
      int j = 0;
	
      while(phrase[i][j] != '\0'){

	switch(phrase[i][j]){
	  case 'a' :
	    taille++;
	    break;
	  case 'b' :
	    taille++;
	    break;
	  case 'c' :
	    taille++;
	    break;
	  case 'd' :
	    taille++;
	    break;
	  case 'e' :
	    taille++;
	    break;
	  case 'f' :
	    taille++;
	    break;
	  case 'g' :
	    taille++;
	    break;
	  case 'h' :
	    taille++;
	    break;
	  case 'i' :
	    taille++;
	    break;
	  case 'j' :
	    taille++;
	    break;
	  case 'k' :
	    taille++;
	    break;
	  case 'l' :
	    taille++;
	    break;
	  case 'm' :
	    taille++;
	    break;
	  case 'n' :
	    taille++;
	    break;
	  case 'o' :
	    taille++;
	    break;
	  case 'p' :
	    taille++;
	    break;
	  case 'q' :
	    taille++;
	    break;
	  case 'r' :
	    taille++;
	    break;
	  case 's' :
	    taille++;
	    break;
	  case 't' :
	    taille++;
	    break;
	  case 'u' :
	    taille++;
	    break;
	  case 'v' :
	    taille++;
	    break;
	  case 'w' :
	    taille++;
	    break;	    
	  case 'x' :
	    taille++;
	    break;
	  case 'y' :
	    taille++;
	    break;
	  case 'z' :
	    taille++;
	    break;
	  case 'A' :
	    taille++;
	    break;
	  case 'B' :
	    taille++;
	    break;
	  case 'C' :
	    taille++;
	    break;
	  case 'D' :
	    taille++;
	    break;
	  case 'E' :
	    taille++;
	    break;
	  case 'F' :
	    taille++;
	    break;
	  case 'G' :
	    taille++;
	    break;
	  case 'H' :
	    taille++;
	    break;
	  case 'I' :
	    taille++;
	    break;
	  case 'J' :
	    taille++;
	    break;
	  case 'K' :
	    taille++;
	    break;
	  case 'L' :
	    taille++;
	    break;
	  case 'M' :
	    taille++;
	    break;
	  case 'N' :
	    taille++;
	    break;
	  case 'O' :
	    taille++;
	    break;
	  case 'P' :
	    taille++;
	    break;
	  case 'Q' :
	    taille++;
	    break;
	  case 'R' :
	    taille++;
	    break;
	  case 'S' :
	    taille++;
	    break;
	  case 'T' :
	    taille++;
	    break;
	  case 'U' :
	    taille++;
	    break;
	  case 'V' :
	    taille++;
	    break;
	  case 'W' :
	    taille++;
	    break;	    
	  case 'X' :
	    taille++;
	    break;
	  case 'Y' :
	    taille++;
	    break;
	  case 'Z' :
	    taille++;
	    break;
	  case '0' :
	    taille++;
	    break;
	  case '1' :
	    taille++;
	    break;
	  case '2' :
	    taille++;
	    break;
	  case '3' :
	    taille++;
	    break;
	  case '4' :
	    taille++;
	    break;
	  case '5' :
	    taille++;
	    break;
	  case '6' :
	    taille++;
	    break;
	  case '7' :
	    taille++;
	    break;
	  case '8' :
	    taille++;
	    break;
	  case '9' :
	    taille++;
	    break;
	  case '\'' :
	    taille++;
	    break;

	}
	j++;

      }

      phrase_sans_ponctuation[i] = malloc(sizeof(char) * (taille+1));
      j=0;
      taille = 0;
      while(phrase[i][j] != '\0'){


	switch(phrase[i][j]){
	  case 'a' :
	    phrase_sans_ponctuation[i][taille] = 'a';
	    taille++;
	    break;
	  case 'b' :
	    phrase_sans_ponctuation[i][taille]='b';
	    taille++;
	    break;
	  case 'c' :
	    phrase_sans_ponctuation[i][taille]='c';
	    taille++;
	    break;
	  case 'd' :
	    phrase_sans_ponctuation[i][taille]='d';
	    taille++;
	    break;
	  case 'e' :
	    phrase_sans_ponctuation[i][taille]='e';
	    taille++;
	    break;
	  case 'f' :
	    phrase_sans_ponctuation[i][taille]='f';
	    taille++;
	    break;
	  case 'g' :
	    phrase_sans_ponctuation[i][taille]='g';
	    taille++;
	    break;
	  case 'h' :
	    phrase_sans_ponctuation[i][taille]='h';
	    taille++;
	    break;
	  case 'i' :
	    phrase_sans_ponctuation[i][taille]='i';
	    taille++;
	    break;
	  case 'j' :
	    phrase_sans_ponctuation[i][taille]='j';
	    taille++;
	    break;
	  case 'k' :
	    phrase_sans_ponctuation[i][taille]='k';
	    taille++;
	    break;
	  case 'l' :
	    phrase_sans_ponctuation[i][taille]='l';
	    taille++;
	    break;
	  case 'm' :
	    phrase_sans_ponctuation[i][taille]='m';
	    taille++;
	    break;
	  case 'n' :
	    phrase_sans_ponctuation[i][taille]='n';
	    taille++;
	    break;
	  case 'o' :
	    phrase_sans_ponctuation[i][taille]='o';
	    taille++;
	    break;
	  case 'p' :
	    phrase_sans_ponctuation[i][taille]='p';
	    taille++;
	    break;
	  case 'q' :
	    phrase_sans_ponctuation[i][taille]='q';
	    taille++;
	    break;
	  case 'r' :
	    phrase_sans_ponctuation[i][taille]='r';
	    taille++;
	    break;
	  case 's' :
	    phrase_sans_ponctuation[i][taille]='s';
	    taille++;
	    break;
	  case 't' :
	    phrase_sans_ponctuation[i][taille]='t';
	    taille++;
	    break;
	  case 'u' :
	    phrase_sans_ponctuation[i][taille]='u';
	    taille++;
	    break;
	  case 'v' :
	    phrase_sans_ponctuation[i][taille]='v';
	    taille++;
	    break;
	  case 'w' :
	    phrase_sans_ponctuation[i][taille]='w';
	    taille++;
	    break;	    
	  case 'x' :
	    phrase_sans_ponctuation[i][taille]='x';
	    taille++;
	    break;
	  case 'y' :
	    phrase_sans_ponctuation[i][taille]='y';
	    taille++;
	    break;
	  case 'z' :
	    phrase_sans_ponctuation[i][taille]='z';
	    taille++;
	    break;
	  case 'A' :
	    phrase_sans_ponctuation[i][taille]='A';
	    taille++;
	    break;
	  case 'B' :
	    phrase_sans_ponctuation[i][taille]='B';
	    taille++;
	    break;
	  case 'C' :
	    phrase_sans_ponctuation[i][taille]='C';
	    taille++;
	    break;
	  case 'D' :
	    phrase_sans_ponctuation[i][taille]='D';
	    taille++;
	    break;
	  case 'E' :
	    phrase_sans_ponctuation[i][taille]='E';
	    taille++;
	    break;
	  case 'F' :
	    phrase_sans_ponctuation[i][taille]='F';
	    taille++;
	    break;
	  case 'G' :
	    phrase_sans_ponctuation[i][taille]='G';
	    taille++;
	    break;
	  case 'H' :
	    phrase_sans_ponctuation[i][taille]='H';
	    taille++;
	    break;
	  case 'I' :
	    phrase_sans_ponctuation[i][taille]='I';
	    taille++;
	    break;
	  case 'J' :
	    phrase_sans_ponctuation[i][taille]='J';
	    taille++;
	    break;
	  case 'K' :
	    phrase_sans_ponctuation[i][taille]='K';
	    taille++;
	    break;
	  case 'L' :
	    phrase_sans_ponctuation[i][taille]='L';
	    taille++;
	    break;
	  case 'M' :
	    phrase_sans_ponctuation[i][taille]='M';
	    taille++;
	    break;
	  case 'N' :
	    phrase_sans_ponctuation[i][taille]='N';
	    taille++;
	    break;
	  case 'O' :
	    phrase_sans_ponctuation[i][taille]='O';
	    taille++;
	    break;
	  case 'P' :
	    phrase_sans_ponctuation[i][taille]='P';
	    taille++;
	    break;
	  case 'Q' :
	    phrase_sans_ponctuation[i][taille]='Q';
	    taille++;
	    break;
	  case 'R' :
	    phrase_sans_ponctuation[i][taille]='R';
	    taille++;
	    break;
	  case 'S' :
	    phrase_sans_ponctuation[i][taille]='S';
	    taille++;
	    break;
	  case 'T' :
	    phrase_sans_ponctuation[i][taille]='T';
	    taille++;
	    break;
	  case 'U' :
	    phrase_sans_ponctuation[i][taille]='U';
	    taille++;
	    break;
	  case 'V' :
	    phrase_sans_ponctuation[i][taille]='V';	   
	    taille++;
	    break;
	  case 'W' :
	    phrase_sans_ponctuation[i][taille]='W';
	    taille++;
	    break;	    
	  case 'X' :
	    phrase_sans_ponctuation[i][taille]='X';
	    taille++;
	    break;
	  case 'Y' :
	    phrase_sans_ponctuation[i][taille]='Y';
	    taille++;
	    break;
	  case 'Z' :
	    phrase_sans_ponctuation[i][taille]='Z';
	    taille++;
	    break;
	  case '0' :
	    phrase_sans_ponctuation[i][taille]='0';
	    taille++;
	    break;
	  case '1' :
	    phrase_sans_ponctuation[i][taille]='1';
	    taille++;
	    break;
	  case '2' :
	    phrase_sans_ponctuation[i][taille]='2';
	    taille++;
	    break;
	  case '3' :
	    phrase_sans_ponctuation[i][taille]='3';
	    taille++;
	    break;
	  case '4' :
	    phrase_sans_ponctuation[i][taille]='4';
	    taille++;
	    break;
	  case '5' :
	    phrase_sans_ponctuation[i][taille]='5';
	    taille++;
	    break;
	  case '6' :
	    phrase_sans_ponctuation[i][taille]='6';
	    taille++;
	    break;
	  case '7' :
	    phrase_sans_ponctuation[i][taille]='7';
	    taille++;
	    break;
	  case '8' :
	    phrase_sans_ponctuation[i][taille]='8';
	    taille++;
	    break;
	  case '9' :
	    phrase_sans_ponctuation[i][taille]='9';
	    taille++;
	    break;
	  case '\'' :
	    phrase_sans_ponctuation[i][taille]='\'';    
	    taille++;
	    break;
	    
	}
	j++;
	phrase_sans_ponctuation[i][taille]='\0';

      }
      
    }


    int found = 0;
    int j = 0;
    while(j < nb_mots+1 && !found){
      int res = 0;
      int end = 0;
      int i = 0;

      while(!end){

	end = (mot_a_trouver[i] == '\0')
	  || (phrase_sans_ponctuation[j][i] == '\0')
	  || (mot_a_trouver[i] != phrase_sans_ponctuation[j][i]);
	
	if (mot_a_trouver[i] == phrase_sans_ponctuation[j][i])
	  res = 1;
	else
	  res = 0;
	i++;
      }
      j++;
      found = found || res;      
      
    }

    if(found)
      printf("VRAI.\n");
    else
      printf("FAUX.\n");
    
  }


  return 1;
}
