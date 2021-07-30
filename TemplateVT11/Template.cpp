#include <iostream>
using namespace std;
#include <locale.h>

template <typename T>
class Calculadora
{
private:
	T num1, num2;

public:
	Calculadora(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}

	void mostrarResultados()
	{
		
		cout << "Los números son: " << num1 << " y " << num2 << "." << endl;
		cout << "La Suma es: " << sumar() << endl;
		cout << "La Resta es: " << restar() << endl;
		cout << "El Producto es: " << multiplicar() << endl;
		cout << "La División es : " << dividir() << endl;
	}

	T sumar() { return num1 + num2; }

	T restar() { return num1 - num2; }

	T multiplicar() { return num1 * num2; }

	T dividir() { return num1 / num2; }
};

int main()
{
	setlocale(LC_ALL, "spanish");
	Calculadora<int> intCalc(21, 14);
	Calculadora<float> floatCalc(12.4, 11.2);

	cout << "Int resultados:" << endl;
	intCalc.mostrarResultados();

	cout << endl << "Float resultados:" << endl;
	floatCalc.mostrarResultados();

	return 0;
}
































/*template <typename T>
class nombreClase
{
	... .. ...
public:
	T var;
	T algunaOperacion(T arg);
	... .. ...
};

int main()
{
	nombreClase<int>ObjetodelaClase;
	nombreClase<float>ObjetodelaClase;
	nombreClase<char>ObjetodelaClase;
}*/























/*#include <iostream>
#include <locale.h>
using namespace std;
template <typename T, typename U>
U Menor(T a, U b)
{
	return (a < b ? a : b);
}

int main()
{
	setlocale(LC_ALL, "spanish");
	int i = 3;
	double j = 2.4;
	double k;
	k = Menor(i, j);
	cout << "Devuelve el valor más bajo: " << k;
	return 0;
}*/



/*#include <iostream>
using namespace std;

template <typename T>
void Intercambio(T &n1, T &n2)
{
	T temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

int main()
{
	int i1 = 1, i2 = 2;
	float f1 = 1.1, f2 = 2.2;
	char c1 = 'a', c2 = 'b';

	cout << "Antes de pasar los datos a la template function.\n";
	cout << "i1 = " << i1 << "\ni2 = " << i2;
	cout << "\nf1 = " << f1 << "\nf2 = " << f2;
	cout << "\nc1 = " << c1 << "\nc2 = " << c2;

	Intercambio(i1, i2);
	Intercambio(f1, f2);
	Intercambio(c1, c2);

	cout << "\n\nDespues de pasar los datos a la template function.\n";
	cout << "i1 = " << i1 << "\ni2 = " << i2;
	cout << "\nf1 = " << f1 << "\nf2 = " << f2;
	cout << "\nc1 = " << c1 << "\nc2 = " << c2;

	return 0;
}*/













/*// Si se le pasan dos caracteres a la function template, el carácter con el mayor valor ASCII será mostrado.

#include <iostream>
using namespace std;


// template function
template <typename T>
T Mayor(T n1, T n2)
{
	return (n1 > n2) ? n1 : n2;
 }

int main()
{
	int i1, i2;
	float f1, f2;
	char c1, c2;

	cout << "Escribe dos enteros:\n";
	cin >> i1 >> i2;
	cout << Mayor(i1, i2) << " es Mayor. " << endl;

	cout << "\nEscribe dos decimales:\n";
	cin >> f1 >> f2;
	cout << Mayor(f1, f2) << " es Mayor." << endl;

	cout << "\nEscribe dos caracteres:\n";
	cin >> c1 >> c2;
	cout << Mayor(c1, c2) << " Tiene un mayor valor ASCII.";

	return 0;

}*/








/*#include <iostream>
using namespace std;

int mayor(int a, int b) {

	return (a > b) ? a : b;

	}




int main() {

	cout << mayor(7, 4) << endl;
	return 0;
}*/




/*template<typename X, typename Y, typename Z>
struct MiClaseTemplate {
	X pie(Y&);
private:
	Z* member;
};*/


/*template<typename X, typename Y, typename Z>
X mi_funcion_template(Y& arg1, const Z* arg2) {
	--snip--
}*/

/*template <typename T>
T unaFuncion(T arg)
{
	... .. ...
}*/





/*template <typename T>
class className
{
	... .. ...
public:
	T var;
	T someOperation(T arg);
	... .. ...
};*/

/*#include <iostream>
using namespace std;

template <typename T>
class Calculadora
{
private:
	T num1, num2;

public:
	Calculadora(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}

	void mostrarResultado()
	{
		cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
		cout << "Addition is: " << add() << endl;
		cout << "Subtraction is: " << subtract() << endl;
		cout << "Product is: " << multiply() << endl;
		cout << "Division is: " << divide() << endl;
	}

	T add() { return num1 + num2; }

	T subtract() { return num1 - num2; }

	T multiply() { return num1 * num2; }

	T divide() { return num1 / num2; }
};

int main()
{
	Calculadora<int> intCalc(2, 1);
	Calculadora<float> floatCalc(2.4, 1.2);

	cout << "Int results:" << endl;
	intCalc.mostrarResultado();

	cout << endl << "Float results:" << endl;
	floatCalc.mostrarResultado();

	return 0;
}*/

