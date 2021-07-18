#include <cstdio>

struct Registrador {
	virtual ~Registrador() = default;
	virtual void reg_transfer(long de, long para, double cantidad) = 0;
};

struct ConsolaRegistrador : Registrador {
	void reg_transfer(long de, long para, double cantidad) override {
		printf("[cons] %ld -> %ld: %f\n", de, para, cantidad);
	}
};

struct ArchivoRegistrador : Registrador {
	void reg_transfer(long de, long para, double cantidad) override {
		printf("[arch] %ld,%ld,%f\n", de, para, cantidad);
	}
};
struct ImpRegistrador : Registrador {
	void reg_transfer(long de, long para, double cantidad) override {
		printf("[imp] %ld,%ld,%f\n", de, para, cantidad);
	}
};


struct Enviar {
	void set_registrador(Registrador* nuevo_registrador) {
		registrador = nuevo_registrador;
	}
	void hacer_transfer(long de, long para, double cantidad) {
		if (registrador)
			registrador->reg_transfer(de, para, cantidad);
	}

private:
	Registrador* registrador{};
};

int main() {
	ConsolaRegistrador consola_registrador;
	ArchivoRegistrador archivo_registrador;
	ImpRegistrador imp_registrador;
	
	Enviar enviar;
	enviar.set_registrador(&consola_registrador);
	enviar.hacer_transfer(1000, 2000, 49.95);
	enviar.set_registrador(&archivo_registrador);
    enviar.hacer_transfer(2000, 4000, 20.00);
	enviar.set_registrador(&imp_registrador);
	enviar.hacer_transfer(4000, 2999, 34.54);
	
}








/*struct Enviar {
	Enviar(Registrador& registrador): registrador{ registrador } {}
	
	void hacer_transfer(long de, long para, double cantidad) {
		//
		registrador.reg_transfer(de, para, cantidad);
	}

private:
	Registrador& registrador;
};*/

/*int main() {
	ConsolaRegistrador registrador;
	Enviar enviar{ registrador };
	enviar.hacer_transfer(1000, 2000, 49.95);
	enviar.hacer_transfer(2000, 4000, 20.00);
}*/






















/*#include <cstdio>

struct Registrador {
	virtual ~Registrador() = default;
	virtual void reg_transfer(long de, long para, double cantidad) = 0;
};

struct ConsolaRegistrador : Registrador {
	void reg_transfer(long de, long para, double cantidad) override {
		printf("[cons] %ld -> %ld: %f\n", de, para, cantidad);
	}
};

struct ArchivoRegistrador : Registrador {
	void reg_transfer(long de, long para, double cantidad) override {
		printf("[arch] %ld,%ld,%f\n", de, para, cantidad);
	}
};

/*struct ImpresRegistrador : Registrador {
	void reg_transfer(long de, long para, double cantidad) override {
		printf("[imp] %ld,%ld,%f\n", de, para, cantidad);
	}
};*/

/*struct Enviar {
	void conf_Registrador(Registrador* nuevo_Registrador) {
		Registrador = nuevo_Registrador;
	}
	void hacer_transfer(long de, long para, double cantidad) {
		if (Registrador)
			Registrador->reg_transfer(de, para, cantidad);
	}

private:
	Registrador* Registrador{};
};

int main() {
	ConsolaRegistrador consola_Registrador;
	ArchivoRegistrador archivo_Registrador;
	/*ImpresRegistrador impres_Registrador;*/
	/*Enviar Enviar;
	Enviar.conf_Registrador(&consola_Registrador);
	Enviar.hacer_transfer(1000, 2000, 49.95);
	Enviar.conf_Registrador(&archivo_Registrador);
	Enviar.hacer_transfer(2000, 4000, 20.00);
	/*Enviar.conf_Registrador(&impres_Registrador);
	Enviar.hacer_transfer(2000, 4000, 20.00);
}*/



















/*#include <cstdio>

struct ClaseBase {
	virtual ~ClaseBase() = default;
	virtual const char* mensaje_final() const = 0;
};

struct ClaseDerivada : ClaseBase {
	ClaseDerivada() {
		printf("ClaseDerivada Construcparar() invocado.\n");
	}
	~ClaseDerivada() {
		printf("~ClaseDerivada() Destrucparar invocado.\n");
	}

	const char* mensaje_final() const override {
		return "Enviamos el mensaje desde la Clase Derivada.";
	}
};

int main() {
	printf("Construyendo ClaseDerivada x.\n");
	ClaseBase* x{ new ClaseDerivada{} };
	printf("Borrando x como una ClaseBase*.\n");
	delete x;
}*/


/*#include <cstdio>

struct ClaseBase {
	virtual const char* mensaje_final() const = 0;
	
};

struct ClaseDerivada : ClaseBase {
	ClaseDerivada() {
		printf("ClaseDerivada() invocada.\n");
	}
	~ClaseDerivada() {
		printf("~ClaseDerivada() invocada.\n");
	}

	const char* mensaje_final() const override {
		return "Enviamos el mensaje desde la Clase Derivada.";
	}
};

int main() {
	printf("Construyendo ClaseDerivada x.\n");
	ClaseBase* x{ new ClaseDerivada{} };
	printf("Borrando x como una ClaseBase*.\n");
	delete x;
}*/












/*#include <cstdio>

struct ClaseBase {
	virtual const char* mensaje_final() const = 0;
	/*{
		return "Enviamos el mensaje desde la Clase Base.";
	}*/
/*};

struct ClaseDerivada : ClaseBase {
	const char* mensaje_final() const override {
		return "Enviamos el mensaje desde la Clase Derivada.";
	}
};

int main() {
	//ClaseBase base; No se puede instanciar
	ClaseDerivada derivada;
	ClaseBase& ref = derivada;
	//printf("ClaseBase:    %s\n", base.mensaje_final()); No se pueden crear objeparas de la Clase Abstracta
	printf("ClaseDerivada: %s\n", derivada.mensaje_final());
	printf("ClaseBase&:   %s\n", ref.mensaje_final());
}*/



















/*#include <cstdio>

struct ClaseBase {
	virtual const char* mensaje_final() const {
		return "Enviamos el mensaje desde la Clase Base.";
	}
};

struct ClaseDerivada : ClaseBase {
	const char* mensaje_final() const override {
		return "Enviamos el mensaje desde la Clase Derivada.";
	}
};

int main() {
	ClaseBase base;
	ClaseDerivada derivada;
	ClaseBase& ref = derivada;
	printf("ClaseBase:    %s\n", base.mensaje_final());
	printf("ClaseDerivada: %s\n", derivada.mensaje_final());
	printf("ClaseBase&:   %s\n", ref.mensaje_final());
}*/


/*#include <cstdio>

struct ClaseBase {
	int la_respuesta() const { return 42; }
	const char* material = "oro";
private:
	const char* detective_scifi = "Alma Shine";
};

struct ClaseDerivada : ClaseBase {
	void agencia_detectives() {
		// Esta línea no compila:
		// printf("%s Agencia de detectives scifi\n", detective_scifi); {
	}
};

int main() {
	ClaseDerivada derivada;
	printf("La respuesta es %d\n", derivada.la_respuesta());
	printf("%s miembro\n", derivada.material);
}*/


/*#include <cstdio>

struct ClaseBase {
	virtual const char* mensaje_final() const {
		return "Enviamos el mensaje desde la Clase Base.";
	}
};

struct ClaseDerivada : ClaseBase {
	const char* mensaje_final() const override {
		return "Enviamos el mensaje desde la Clase Derivada.";
	}
};

int main() {
	ClaseBase base;
	ClaseDerivada derivada;
	ClaseBase& ref = derivada;
	printf("ClaseBase:    %s\n", base.mensaje_final());
	printf("ClaseDerivada: %s\n", derivada.mensaje_final());
	printf("ClaseBase&:   %s\n", ref.mensaje_final());
}*/










































/*struct ClaseBase {};
struct ClaseDerivada : ClaseBase {};
void sobre_eso (ClaseDerivada& derivada) {}

int main() {
  ClaseBase base;
  sobre_eso(base); // ¡No! ¡Error!
}*/













/*struct ClaseBase {};
struct ClaseDerivada : ClaseBase {};
void nos_pertenece (ClaseBase& base) {}
	int main() {
	ClaseDerivada derivada;
	nos_pertenece(derivada);
}*/














/*#include <cstdio>
struct Registrador {
	virtual ~Registrador() = default;
	virtual void reg_transfer(long de, long para, double cantidad) = 0;
};
struct ConsolaRegistrador : Registrador  {
	void reg_transfer(long de, long para, double cantidad) override  {
		printf("%ld -> %ld: %f\n", de, para, cantidad);
	}
};

int main() {
}*/










/*struct ClaseBase {};
struct ClaseDerivada : ClaseBase {};
void nos_pertenecen (ClaseBase& base) {}
	int main() {
	ClaseDerivada derivada;
	nos_pertenecen(derivada);
}*/

/*struct ClaseBase {};
struct ClaseDerivada : ClaseBase {};
void sobre_eso (ClaseDerivada& derivada) {}

int main() {
  ClaseBase base;
  sobre_eso(base); // No! Trouble!
}*/













/*#include <cstdio>

struct Registrador {
	virtual ~Registrador() = default;
	virtual void reg_transfer(long de, long para, double cantidad) = 0;
};

struct ConsolaRegistrador : Registrador {
	void reg_transfer(long de, long para, double cantidad) override {
		printf("[cons] %ld -> %ld: %f\n", de, para, cantidad);
	}
};

struct ArchivoRegistrador : Registrador {
	void reg_transfer(long de, long para, double cantidad) override {
		printf("[arch] %ld,%ld,%f\n", de, para, cantidad);
	}
};

struct ImpresRegistrador : Registrador {
	void reg_transfer(long de, long para, double cantidad) override {
		printf("[imp] %ld,%ld,%f\n", de, para, cantidad);
	}
};

struct Enviar {
	void conf_Registrador(Registrador* nuevo_Registrador) {
		Registrador = nuevo_Registrador;
	}
	void hacer_transfer(long de, long para, double cantidad) {
		if (Registrador)
			Registrador->reg_transfer(de, para, cantidad);
	}

private:
	Registrador* Registrador{};
};

int main() {
	ConsolaRegistrador consola_Registrador;
	ArchivoRegistrador archivo_Registrador;
	ImpresRegistrador impres_Registrador;
	Enviar Enviar;
	Enviar.conf_Registrador(&consola_Registrador);
	Enviar.hacer_transfer(1000, 2000, 49.95);
	Enviar.conf_Registrador(&archivo_Registrador);
	Enviar.hacer_transfer(2000, 4000, 20.00);
	Enviar.conf_Registrador(&impres_Registrador);
	Enviar.hacer_transfer(2000, 4000, 20.00);
}*/





































/*#include <cstdio>

struct ClaseBase {
	virtual const char* mensaje_final() const = 0;
};

struct ClaseDerivada : ClaseBase {
	const char* mensaje_final() const override {
		return "Pedimos disculpas por los inconvenientes.";
	}
};

int main() {
	// ClaseBase base; // Bang!
	ClaseDerivada derivada;
	ClaseBase& ref = derivada;
	printf("ClaseDerivada: %s\n", derivada.mensaje_final());
	printf("ClaseBase&:   %s\n", ref.mensaje_final());
}*/































// Programa CPP para mostrar
// el conceppara de Funciones Virtuales

/*#include <iostream>
using namespace std;

class base {
public:

	void virtual mostrar()
	{
		cout << "se muestra la clase base" << endl;
	}
};

class derivada : public base {
public:

	void mostrar() override
	{
		cout << "se muestra la clase derivada" << endl;
	}
};

int main()
{
	base* bptr;
	derivada d;
	bptr = &d;

	// Función no virtual, enlazada en tiempo de compilación
	bptr->mostrar();



}*/



/*#include <cstdio>
#include <stdexcept>

struct RegistrarArchivo {
	void registrar_transfer(long de, long para, double cantidad) {
		//
		printf("[arch] %ld,%ld,%.2lf\n", de, para, cantidad);
	}
};

struct RegistrarConsola {
	void registrar_transfer(long de, long para, double cantidad) {
		printf("[cons] %ld -> %ld: %.2lf\n", de, para, cantidad);
	}
};

enum class TipoRegistro { Consola, Archivo };

struct Enviar {
	Enviar()
		: tipo{ TipoRegistro::Consola } {}
	void conf_registro(TipoRegistro nuevo_tipo) {
		tipo = nuevo_tipo;
	}

	void hacer_transfer(long de, long para, double cantidad) {
		//
		switch (tipo) {
		case TipoRegistro::Consola: {
			registrarConsola.registrar_transfer(de, para, cantidad);
			break;
		}
		case TipoRegistro::Archivo: {
			registrarArchivo.registrar_transfer(de, para, cantidad);
			break;
		}
		default: {
			throw std::logic_error("Se encontró un tipo de registro desconocido.");
		}
		}
	}

private:
	TipoRegistro tipo;
	RegistrarConsola registrarConsola;
	RegistrarArchivo registrarArchivo;
};

int main() {
	Enviar enviar;
	enviar.hacer_transfer(1000, 2000, 49.95);
	enviar.hacer_transfer(2000, 4000, 20.00);
	enviar.conf_registro(TipoRegistro::Archivo);
	enviar.hacer_transfer(3000, 2000, 75.56);
}*/























/*#include <cstdio>

struct SistemaRegistro {
	void registrar_transfer(long de, long para, double cantidad) {
		printf("%ld -> %ld: %f\n", de, para, cantidad);
	}
};

struct Enviar {
	void hacer_transfer(long de, long para, double cantidad) {
		//
		registro.registrar_transfer(de, para, cantidad);
	}
	SistemaRegistro registro;
};

int main() {
	Enviar enviar;
	enviar.hacer_transfer(3000, 2200, 69.95);
	enviar.hacer_transfer(2000, 4400, 22.00);
}*/
















































