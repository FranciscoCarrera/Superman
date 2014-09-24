#ifndef SUPERMAN_H
#define SUPERMAN_H

using namespace std;

class Superman
{
	private:
		int forcaMaxima;
		int resistenciaAtual;
		int visaoCalor;
	
	public:
		Superman();
		Superman(int , int , int );
		void lutar();
		void setVisaoCalor();
		void visaoCalor(int *);		
};

#endif // SUPERMAN_H
