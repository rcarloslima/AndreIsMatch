#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <algorithm> 

using namespace std;

class Pessoa
{
	public:
		string nome;
		int idade;
		char sexo;
};

class Jogo
{
	public:
		
		bool isSexo(char sexo){
			if (sexo == 'm' || sexo == 'M' )
				return true;
			return false;	
		}  
		
		bool isIdade(int idade){
			if (idade % 2 == 0 ) 
				return true;
			return false;
		}
		
		bool isNome(string nome){
			if ( nome.length() % 2 == 0 )
				return true;
			return false;
		}
		
		bool isLuiz( string nome){
			string s = nome.substr(0,3);
			std::transform(s.begin(), s.end(), s.begin(), std::ptr_fun<int, int>(std::toupper));
			
			if ( s == "LUI" )
				return true;
			return false;

		}
		
		void Inicia()
		{
			system("cls");
			
			cout << "\r \t\t\			                             		" << endl ;	
			cout << "\r \t\t\   _______________          |*\\_/*|________	" << endl ;
			cout << "\r \t\t\  |  ___________  |        ||_/-\\_|______  |	" << endl ;
			cout << "\r \t\t\  | |           | |        | |           | |	" << endl ;
			cout << "\r \t\t\  | |   0   0   | |        | |   0   0   | |	" << endl ;
			cout << "\r \t\t\  | |     -     | |        | |     -     | |	" << endl ;
			cout << "\r \t\t\  | |   \\___/   | |        | |   \\___/   | |	" << endl ;
			cout << "\r \t\t\  | |___     ___| |        | |___________| |	" << endl ;
			cout << "\r \t\t\  |_____|\\_/|_____|        |_______________|	" << endl ;
			cout << "\r \t\t\    _|__|/ \\|_|_.............._|________|_		" << endl ;
			cout << "\r \t\t\   / ********** \\            / ********** \\	" << endl ;
			cout << "\r \t\t\ /  ************  \\        /  ************  \\	" << endl ;
			cout << "\r \t\t\--------------------      --------------------	" << endl ;
			
			
			cout << "\r \t\t\t\t  ANDRE IS MATCH (v 0.0.2)\n\n\n" << endl ;
			
			cout << "\r \t\ Digite os dados da pessoa para ao Andre is Match avaliar " << endl << endl ;   
		}
		
		void Carregando()
		{
				int i, j;
			
			   printf ("\n\nAnalisando: \n\n");          
		     
			   for (i = 0; i <= 100; i+=5)
			   {                   
			      printf ("  %d%%\r", i);
			      fflush (stdout);                      
			         
			      for (j = 0; j < i; j++)
			      {
			         if (!j) 
			           printf ("  ");
			           
			         printf ("%c", 219);
			         Sleep(3);
			      }                      
			   } 
			          
			   printf ("\n\nFinalizando...\n\n");
			   Sleep (2000);
			  
		}
			
		void isAndreMatch(Pessoa * p)
		{
			bool lControle = false;
			
			system("cls");
			
			cout << endl;	
			cout << "\r \t\t =======================================" << endl ;
			cout << "\r \t\t Andre is Match avaliando o candidato:  " << endl;
			cout << "\r \t\t =======================================" << endl ;
			cout << endl;		
			cout << "\r \t\t Nome  : " << p->nome   << endl ;
			cout << "\r \t\t Idade : " << p->idade  << endl ;
			cout << "\r \t\t Sexo  : " << p->sexo   << endl ;
			cout << endl;	
			cout << "\r \t\t =======================================" << endl ;
	   		
		    Carregando();
		    
		    if ( isLuiz(p->nome) ) {
				lControle = true;	
			} 
			else
			{
				int secret = rand() % 3 + 1;
				   		
		   		if ( secret == 1 ){
					lControle = isSexo( p->sexo);   
				} else if( secret == 2 )
				{
					lControle = isIdade(p->idade);  	
				} else{
					lControle = isNome(p->nome);  
				}
			}
		    
			if ( lControle ) {
			   printf ("\r \t\t\t\t  ME APAIXONEI\n\n\n"); 
      
				cout << "\r \t\t\     (   )  (   )  / _ \\(_  v  _)(   _)  (_ v _)/ _ \\(  | |  )	" << endl ;
				cout << "\r \t\t\      | |    | |__( (_) ) \\   /   | E_     \\ / ( (_) )| |_| |	" << endl ;
				cout << "\r \t\t\     (___)  (_____)\\___/   \\_/   (____)   (___) \\___/ (_____)	" << endl ;
			    
		   } else {
			   printf ("\r \t\t\t\t  ECO QUE NOJO\n\n\n");
							   
				cout << "\r \t\t                  #n    n#n  n#n  #n  n#n   n#    n		" << endl ;
				cout << "\r \t\t                  ####n######################## n#|		" << endl ;
				cout << "\r \t\t                  |###############################		" << endl ;
				cout << "\r \t\t                   ##############################|		" << endl ;
				cout << "\r \t\t                   ##############################		" << endl ;
				cout << "\r \t\t                  |#~~nnnnnn~~###~~nnnnn~~######|		" << endl ;
				cout << "\r \t\t                  ~n##########n~n#########n~####|		" << endl ;
				cout << "\r \t\t                  #############|############ ###		" << endl ;
				cout << "\r \t\t                 |####~#######|####~########||#~		" << endl ;
				cout << "\r \t\t       nnn        ###########~~|############ #n#~n		" << endl ;
				cout << "\r \t\t      |###|        ~#####~nnn##n~#########~n###n##|		" << endl ;
				cout << "\r \t\t      |####       nnnn~~~|#######nn~~~~~nn###n~##~		" << endl ;
				cout << "\r \t\t       |###      |#######n~~~~~nn#############|			" << endl ;
				cout << "\r \t\t       |##|     |#########################~ ###			" << endl ;
				cout << "\r \t\t   nn#nn###nn#n  ~~#################~~~~ n| ##|			" << endl ;
				cout << "\r \t\t  |##########~##    ~~~~~ nnnn nnnn ###~ ~ n##			" << endl ;
				cout << "\r \t\t |###########|n#        n ~~~~ ~~~~nnnn~~nn##			" << endl ;
				cout << "\r \t\t  ~###########|~       |##nn~~~~~~~~nnn####~			" << endl ;
				cout << "\r \t\t   ~~########|          ~~~###############|				" << endl ;
				cout << "\r \t\t     |#######                 nnnnnn######				" << endl ;
				cout << "\r \t\t     |#######|         nnnn###n~~~~~~~~~nn#####nnn		" << endl ;
				cout << "\r \t\t     |########      nn##############################n	" << endl ;
  
		   }
		   
		   	cout << endl;
			cout << endl;
			
		}	
};


int main()
{
	char lContinue = 'S';
	char nome[256];
	Pessoa p;
	Jogo * j = new Jogo();
	
	while ( lContinue == 'S' || lContinue == 's' ){

		j->Inicia();
		
		cout <<"Digite o nome da pessoa: " << endl;
	   	gets( nome);
	   	
	   	p.nome = nome;
	   	
	   	cout <<"Qual a idade? " << endl;
	    cin >> p.idade;
	    cin.ignore(80, '\n');
	    
     	cout <<"Qual o Sexo? ( M = Masculino | F = Feminino) " << endl;
	    cin >> p.sexo;
	   	cin.ignore(80, '\n');
		
	   	j->isAndreMatch(&p);
	   		
        Sleep (1000);
	   	 
	   	cout <<"Deseja avaliar outra pessoa? (S = Sim | N = Nao)" << endl;
	   	cin >> lContinue;
	   	cin.ignore(80, '\n');
 	 	 
	}
	
	return 0;
}
