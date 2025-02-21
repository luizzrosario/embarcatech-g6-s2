// defines. defino todos os valores baseado em watts e o seu "codigo".
#define WATTS 1
#define KILOWATTS 1000
#define CAVALOS_VAPOR 735.5

#define CODIGO_WATTS 1
#define CODIGO_KILOWATTS 2
#define CODIGO_CAVALOS_VAPOR 3

// funções. adiciono as principais funçoes.
void UnidadeDePotencia();
float conversor_unidade_potencia(int unidade_atual, int unidade_escolhida, float valor_atual);
int codigo_de_unidade_potencia_valido(int codigo);

float converter_watts_para_kilowatts(float valor_watts);
float converter_watts_para_cavalos_vapor(float valor_watts);
float converter_kilowatts_para_watts(float valor_kilowatts);
float converter_kilowatts_para_cavalos_vapor(float valor_kilowatts);
float converter_cavalos_vapor_para_watts(float valor_cavalos);
float converter_cavalos_vapor_para_kilowatts(float valor_cavalos);

// função principal. implementação da função "UnidadeDePotencia".
void UnidadeDePotencia() {
    int unidade_atual, unidade_escolhida, sair;
    float valor_atual, valor_convertido;

    do {
        printf("Digite o valor da potência a ser convertido: ");
        scanf("%f", &valor_atual);

        printf("Em qual unidade de potência esse valor está?\n[1] Watts\n[2] Kilowatts\n[3] Cavalos-vapor\nEscolha: ");
        scanf("%d", &unidade_atual);

        if (!codigo_de_unidade_potencia_valido(unidade_atual)) {
            printf("Valor inválido, reiniciando.\n");
            continue;
        }

        printf("Para qual unidade de potência deseja converter?\n[1] Watts\n[2] Kilowatts\n[3] Cavalos-vapor\nEscolha: ");
        scanf("%d", &unidade_escolhida);

        if (!codigo_de_unidade_potencia_valido(unidade_escolhida)) {
            printf("Valor inválido, reiniciando.\n");
            continue;
        }

        valor_convertido = conversor_unidade_potencia(unidade_atual, unidade_escolhida, valor_atual);
        printf("O valor convertido é: %.2f\n", valor_convertido);

        printf("Digite 1 para sair ou qualquer outro número para continuar: ");
        scanf("%d", &sair);
    } while (sair != 1);
}

// Validador. Verifica se a unidade de potência escolhida existe.
int codigo_de_unidade_potencia_valido(int codigo) {
    switch (codigo) {
        case CODIGO_WATTS:
        case CODIGO_KILOWATTS:
        case CODIGO_CAVALOS_VAPOR:
            return 1;
        default:
            return 0;
    }
}

// Implementador-1. Implementa a função de conversão conversor_unidade_potencia.
float conversor_unidade_potencia(int unidade_atual, int unidade_escolhida, float valor_atual) {
    if (unidade_atual == CODIGO_WATTS && unidade_escolhida == CODIGO_KILOWATTS) {
        return converter_watts_para_kilowatts(valor_atual);
    } else if (unidade_atual == CODIGO_WATTS && unidade_escolhida == CODIGO_CAVALOS_VAPOR) {
        return converter_watts_para_cavalos_vapor(valor_atual);
    } else if (unidade_atual == CODIGO_KILOWATTS && unidade_escolhida == CODIGO_WATTS) {
        return converter_kilowatts_para_watts(valor_atual);
    } else if (unidade_atual == CODIGO_KILOWATTS && unidade_escolhida == CODIGO_CAVALOS_VAPOR) {
        return converter_kilowatts_para_cavalos_vapor(valor_atual);
    } else if (unidade_atual == CODIGO_CAVALOS_VAPOR && unidade_escolhida == CODIGO_WATTS) {
        return converter_cavalos_vapor_para_watts(valor_atual);
    } else if (unidade_atual == CODIGO_CAVALOS_VAPOR && unidade_escolhida == CODIGO_KILOWATTS) {
        return converter_cavalos_vapor_para_kilowatts(valor_atual);
    } else {
        return valor_atual; // Caso a unidade inicial e final sejam iguais
    }
}

// Implementador-2. Implementa funções de conversão entre as unidades
float converter_watts_para_kilowatts(float valor_watts) {
    return valor_watts / KILOWATTS;
}

float converter_watts_para_cavalos_vapor(float valor_watts) {
    return valor_watts / CAVALOS_VAPOR;
}

float converter_kilowatts_para_watts(float valor_kilowatts) {
    return valor_kilowatts * KILOWATTS;
}

float converter_kilowatts_para_cavalos_vapor(float valor_kilowatts) {
    float valor_watts = converter_kilowatts_para_watts(valor_kilowatts);
    return converter_watts_para_cavalos_vapor(valor_watts);
}

float converter_cavalos_vapor_para_watts(float valor_cavalos) {
    return valor_cavalos * CAVALOS_VAPOR;
}

float converter_cavalos_vapor_para_kilowatts(float valor_cavalos) {
    float valor_watts = converter_cavalos_vapor_para_watts(valor_cavalos);
    return converter_watts_para_kilowatts(valor_watts);
}

