#include<stdio.h>
int nb,m,n,s,p,q,mod,i,fact;
int main()
{
	
	char rep;
	printf("1.addition\n");
	printf("2.soustraction\n");
	printf("3.division\n");
	printf("4.multiplication\n");
	printf("5.modulo\n");
	printf("6.factoriel\n");
	printf("7.puissance\n");
	printf("8.quitter le progamme\n");
	printf("choisis l'operation de ton choix : \n");
	scanf("%d",&nb);
	switch (nb)
		{
		    case 1:
				printf ("vous avez choisir l'addition \n");
					printf("entrer un nombre n : ");
	scanf("%d",&n);
	printf("entrer un nombre m :");
	scanf("%d",&m);
	s=n+m;
	printf("votre somme est de : %d",s);
	break;
	case 2:
				printf ("vous avez choisir la soustraction\n");
					printf("entrer un nombre n : ");
	scanf("%d",&n);
	printf("entrer un nombre m :");
	scanf("%d",&m);
	s=n-m;
	printf("votre soustraction est  : %d",s);
	break;
	case 3:
		printf ("vous avez choisir la division\n");
			printf("entrer un nombre n : ");
	scanf("%d",&n);
		do{
			
	printf("entrer un nombre m :");
	scanf("%d",&m);

		}
		while (m==0);
			s=n/m;
				printf("votre quotient est : %d\n",s);
		
		break;
		
	case 4:
				printf ("vous avez choisir la multiplication\n");
					printf("entrer un nombre n : ");
	scanf("%d",&n);
	printf("entrer un nombre m :");
	scanf("%d",&m);
	p=n*m;
	printf("votre produit est de : %d",p);
		break;
	case 5:
				printf ("vous avez choisir le caclcul du modulo \n");
					printf("entrer un nombre n : ");
	scanf("%d",&n);
	printf("entrer un nombre m :");
	scanf("%d",&m);
	mod = n%m ;
	printf("votre modulo est de : %d",mod);
	break;
	case 6:
					printf ("vous avez choisir le factoriel\n");
						printf("entrer un nombre n : ");
		scanf("%d",&n);
			s = 1;
			while (n!=0){
				s = s * n;
				n--;
			}
			printf("le factoriel est : %d",s);
		break;
	
	case 7:
		printf ("vous avez choisi la puissance\n");
		printf("Entrez la valeur de n : ");
		scanf("%d",&n);
		printf("Entrez la valeur de la puissance de n : ");
		scanf("%d",&m);
		i = 0;
		s = 1;
		while(i!=m){
			s = s*n;
			i++;
		}
		printf("%d a la puissance %d est : %d",n,m,s);
		break;
		
	case 8:
		printf("Merci d'avoir utiliser notre programme");
		break;
	default:
		printf("-----------Aucune entree fin du programme--------------");
		break;
		
		
		

		
	


}
}
