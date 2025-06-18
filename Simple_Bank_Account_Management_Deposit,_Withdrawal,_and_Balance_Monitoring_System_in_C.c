#define MAX_CUSTOMERS 200

// Basic structure to hold customer data
struct Customer {
    int accountNumber;
    char name[50];      
    float balance;
};

// Function to print accounts that are running low on funds
void showLowBalanceAccounts(struct Customer customers[], int count) {
    printf("Customers with balance under Rs. 1000:\n");
    for (int i = 0; i < count; i++) {
        // Just printing names and account numbers of customers who need to top-up
        if (customers[i].balance < 1000.0f) {
            printf("-> Acc No: %d | Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

//Function which  Handles both deposits and withdrawals based on type
void handleTransaction(struct Customer list[], int numCustomers, int accToFind, float amt, int isDeposit) {
    int found = 0;  // To check if we found the account or not m
    for (int i = 0; i < numCustomers; ++i) {
        // Matching account number
        if (list[i].accountNumber == accToFind) {
            found = 1;
            if (isDeposit) {
                // Simple deposit, not checking for limit
                list[i].balance += amt;
                printf("Deposited Rs. %.2f to account %d. Updated balance: %.2f\n",amt,accToFind,list[i].balance);
            } else {
                // Withdrawal,ensure we don't go below 1000
                float newBalance = list[i].balance - amt;

                if (newBalance < 1000.0f) {
                    // Not allowed to go under minimum balance
                    printf("Withdrawal failed. Balance can't go below Rs. 1000. Current balance:%.2f\n",list[i].balance);
                } else {
                    list[i].balance = newBalance;
                    printf("Withdrew Rs. %.2f from account %d. New balance: %.2f\n", amt, accToFind,list[i].balance);
                }
            }

            break; 
        }
    }

    // If no matching account was found
    if (!found) {
        printf(" Couldn't find account number: %d\n", accToFind);
    }
}