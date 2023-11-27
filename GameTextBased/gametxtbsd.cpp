#include <iostream>
using namespace std;

int main ()
{
    string nomeUsuario;
    int escolhaUm, escolhaDois, escolhaTres, escolhaQuatro, escolhaCinco;

    cout << "Olá, qual o seu nome? ";
    getline(cin, nomeUsuario);

    cout << nomeUsuario << ", seja bem-vindo(a) ao jogo 'Sonho Universitário'!" << endl;

    cout << "\n" << nomeUsuario << " é um(a) jovem universitario(a), festeiro(a), mas que sonha no futuro trabalhar e chefiar a empresa do seu pai de advocacia." << endl;
    cout << "Neste jogo, " << nomeUsuario << ", se encontra perdido(a) em um labirinto perigoso, necessitando escolher as vias corretas para escapar com vida, ou não...\n" << endl;
    cout << "Basicamente, serão dadas opções (respondendo-as de acordo com o seu respectivo número), e o(a) jogador(a) terá de optar pela correta, sendo que a errada resultará em fim de jogo, porém com o final tendo duas versões diferentes de acordo com a escolha feita." << endl;
    cout << "Tenha um bom jogo! ;)\n" << endl;

    cout << nomeUsuario << " acorda dentro de um labirinto sem saber como foi parar neste lugar, e agora somente com uma lanterna - mas inútil - se sente desesperado(a) e quer logo fugir.\n" << endl;

    cout << "São avistadas 3 (três) entradas, uma com fonte de luz ativa e piscando, outra se ouve um som de algum líquido fluindo, e na última nada se ouve, nada se vê, apenas uma sensação de vento.\n" << endl;
	cout << "O que fazer?\n" << endl;
	cout << "[1] - Seguir a fonte de luz?" << endl;
	cout << "[2] - Seguir o som?" << endl;
	cout << "[3] - Ir no suposto 'nada'?\n" << endl;

    retry:
    cout << "Insira a tua escolha: ";
    cin >> escolhaUm;

    if (escolhaUm == 1)
    {
        cout << "\n" << nomeUsuario << " olha um botão piscando, o aperta, as saidas são fechadas, e morre esmagado(a) por pontas afiadas de ferro!" << endl;
        cout << "-----GAME OVER-----\n" << endl;
    }
    else if (escolhaUm == 2)
    {
        cout << "\n" << nomeUsuario << " acaba caindo em um poço de ácido sulfúrico, e se debate até a morte..." << endl;
	    cout << "e antes dela chegar, de surpresa uma criança aparece para fechar o poço!" << endl;
	    cout << "-----GAME OVER-----\n" << endl;
    }
    else if (escolhaUm == 3)
	{
	cout << "\n" << nomeUsuario << " com o vento, mas fora isso, nada de perigo e segue tua fuga!\n" << endl;
	}
	else
	{
	cout << "\nEscolha/código inválido, tente novamente.\n" << endl;
	goto retry;
	}

    switch (escolhaUm)
    {
        case 3:
        {
            cout << nomeUsuario << " segue reto e se encontra com um velho estranho, oferecendo-lhe uma pistola para uso de defesa se necessário, mas duvida da suposta boa vontade deste homem.\n" << endl;
			cout << nomeUsuario << " decide aceitar ou não?\n" << endl;
            cout << "[1] - Sim" << endl;
	        cout << "[2] - Não\n" << endl;

            retry1:
            cout << "Insira a tua escolha: ";
            cin >> escolhaDois;

            if (escolhaDois == 1)
			{
			cout << "\n" << nomeUsuario << " aceita a pistola preocupado(a) e com medo, mas continua com a sua querida fuga!\n" << endl;
			}
			else if (escolhaDois == 2)
			{
			cout << "\n" << nomeUsuario << " tenta correr com medo, mas é morto(a) pelo homem desconhecido com a pistola oferecida!" << endl;
			cout << "-----GAME OVER-----\n" << endl;
            break;
			}
			else
			{
			cout << "\nEscolha/código inválido, tente novamente.\n" << endl;
			goto retry1;
			}
        }
    }

    switch (escolhaDois)
    {
        case 1:
        {
            cout << nomeUsuario << " segue normalmente até perceber vozes, não sabendo se são da mente, ou vozes reais, e logo em seguida uma sombra passa perto de onde está.\n" << endl;
			cout << "O que " << nomeUsuario << " deve fazer?\n" << endl;
			cout << "[1] - Gritar de medo?" << endl;
			cout << "[2] - Andar em direção a sombra?" << endl;
			cout << "[3] - Voltar pelo caminho contrário?\n" << endl;

			retry2:
				cout << "Insira tua escolha: ";
				cin >> escolhaTres;
            
			if (escolhaTres == 1)
			{
			cout << "\n" << nomeUsuario << " desesperado(a), grita, e a sombra neste instante, porem, nao contava com o veneno espalhado pode onde estava, e morre intoxicado(a)!" << endl;
			cout << "-----GAME OVER-----\n" << endl;
            break;
			}
			else if (escolhaTres == 2)
			{
			cout << "\n" << nomeUsuario << " vai em direção a sombra, de inicio não vê nada, se tranquiliza e segue!\n" << endl;
			}
			else if (escolhaTres == 3)
			{
				cout << "\n" << nomeUsuario << " volta, mas chega nele(a) o mesmo velho que havia visto antes e é morto(a)!" << endl;
				cout << "-----GAME OVER-----\n" << endl;
				break;
			}
			else
			{
			cout << "\nEscolha/código inválido, tente novamente.\n" << endl;
			goto retry2;
			}
        }
    }

    switch (escolhaTres)
    {
        case 2:
        {
            cout << nomeUsuario << " seguindo onde estava a sombra, do nada avista uma criança, de pijama floral, e com copo de leite na mão, então, oferecendo-lhe esta bebida, e prometendo algo especial.\n" << endl;
			cout << nomeUsuario << " pensa e escolhe?\n" << endl;
			cout << "[1] - Aceita de imediato?" << endl;
			cout << "[2] - Pergunta se pode experimentar?" << endl;
			cout << "[3] - Recusa?\n" << endl;

			retry3:
				cout << "Insira tua escolha: ";
				cin >> escolhaQuatro;

			if (escolhaQuatro == 1)
			{
			cout << "\n" << nomeUsuario << " aceita, bebe, logo cai num 'sono' pesado e apaga!" << endl;
			cout << "A criança ao ver a cena ri intensamente: 'HAHAHAHAHAHAHAHA'!" << endl;
			cout << "-----GAME OVER-----\n" << endl;
			break;
			}
			else if (escolhaQuatro == 2)
			{
			cout << "\nEla nao aceita a ideia e pergunta novamente!\n" << endl;
			goto retry3;
			}
			else if (escolhaQuatro == 3)
			{
			cout << "\n" << nomeUsuario << " não aceita, logo sai da conversa com a criança e, assustado(a), corre!\n" << endl;
			}
			else
			{
			cout << "\nEscolha/código inválido, tente novamente.\n" << endl;
			goto retry3;
			}
        }
    }

    switch (escolhaQuatro)
    {
        case 3:
        {
            cout << nomeUsuario << " enfim parece chegar ao final do labirinto, porém neste mesmo momento..." << endl;
			cout << "de surpresa, em alto falante, se escuta uma voz estranha!" << endl;
			cout << "Voz Estranha: Olá " << nomeUsuario << ", foi bem no nosso labirinto! Parabéns, mas agora terá de decidir uma mera coisa..." << endl;
			cout << "Aparece então quem é a sombra que passava por perto antes de chegar ali, uma pessoa toda coberta de preto, mas a voz nao anuncia para a mesma nao saber quem estava.\n" << endl;
			cout << "E a voz volta a falar...\n" << endl;
			cout << "Voz Estranha: Vi que voce tem uma pistola na mao, e agora, faca sua escolha:\n" << endl;
			cout << "[1] - Atirar em si mesmo(a)?" << endl;
			cout << "[2] - Atirar na pessoa?\n" << endl;
			cout << "Voz Estranha: Ou uma das duas, ou ficaremos aqui nessa até você optar!\n" << endl;

			retry4:
				cout << "Insira tua escolha: ";
				cin >> escolhaCinco;

			if (escolhaCinco == 1)
			{
			cout << "\n" << nomeUsuario<< " rejeita, e imediatamente mira a arma atirando em si mesmo!" << endl;
			cout << "É retirado tudo que cobria a pessoa..." << endl;
			cout << "se descobre, que é a mãe de " << nomeUsuario << ", que, olhando o(a) filho(a) no chão comeca a chorar sem parar, além de tentar gritar de desespero!" << endl;
			cout << "E a voz se diverte com a cena: É O FRACASSO ALHEIO QUE QUERO VER!\n" << endl;
			}
			else if (escolhaCinco == 2)
			{
			cout << "\n" << nomeUsuario << " atira e mata a pessoa que estava vendada, e a voz se manifesta..." << endl;
			cout << "Voz Estranha: Meus parabéns pela sua coragem, pois noção não teve alguma, seu idiota!\n" << endl;
			}
			else
			{
			cout << "\nEscolha/código inválido, tente novamente.\n" << endl;
			goto retry4;
			}
        }
    }

    switch (escolhaCinco)
    {
        case 1:
        {
			cout << "Mas eis que após beber, " << nomeUsuario << " acorda em sua cama de casa, horas depois do evento!" << endl;
			cout << "Amigos comentaram que o(a) havia encontrado desmaiado no quarto da casa da festa..." << endl;
			cout << nomeUsuario << " diz somente lembrar de que, ao chegar no quarto tinha uma pessoa, e esta lhe deu um copo de bebida exotica..." << endl;
			cout << "sendo que todos os quartos estavam trancados até " << nomeUsuario << " obter a chave, e abrir um dos quartos." << endl;
			cout << "E então fica um clima de suspense, em que ninguém sabe quem foi a pessoa, e como estava la!" << endl;
			cout << "-----FIM-----\n" << endl;
			break;
        }
        
        case 2:
        {
            cout << "De repente tudo fica escuro, e o PESADELO se acaba...";
			cout << "porém se escuta vozes desesperadas, muita correria, mas nada se olha, ou sente..." << endl;
			cout << "o tempo se passa, e tudo que se ouve fica cada vez mais baixo, parecendo um distanciamento..." << endl;
			cout << "era simplesmente a chegada da morte para " << nomeUsuario << "!" << endl;
			cout << "Fora encontrado(a) sem vida em um quarto que estava trancado, em uma casa de festa, e ninguém sabe o motivo ou como foi, mas..." << endl;
			cout << "fica a pergunta: Quem seria a pessoa toda coberta?" << endl;
			cout << "E a razão disso?" << endl;
			cout << "-----FIM-----\n" << endl;
			break;
        }
    }
	return 0;
}