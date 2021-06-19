#include <cstdio>

struct PoderNuclear {
	static int poder_nuclear;
	static void aumentar_poder_nuclear(int isotopos_nucleares) {
		poder_nuclear = poder_nuclear + isotopos_nucleares;
		const auto calor_perdido = poder_nuclear * 20;
		if (calor_perdido > 10000) {
			printf("Advertencia: Sobrecalentamiento\n");
		}
		printf("Poder Nuclear: %d\n", poder_nuclear);
	}
};


int PoderNuclear::poder_nuclear = 200;

int main() {
	
	PoderNuclear::aumentar_poder_nuclear(100);
	PoderNuclear::aumentar_poder_nuclear(500);

	return 0;
}


/*#include <cstdio>

struct PoderNuclear {
	static int poder_nuclear;
	static void aumentar_poder_nuclear(int isotopos_nucleares) {
		poder_nuclear = poder_nuclear + isotopos_nucleares;
		const auto calor_perdido = poder_nuclear * 20;
		if (calor_perdido > 10000) {
			printf("Advertencia: Sobrecalentamiento\n");
		}
		printf("Poder Nuclear: %d\n", poder_nuclear);
	}
};

int PoderNuclear::poder_nuclear = 200;



int main() {
	PoderNuclear::aumentar_poder_nuclear(100);
	PoderNuclear::aumentar_poder_nuclear(500);


}*/



/*#include <cstdio>



void aumentar_poder_nuclear(int isotopos_nucleares) {
	static int poder_nuclear = 200;
	poder_nuclear = poder_nuclear + isotopos_nucleares;
	const auto calor_perdido = poder_nuclear * 20;
	printf("Poder Nuclear: %d\n", poder_nuclear);
	if (calor_perdido > 10000) {
		printf("Advertencia, Sobrecalentamiento\n");
	}
}

int main() {
	//printf("Poder Nuclear: %d\n", poder_nuclear);
	aumentar_poder_nuclear(100);
	aumentar_poder_nuclear(500);

	return 0;
}*/







/*void poder_nuclear(int isotopos_nucleares) {
	int calor_perdido = 0;
   //sigue
}*/













/*#include <cstdio>


 //La variable local tiene el mismo nombre que un miembro
class Test
{
private:
	int x;
public:
	void setX(int x)
	{
		 //El puntero'this' es usado para recuperar el objeto de x
		 //oculto por la variable local 'x'
		this->x = x;
	}


	void print() { printf("x = %d\n", x); }
};

int main()
{
	Test obj;
	int x = 20;
	obj.setX(30);
	obj.print();
	printf("x = %d\n", x);

	return 0;
}*/


/*#include <cstdio>

class Test
{
private:
	int x;
	int y;
public:
	//Constructor que toma dos parámetros int, en la definición usamos el puntero
	//this para tener una referencia al Objeto que llama.
	Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
	//Creamos dos referencias a métodos que reciben
	//un int que asigna a la dirección que apunta this
	Test& setX(int a) { x = a; return *this; }
	Test& setY(int b) { y = b; return *this; }
	void print() { printf("x = %d\n", x); printf("y = %d\n", y); }
};

int main()
{
	Test obj1(5, 5);
	obj1.print();

	// Llamadas a funciones encadenadas. Todas las llamadas modifican el mismo objeto
	// ya que el mismo objeto se devuelve por referencia
	obj1.setX(10).setY(20);

	obj1.print();
	return 0;
}*/















































/*#include <cstdio>

int main() {
	int original = 100;
	int& original_ref = original;
	printf("Original:  %d\n", original);
	printf("Referencia: %d\n", original_ref);

	int nuevo_valor = 200;
	original_ref = nuevo_valor;
	printf("Original:  %d\n", original);
	printf("Nuevo Valor: %d\n", nuevo_valor);
	printf("Reference: %d\n", original_ref);





};*/



/*int original = 100;
	int& original_ref = original;
	printf("Original:  %d\n", original);
	printf("Referencia: %d\n", original_ref);

	int nuevo_valor = 200;
	int& original_ref = nuevo_valor;
	printf("Original:  %d\n", original);
	printf("Nuevo Valor: %d\n", nuevo_valor);
	printf("Reference: %d\n", original_ref);
	nuevo_valor = 300;
	printf("Original:  %d\n", original);
	printf("Nuevo Valor: %d\n", nuevo_valor);
	printf("Reference: %d\n", original_ref);*/







	/*#include <cstdio>
	struct Elemento {
		Elemento* next{};

		void insert_after(Elemento* new_element) {

			new_element->next = next;
			next = new_element;
		}

		char prefix[2];
		short operating_number;

	};

	int main() {
		Elemento trooper1, trooper2, trooper3;
		trooper1.prefix[0] = 'T';
		trooper1.prefix[1] = 'K';
		trooper1.operating_number = 421;
		trooper1.insert_after(&trooper2);
		trooper2.prefix[0] = 'F';
		trooper2.prefix[1] = 'N';
		trooper2.operating_number = 2187;
		trooper2.insert_after(&trooper3);
		trooper3.prefix[0] = 'L';
		trooper3.prefix[1] = 'S';
		trooper3.operating_number = 005;

		for (Elemento* cursor = &trooper1; cursor; cursor = cursor->next) {
			printf("stormtrooper %c%c-%d\n",
				cursor->prefix[0],
				cursor->prefix[1],
				cursor->operating_number);

	}*/


	/*#include <cstdio>
	struct Elemento {
		Elemento* next{};
		void insert_after(Elemento* new_element) {

			new_element->next = next;
			next = new_element;
		}
		char prefix[2];
		short operating_number;
	};

	int main() {
		Elemento trooper1, trooper2, trooper3;
		trooper1.prefix[0] = 'T';
		trooper1.prefix[1] = 'K';
		trooper1.operating_number = 421;
		trooper1.insert_after(&trooper2);
		trooper2.prefix[0] = 'F';
		trooper2.prefix[1] = 'N';
		trooper2.operating_number = 2187;
		trooper2.insert_after(&trooper3);
		trooper3.prefix[0] = 'L';
		trooper3.prefix[1] = 'S';
		trooper3.operating_number = 005;

		for (Elemento* cursor = &trooper1; cursor; cursor = cursor->next) {
			printf("stormtrooper %c%c-%d\n",
				cursor->prefix[0],
				cursor->prefix[1],
				cursor->operating_number);
		}*/



		/*//Ejemplo de uso de Referencias
		int main()
		{
			int x = 10;
			// ref es una referencia a x.
			int& ref = x;
			// Valor de x se cambia a 20
			ref = 20;
			printf("El valor de x es: %d.\n", x);
			// Valor de x es ahora cambiado a 30
			x = 30;
			printf("El valor de ref es: %d.\n", ref);




		}*/


		/*#include <cstdio>


		int main()
		{
			int x = 10;

			// ref es una referencia a x.
			int& ref = x;

			// Valor de x se cambia a 20
			ref = 20;

			printf("El valor de x es: %d.\n", x);

			// Valor de x es ahora cambiado a 30
			x = 30;
			printf("El valor de ref es: %d.\n", ref);

			return 0;
		}*/




		/*#include <cstdio>
		struct Element {
			Element* next{};
				void insert_after(Element* new_element) {

					new_element->next = next;
					next = new_element;
			}
			char prefix[2];
				short operating_number;
		};

		int main() {
			Element trooper1, trooper2, trooper3;
			trooper1.prefix[0] = 'T';
			trooper1.prefix[1] = 'K';
			trooper1.operating_number = 421;
			trooper1.insert_after(&trooper2);
			trooper2.prefix[0] = 'F';
			trooper2.prefix[1] = 'N';
			trooper2.operating_number = 2187;
			trooper2.insert_after(&trooper3);
			trooper3.prefix[0] = 'L';
			trooper3.prefix[1] = 'S';
			trooper3.operating_number = 005;

				for (Element* cursor = &trooper1; cursor; cursor = cursor->next) {
					printf("stormtrooper %c%c-%d\n",
						cursor->prefix[0],
						cursor->prefix[1],
						cursor->operating_number);
				}
		}*/




		/*#include <cstdio>

		struct Hucha {
			Hucha(int moneda_in) {
				if (!set_moneda(moneda_in)) {
					moneda = 200;
				}
			}
			Hucha() {
				moneda = 200;
			}
			void add_moneda() {
				moneda++;
			}
			bool set_moneda(int nueva_moneda) {
				if (nueva_moneda < 200)
					return false;
				moneda = nueva_moneda;
				return true;
			}
			int get_moneda() {
				return moneda;
			}

		private:
			int moneda;
		};

		void add_moneda(Hucha& ref_hucha) {
			ref_hucha.set_moneda(ref_hucha.get_moneda() + 1); // No necesitamos operador deref
		}

		int main() {
			Hucha hucha;
			printf("Las monedas son %d.\n", hucha.get_moneda());
			hucha.add_moneda();
			add_moneda(hucha); // ¡Hucha es implícitamente pasado por referencia!
			printf("Las monedas son %d.\n", hucha.get_moneda());
		}*/



		/*#include <cstdio>

		void intercambiar(int& primero, int& segundo)
		{
			int temp = primero;
			primero = segundo;
			segundo = temp;
		}

		int main()
		{
			int a = 2, b = 3;
			intercambiar(a, b);
			printf("El valor de a es: %d.\n", a);
			printf("El valor de b es: %d.\n", b);


			return 0;
		}*/






		/*#include <cstdio>

		using namespace std;

		int main() {
			// declare simple variables
			int    i;
			double d;

			// declare reference variables
			int& r = i;
			double& s = d;

			i = 5;
			printf("El valor de i: %d.\n", i);
			printf("El valor de la referencia a i: %d.\n", r);


			d = 11.7;
			printf("El valor de d: %f.\n", d);
			printf("El valor de la referencia a d: %f.\n", s);

			return 0;
		}*/




























