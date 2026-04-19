# Topic: Python - Dictionaries and Loops
# Description: A bus seat reservation system using a dictionary.
#              Demonstrates dictionary creation, iteration, filtering,
#              and menu-driven interaction with a while loop.

bus = {}

for i in range(45):
    bus[i + 1] = "empty"

menu = """
1- Reserve a seat
2- Cancel a reservation
3- Show empty seats
4- Show occupied seats
5- Exit
"""

while True:
    print(menu)
    choice = input("Your choice: ")

    if choice == "1":  # reserve a seat
        for seat, status in bus.items():
            print(f"{seat} - {status}")
        seat_no = int(input("Which seat would you like: "))
        full_name = input("Enter your full name: ")
        bus[seat_no] = full_name

    elif choice == "2":  # cancel reservation
        seat_no = int(input("Enter seat number to cancel: "))
        bus[seat_no] = "empty"

    elif choice == "3":  # show empty seats
        for seat, status in bus.items():
            if status == "empty":
                print(f"{seat} - {status}")

    elif choice == "4":  # show occupied seats
        for seat, status in bus.items():
            if status != "empty":
                print(f"{seat} - {status}")

    elif choice == "5":
        break
