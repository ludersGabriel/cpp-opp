#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define NAME_SIZE 50

struct pessoa {
  char nome[NAME_SIZE + 1];
  uint64_t cpf;
  uint8_t idade;
};

uint16_t GetCpfSum(uint64_t partialCpf, uint8_t digits) {
  uint16_t sum = 0;
  uint8_t digit = 0;
  uint8_t i = 0;

  uint8_t mult = 2;

  for (i = 0; i < digits; i++) {
    digit = partialCpf % 10;
    sum += digit * mult++;
    partialCpf /= 10;
  }

  return sum;
}

uint8_t GetVerficiationDigit(uint16_t sum) {
  uint8_t remainder = sum % 11;

  if (remainder < 2) {
    return 0;
  }

  return 11 - remainder;
}

int8_t validarCPF(uint64_t cpf) {
  // checking if we have 11 digits
  if (cpf < 10000000000 || cpf > 99999999999) {
    return 0;
  }

  // calculating the first verification digit
  uint64_t firstSeq = cpf / 100;
  uint16_t sum = GetCpfSum(firstSeq, 9);
  uint8_t firstVerificationDigit = GetVerficiationDigit(sum);

  // calculating the second verification digit
  uint16_t sum2 = GetCpfSum(firstSeq * 10 + firstVerificationDigit, 10);
  uint8_t secondVerificationDigit = GetVerficiationDigit(sum2);

  return (firstVerificationDigit == (cpf / 10) % 10) &&
         (secondVerificationDigit == cpf % 10);
}

int main() {
  struct pessoa p[3];

  uint8_t i = 0;
  while (i < 3) {
    printf("Digite o nome da pessoa %d (max %d char): ", i + 1, NAME_SIZE);
    fgets(p[i].nome, NAME_SIZE, stdin);

    char *pos = strchr(p[i].nome, '\n');
    if (pos) *pos = '\0';

    printf("Digite a idade da pessoa %d: ", i + 1);
    scanf("%" SCNd8, &p[i].idade);

    printf("Digite o CPF da pessoa %d: ", i + 1);
    scanf("%" SCNd64, &p[i].cpf);

    while (!validarCPF(p[i].cpf)) {
      printf("CPF invalido, digite novamente: ");
      scanf("%" SCNd64, &p[i].cpf);
    }
    getchar();
    printf("\n");
    i++;
  }

  printf("\nPessoas cadastradas:\n");
  for (i = 0; i < 3; i++) {
    printf("Nome: %s\n", p[i].nome);
    printf("Idade: %" PRIu8 "\n", p[i].idade);
    printf("CPF: %" PRIu64 "\n", p[i].cpf);
    printf("\n");
  }

  return 0;
}