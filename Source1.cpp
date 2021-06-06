/*#include <cstdio>

struct Hucha {

	int moneda;
	void add_moneda() {
		moneda++;
}

};

int main() {
	Hucha miHucha;
	miHucha.moneda = 223;
	printf("Monedas: %d\n", miHucha.moneda);
	miHucha.add_moneda();
	printf("Monedas: %d\n", miHucha.moneda);

}*/

/*class Hucha{

private:
	int moneda;

public:
	void add_moneda() {
		moneda++;
	}
	bool set_moneda(int nuevo_moneda) {

			if (nuevo_moneda < 200) return false;
				moneda = nuevo_moneda;
		return true;
	}
	int get_moneda() {

			return moneda;
	}

};

int main() {
	Hucha miHucha;
		if (!miHucha.set_moneda(425)) {
			// fallará; 135 < 200
				miHucha.set_moneda(200);
		}
	miHucha.add_moneda();
		printf("Monedas: % d", miHucha.get_moneda());
}



class MyClass {     // La clase
public:            // Acceso
	MyClass() {    // Constructor
		printf ("Hola Mundo");
	}
};

int main() {
	MyClass myObj;
	return 0;
}*/


/*#include <cstdio>

class Hucha {

private:
	int moneda;

public:
	Hucha() {
		moneda = 200;
	}
	void add_moneda() {
		moneda++;
	}
	bool set_moneda(int nuevo_moneda) {

		if (nuevo_moneda < 200) return false;
		moneda = nuevo_moneda;
		return true;
	}
	int get_moneda() {

		return moneda;
	}

};

int main() {
	Hucha miHucha;

	printf("Monedas Predeterminadas: % d", miHucha.get_moneda());
}*/



/*class Hucha {

private:
	int moneda;

public:
	Hucha() {
		moneda = 200;
	}

	Hucha(int moneda_in) {
		if (!set_moneda(moneda_in)) {

			moneda = 200;
		}

	}
	void add_moneda() {
		moneda++;
	}
	bool set_moneda(int nuevo_moneda) {

		if (nuevo_moneda < 200) return false;
		moneda = nuevo_moneda;
		return true;
	}
	int get_moneda() {

		return moneda;
	}

};

int main() {
	Hucha miHucha;
	Hucha miHucha2{ 125 };

	printf("Monedas: %d\n", miHucha.get_moneda());
	printf("Monedas: %d", miHucha2.get_moneda());
	return 0;
}*/

/*#include <cstdio>

class Hucha {

private:
	int moneda;

public:
	Hucha() {
		moneda = 21;
	}

	Hucha(int moneda_in) {
		if (!set_moneda(moneda_in)) {

			moneda = 200;
		}
	}


	void add_moneda() {
		moneda++;
	}
	bool set_moneda(int nuevo_moneda) {

		if (nuevo_moneda < 200) return false;
		moneda = nuevo_moneda;
		return true;
	}
	int get_moneda() {

		return moneda;
	}

};

int main() {
	Hucha miHucha;
	Hucha miHucha2{ 125 };

	printf("Monedas: %d\n", miHucha.get_moneda());
	printf("Monedas: %d", miHucha2.get_moneda());
	return 0;
}*/

/*#include <cstdio>

class Completa {
public:
	Completa() {

		printf("(sin argumentos)\n");
	}
	Completa(char x) {

		printf("char: %c\n", x);
	}
	Completa(int x) {

		printf("int: %d\n", x);
	}
	Completa(float x) {

		printf("float: %f\n", x);
	}

	~Completa(void) {
		printf("Objeto destruido\n");
	}
};

int main() {
	Completa c1;
	Completa c2{ 'd' };
	Completa c3{ 54321 };
	Completa c4{ 2.01e5f };
	Completa c5('h');
	Completa c6 = { '3' };
	Completa c7{};
	Completa c8();

}*/

/*int puntos{};
int* puntos_direcc{ &puntos };
printf("puntos: %d\n", puntos);
printf("&puntos: %p\n", puntos_direcc);
*puntos_direcc = 2323;
	printf("puntos: %d\n", puntos);
	printf("puntos: %d\n", *puntos_direcc);
	printf("puntos: %d\n", (*puntos_direcc * *puntos_direcc));
*/



/*#include <cstdio>
// Crear un Puntero desde cero
int main() {
	int puntos{};
	int* puntos_direcc{&puntos};
	printf("puntos: %d\n", puntos);
	printf("&puntos: %p\n", puntos_direcc);
	*puntos_direcc = 2323;
	printf("puntos: %d\n", puntos);
	printf("puntos: %d\n", *puntos_direcc);
	printf("puntos: %d\n", (*puntos_direcc * *puntos_direcc));

}*/