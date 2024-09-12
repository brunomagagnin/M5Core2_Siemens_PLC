#include <iostream>

// Declaração da segunda classe (ClassB)
class ClassB {
public:
    void method1() {
        std::cout << "Method1: no arguments, void return" << std::endl;
    }

    int method2(int x) {
        std::cout << "Method2: argument int, returns int" << std::endl;
        return x * 2;
    }

    double method3(double x, double y) {
        std::cout << "Method3: two double arguments, returns double" << std::endl;
        return x + y;
    }
};

// Declaração da primeira classe (ClassA)
class ClassA {
private:
    // Ponteiro para método da ClassB
    void (ClassB::*methodPtr)();
    ClassB* classBInstance;

public:
    // Construtor que vincula um método da ClassB
    ClassA(ClassB* instance, void (ClassB::*method)()) : classBInstance(instance), methodPtr(method) {}

    // Função para executar o método vinculado
    void execute() {
        (classBInstance->*methodPtr)();
    }
};

int main() {
    ClassB objB;

    // Vinculando o method1 da ClassB ao objeto da ClassA
    ClassA objA(&objB, &ClassB::method1);

    // Executando o método vinculado
    objA.execute();  // Saída: Method1: no arguments, void return

    return 0;
}