#include <iostream>
using namespace std;

int main ()
{

    string nomeUsuario;
    int escolha;
    char simOuNao;
    double n1, n2;

    cout << "Olá, qual o seu nome? ";
    getline (cin, nomeUsuario);
    cout << "\nSeja bem-vindo(a), " << nomeUsuario << "!\n";

    retry:
    cout << "\n" << nomeUsuario << ", escolha uma das quatro operações matemáticas básicas que queira fazer:\n\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n\n";

    cout << "Insira a sua escolha: ";
    cin >> escolha;

    switch (escolha)
    {
        case 1: 
        {
            cout << "\n" << nomeUsuario << ", insira o primeiro número: ";
            cin >> n1;
            cout << nomeUsuario << ", insira o segundo número: ";
            cin >> n2;

            double soma = n1 + n2;

            cout << "\n" << nomeUsuario << ", o resultado da soma entre os números colocados é de " << soma << ".\n\n";

            retryu:
            cout << nomeUsuario << ", quer fazer outra conta?\n\n- s para sim\n- n para não\n\n";

            cout << "Insira a sua escolha: ";
            cin >> simOuNao;

            if (simOuNao == 's')
            {
                goto retry;
            }
            else if (simOuNao == 'n')
            {
                cout << "\nAgradecemos por usar a calculadora. Até uma próxima, " << nomeUsuario << "!\n\n";
                break;
            }
            else
            {
                cout << "\n" << nomeUsuario << ", essa opção é inválida. Tente de novo!\n\n";
                goto retryu;
            }     
        }

        case 2:
        {
            cout << "\n" << nomeUsuario << ", insira o primeiro número: ";
            cin >> n1;
            cout << nomeUsuario << ", insira o segundo número: ";
            cin >> n2;

            double sub = n1 - n2;

            cout << "\n" << nomeUsuario << ", o resultado da subtração entre os números colocados é de " << sub << ".\n\n";

            retryd:
            cout << nomeUsuario << ", quer fazer outra conta?\n\n- s para sim\n- n para não\n\n";

            cout << "Insira a sua escolha: ";
            cin >> simOuNao;

            if (simOuNao == 's')
            {
                goto retry;
            }
            else if (simOuNao == 'n')
            {
                cout << "\nAgradecemos por usar a calculadora. Até uma próxima, " << nomeUsuario << "!\n\n";
                break;
            }
            else
            {
                cout << "\n" << nomeUsuario << ", essa opção é inválida. Tente de novo!\n\n";
                goto retryd;
            }
        }

        case 3:
        {
            cout << "\n" << nomeUsuario << ", insira o primeiro número: ";
            cin >> n1;
            cout << nomeUsuario << ", insira o segundo número: ";
            cin >> n2;

            double multi = n1 * n2;

            cout << "\n" << nomeUsuario << ", o resultado da multiplicação entre os números colocados é de " << multi << ".\n\n";

            retryt:
            cout << nomeUsuario << ", quer fazer outra conta?\n\n- s para sim\n- n para não\n\n";

            cout << "Insira a sua escolha: ";
            cin >> simOuNao;

            if (simOuNao == 's')
            {
                goto retry;
            }
            else if (simOuNao == 'n')
            {
                cout << "\nAgradecemos por usar a calculadora. Até uma próxima, " << nomeUsuario << "!\n\n";
                break;
            }
            else
            {
                cout << "\n" << nomeUsuario << ", essa opção é inválida. Tente de novo!\n\n";
                goto retryt;
            }
        }

        case 4:
        {
            cout << "\n" << nomeUsuario << ", insira o primeiro número: ";
            cin >> n1;
            cout << nomeUsuario << ", insira o segundo número: ";
            cin >> n2;

            double div = n1 / n2;

            cout << "\n" << nomeUsuario << ", o resultado da divisão entre os números colocados é de " << div << ".\n\n";

            retryq:
            cout << nomeUsuario << ", quer fazer outra conta?\n\n- s para sim\n- n para não\n\n";

            cout << "Insira a sua escolha: ";
            cin >> simOuNao;

            if (simOuNao == 's')
            {
                goto retry;
            }
            else if (simOuNao == 'n')
            {
                cout << "\nAgradecemos por usar a calculadora. Até uma próxima, " << nomeUsuario << "!\n\n";
                break;
            }
            else
            {
                cout << "\n" << nomeUsuario << ", essa opção é inválida. Tente de novo!\n\n";
                goto retryq;
            }
        }

        default:
        {
            cout << "\n" << nomeUsuario << ", essa opção é inválida! Tente de novo!\n";
            goto retry;
        }
    }

    system("pause");
    return 0;

}