//Write a program to create ATM simulation.
balance = 1000

print("Welcome to the ATM!")

while True:
    print("\nWhat would you like to do?")
    print("1. Check Balance")
    print("2. Deposit Money")
    print("3. Withdraw Money")
    print("4. Exit")

    choice = input("Enter your choice (1-4): ")

    if choice == "1":
        print(f"Your current balance is Rs. {balance}")

    elif choice == "2":
        amount = float(input("How much would you like to deposit? Rs. "))
        balance += amount
        print(f"Rs. {amount} has been added to your account.")

    elif choice == "3":
        amount = float(input("How much would you like to withdraw? Rs. "))
        
        if amount <= balance:
            balance -= amount
            print(f"Please collect your cash. Your new balance is Rs. {balance}")
        else:
            print("Sorry, you do not have enough balance.")

    elif choice == "4":
        print("Thank you for using our ATM. Have a great day!")
        break

    else:
        print("Invalid choice. Please enter a number between 1 and 4.")

