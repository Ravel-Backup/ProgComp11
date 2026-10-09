#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>

// aplicado em: projetos -> ProgComp11 propriedades -> C/C++ -> linha de comando -> Opções adicionais: 
// O casório entre utf-8 do Visual Studio e IBM 850 do Prompt de Comando do Windows ->
// /source-charset:utf-8 /execution-charset:.850

 
using namespace std;
// protótipos:

	// Exercícios:
void saudacao();
void imputar_merecimentoPorPerfil();
void vetorCaractere_eString();
void quantidade_deElementos();
void motrar_ultimoCaractere();

	// Atividades:
void digitar_aSenha();
void multiplicarVetor_comInteiro();
void esteveAquiEm();
void datasComemorativas();
void saudar_PeloNome();

//funções:

int main() {
	// Exercícios de fixação:
	// Exercício 01:
	saudacao();

	// Exercício 02:
	imputar_merecimentoPorPerfil();

	// Exercício 03:
	vetorCaractere_eString();

	// Exercício 04:
	quantidade_deElementos();

	// Exercício 05:
	motrar_ultimoCaractere();

	// Atividades de Aprendizagem: 
	// Atividade 01:
	digitar_aSenha();

	// Atividade 02:
	multiplicarVetor_comInteiro();

	// Atividade 03:
	esteveAquiEm();

	// Atividade 04:
	datasComemorativas();

	// Atividade 05:
	saudar_PeloNome();
}

	// Exercícios:
void saudacao() {
	const int tamanho = 20;
	int ultima_letraNome = 0, ultima_letraSobrenome = 0;

	char nome[tamanho] = {};
	char sobrenome[tamanho] = {};
	
	cout << "Primeiro nome? "; cin >> nome;
	cout << "\nSegundo nome? "; cin >> sobrenome;


	// Pega algum valor que esteja armazenado no buffer, esperado '\n' do enter;
	// De tal forma esse valor não atrapalha na execução do código a seguir com cin.getline().
	cin.get(); 

	cout << "\nBom dia, " << nome << " " << sobrenome << ". \n"
		<< "Seja bem vindo, " << nome[0] << sobrenome[0] << "! \n\n";
}

void imputar_merecimentoPorPerfil() {
	const int tamanho{ 80 };
	char nomeCompleto[tamanho] = {};
	char conceito = {};

	cout << "Qual é o nome? ";
	cin.getline(nomeCompleto, tamanho);

	cout << "\nQual conceito você merece? "; cin >> conceito;
	conceito++; 

	cout << "Bom dia, " << nomeCompleto << " o seu conceito é " << conceito << "\n\n";
	cin.get();
}

void vetorCaractere_eString() {

	char vetor_naoString[] = { 'n','a','o','e','s','t','r','i','n','g' };
	char vetor_String[] = { "string" };

	cout << "Não é string: " << vetor_naoString << "\n"
		<< "É string: " << vetor_String << "\n\n";

	// Como não é encontrado algum caractere terminador, o cout continua lendo até encontrar algum.
}

void quantidade_deElementos() {
	char nome[] = "C++ Primeer Plus";

	cout << "A quantidade de elementos da frase \'" << nome << "\' é: " << strlen(nome) << "\n" 
		<< "Seu tamanho é " << sizeof(nome) << " bytes.\n\n";
}

void motrar_ultimoCaractere() {
	const int tamanho = 80;
	char palavra[80] = {};
	cout << "Digite uma palavra: ";
	cin.getline(palavra, tamanho);

	// Precisa ser subritraido 1 por causa do caractere terminador:
	int ultima_letra = strlen(palavra) - 1;

	cout << "Em " << palavra << " a última letra é " << palavra[ultima_letra] << "\n\n";
}

	// Atividades:
void digitar_aSenha() {
	const int tamanho = 80;
	char senha[] = "Senha";
	char buffer[tamanho] = {};
	bool senhaCorreta = false;
	do {
		cout << "Digite a senha: "; cin >> buffer;

		if (strcmp(senha, buffer) != 0) {
			// Apagar todos os caracteres impressos.
			//cout << "\033[2J\033[H";
			cout << "Senha Incorreta \n\n";
		}
		else {
			//cout << "\033[2J\033[H";
			cout << "Senha correta \n\n";
			senhaCorreta = true;
		}
	} while (!senhaCorreta);
}

void multiplicarVetor_comInteiro() {
	char numeroChar[10] = {};
	int numeroInt = {};

	cout << "Entre com dois números: "; cin >> numeroChar >> numeroInt;
	cout << "A multiplicação entre eles é: " << atoi(numeroChar) * numeroInt << "\n\n";
}

void esteveAquiEm() {
	const int tamanho = 117;
	char nome[80];
	char data[20];
	char entre[17] = { " esteve aqui em " };
	char conjunto[tamanho] = {};

	cout << "Nome: "; cin.getline(nome, 80);
	cout << "\nData: "; cin.getline(data, 20);

	// strcat vem de str concatenate.
	strcat(conjunto, nome);
	strcat(conjunto, entre);
	strcat(conjunto, data);
	cout << conjunto << "\n\n";
}

void datasComemorativas() {
	const int tamanho = 240;
	char festa1[tamanho] = {}, festa2[tamanho] = {}, festa3[tamanho] = {};
	char final[] = { " são belas festas." };
	char conjunto[tamanho] = {};
	cout << "Quais são as suas datas comemorativas preferidas? "; 
	cin.getline(festa1, tamanho);
	cin.getline(festa2, tamanho);
	cin.getline(festa3, tamanho);
	strcat(conjunto, "O ");
	strcat(conjunto, festa1);
	strcat(conjunto, ", ");
	strcat(conjunto, festa2);
	strcat(conjunto, " e ");
	strcat(conjunto, festa3);
	strcat(conjunto, final);

	cout << conjunto << "\n";
	char conteudo[tamanho] = "O Natal também é uma das minhas preferidas!";
	
	// strcmp compara o conteúdo dos vetores, e retorna se verdadeiro.
	// O operador == compara apenas os endereços.
	if ((strcmp(festa1, "Natal") == 0) || (strcmp(festa1, "Natal") == 0) || (strcmp(festa1, "Natal") == 0)) {
		cout << conteudo << "\n\n";
	}
}

void saudar_PeloNome() {
	const int tamanho{ 80 };
	char nomeCompleto[tamanho] = {};
	cout << "Digite seu nome e sombrenome: ";
	cin.getline(nomeCompleto, tamanho);
	
	int indice_doSeparador = 0;
	char nome[tamanho] = {}, sobrenome[tamanho] = {};

	// Poderia usar nomeCompleto.begin() e nomeCompleto.end() para pegar o endereço do primeiro e último elemento do vetor. 
	indice_doSeparador = distance(nomeCompleto, find(nomeCompleto, nomeCompleto + strlen(nomeCompleto), ' ') + 1);
	strcpy(sobrenome, nomeCompleto + indice_doSeparador);
	strncpy(nome, nomeCompleto, indice_doSeparador - 1);
	cout << "Bom dia, senhor " << sobrenome << ". Ou deve te chamar de " << nome << "? \n\n";
}
