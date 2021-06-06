#include <cstdio>

class Hucha {

private:
	int moneda;

public:	

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
	
	Hucha miHucha2{ 125 };	
	Hucha* miHucha_ptr = &miHucha2;
	miHucha_ptr->set_moneda(300);
	miHucha_ptr->add_moneda();
	printf("Monedas en Hucha: %d\n", miHucha_ptr->get_moneda());
	
	
	

	return 0;
}







































/*#include <cstdio>

class Hucha {

private:
	int moneda;

public:

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
	Hucha miHucha(600);
	Hucha* miHucha_ptr = &miHucha;
	miHucha_ptr->set_moneda(300);
	miHucha_ptr->add_moneda();
	printf("Dirección de Hucha: %p\n", miHucha_ptr);
	printf("Monedas en Hucha: %d\n", miHucha_ptr->get_moneda());
	return 0;
}*/

