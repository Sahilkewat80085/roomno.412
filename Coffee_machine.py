MENU = {
    "espresso": {
        "ingredients": {
            "water": 50,
            "coffee": 18,
        },
        "cost": 150,
    },
    "latte": {
        "ingredients": {
            "water": 200,
            "milk": 150,
            "coffee": 24,
        },
        "cost": 250,
    },
    "cappuccino": {
        "ingredients": {
            "water": 250,
            "milk": 100,
            "coffee": 24,
        },
        "cost": 300,
    }
}
profit = 0
resources = {
    "water": 300,
    "milk": 200,
    "coffee": 100,
}


def is_resource_sufficient(order_ingredients):
    for item in order_ingredients:
       if order_ingredients[item] >= resources[item]:
            print(f"Sorry machine don't have sufficient {item}")
            return False
    return True

def process_cash():
    print("Please feed cash")
    total = (int(input("How many 10 Ru bills: ")) * 10 + int(input("How many 20 Ru bills: ")) * 20 +
             int(input("How many 50 RU bills: ")) * 50 + int(input("How many 100 Ru bills: ")) * 100)
    return total

def is_transaction_successful(money_received , drink_cost):
    if money_received >= drink_cost:
        change = money_received - drink_cost
        print(f"Here is your change {change}Ru")
        global profit
        profit += drink_cost
        return True
    else:
        print("Sorry that's not enough money, your money haas been refunded")
        return False

def make_coffee(drink_name , order_ingredients):
    for item in order_ingredients:
        resources[item] -= order_ingredients[item]
    print(f"Here is your {drink_name}. ENJOY")

is_on = True

while is_on:
    choice = input("What would you like? (espresso/latte/cappuccino): ")
    if choice == "off":
        is_on = False
    elif choice == "report":
       print(f"Water: {resources['water']}ml")
       print(f"Milk: {resources['milk']}ml")
       print(f"Coffee: {resources['coffee']}g")
       print(f"Money: {profit} rupees")
    else:
        drink = MENU[choice]
        if is_resource_sufficient(drink["ingredients"]):
            payment = process_cash()
            if is_transaction_successful(payment , drink["cost"]):
                make_coffee(choice, drink["ingredients"])
