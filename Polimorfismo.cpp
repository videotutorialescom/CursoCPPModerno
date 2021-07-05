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

/*struct ImpresRegistrador : Registrador {
    void reg_transfer(long de, long para, double cantidad) override {
        printf("[imp] %ld,%ld,%f\n", de, para, cantidad);
    }
};*/

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
    /*ImpresRegistrador impres_Registrador;*/
    Enviar Enviar;
    Enviar.conf_Registrador(&consola_Registrador);
    Enviar.hacer_transfer(1000, 2000, 49.95);
    Enviar.conf_Registrador(&archivo_Registrador);
    Enviar.hacer_transfer(2000, 4000, 20.00);
    /*Enviar.conf_Registrador(&impres_Registrador);
    Enviar.hacer_transfer(2000, 4000, 20.00);*/
}





































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
















































