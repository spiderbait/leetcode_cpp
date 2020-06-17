#include "BankAccount.h"
#include <string.h>

struct BankAccount {
    int number;
    char name[64];
    float balance;
};

BankAccount* initBankAccount() {
    BankAccount ba;
    ba = (BankAccount*) malloc(sizeof(BankAccount));
    return ba;
}

int getBalance(BankAccount* ba) {
    return ba->balance;
}

int depositMoney(BankAccount* ba, float amount) {
    ba->balance += amount;
    return 0;
}

int withdrawalMoney(BankAccount* ba, float amount) {
    float diff;
    diff = ba->balance - amount;
    if (diff >= 0)
    {
        ba->balance = diff;
        return 0;
    } else {
        return 1;
    }
}