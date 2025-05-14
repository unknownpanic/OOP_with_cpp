#include <iostream>
#include <string>

using namespace std;

struct Account {
    string accountNumber;
    double balance;
};

class AccountManager {
private:
    Account accounts[2];
    int accountCount;

public:
    AccountManager() : accountCount(0) {
        accounts[accountCount++] = {"1", 1000.0};
        accounts[accountCount++] = {"2", 1500.0};
    }

    bool checkAccount(const string& accountNumber) {
        for (int i = 0; i < accountCount; ++i) {
            if (accounts[i].accountNumber == accountNumber) {
                return true;
            }
        }
        return false;
    }

    double getBalance(const string& accountNumber) {
        for (int i = 0; i < accountCount; ++i) {
            if (accounts[i].accountNumber == accountNumber) {
                return accounts[i].balance;
            }
        }
        return 0.0;
    }

    bool withdraw(const string& accountNumber, double amount) {
        for (int i = 0; i < accountCount; ++i) {
            if (accounts[i].accountNumber == accountNumber && accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                return true;
            }
        }
        return false;
    }

    void deposit(const string& accountNumber, double amount) {
        for (int i = 0; i < accountCount; ++i) {
            if (accounts[i].accountNumber == accountNumber) {
                accounts[i].balance += amount;
                return;
            }
        }
    }

    void displayAccounts() {
        for (int i = 0; i < accountCount; ++i) {
            cout << "Рахунок: " << accounts[i].accountNumber << ", Баланс: " << accounts[i].balance << endl;
        }
    }
};

class NotificationManager {
public:
    void sendNotification(const string& message) {
        cout << "Повідомлення: " << message << endl;
    }
};

class BankFacade {
private:
    AccountManager accountManager;
    NotificationManager notificationManager;

public:
    void transferMoney(const string& fromAccount, const string& toAccount, double amount) {
        cout << "========== Початок операції ==========" << endl;
        if (!accountManager.checkAccount(fromAccount)) {
            notificationManager.sendNotification("Рахунок відправника не знайдено.");
            return;
        }
        if (!accountManager.checkAccount(toAccount)) {
            notificationManager.sendNotification("Рахунок отримувача не знайдено.");
            return;
        }
        if (amount <= 0) {
            notificationManager.sendNotification("Сума повинна бути більшою за 0.");
            return;
        }

        if (accountManager.withdraw(fromAccount, amount)) {
            accountManager.deposit(toAccount, amount);
            notificationManager.sendNotification("Трансакція успішно виконана!");
        } else {
            notificationManager.sendNotification("Недостатньо коштів на рахунку відправника.");
        }
        cout << "========== Кінець операції ===========" << endl;
    }

    void displayAccounts() {
        accountManager.displayAccounts();
    }
};

int main() {
    BankFacade bank;
    string fromAccount, toAccount;
    double amount;

    while (true) {
        cout << "\nОберіть дію:\n";
        cout << "1. Переглянути рахунки\n";
        cout << "2. Зробити переказ\n";
        cout << "3. Вийти\n";
        cout << "Ваш вибір: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nДоступні рахунки:\n";
                bank.displayAccounts();
                break;
            case 2:
                cout << "\nВведіть номер рахунку відправника: ";
                cin >> fromAccount;
                cout << "Введіть номер рахунку отримувача: ";
                cin >> toAccount;
                cout << "Введіть суму переказу: ";
                cin >> amount;
                bank.transferMoney(fromAccount, toAccount, amount);
                break;
            case 3:
                cout << "Дякуємо за використання банківської системи!\n";
                return 0;
            default:
                cout << "Некоректний вибір. Спробуйте ще раз.\n";
        }
    }

    return 0;
}