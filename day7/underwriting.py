#!/usr/bin/python3

def calculate_probability(marks, age, gender, race, f_o_i, community_service, fees):
    probability = 0

    # Get user input
    marks = float(input("Enter student's average marks: "))
    age = int(input("Enter student's age: "))
    gender = input("Enter student's gender (male/female): ").lower()
    race = input("Enter student's race: ").lower()
    field_of_interest = input("Enter student's field of interest: ").lower()
    community_service = input("Does the student do community service? (yes/no): ").lower() == "yes"
    fees = float(input("Enter student's fees: "))

    # Marks
    if marks < 50:
        probability = 0
    elif marks < 80:
        probability += 20
    else:
        probability += 30

    # Age
    if age > 35:
        probability += 0
    else:
        probability += 25

    # Gender
    if gender == "female":
        probability += 5
    else:
        probability += 0

    # Race
    if race == "black":
        probability += 20
    else:
        probability += 0

    # Field of interest
    if f_o_i == "science" or f_o_i == "technology" or f_o_i == "engineering" or f_o_i == "mathematics":
        probability += 10
    else:
        probability += 0

    # Community service
    if community_service:
        probability += 5
    else:
        probability += 0

    # Fees
    if fees > 40000:
        probability += 0
    else:
        probability += 5

    return min(probability, 100)

# Calculate probability
probability_of_funding = calculate_probability(marks, age, gender, race, f_o_i, community_service, fees)

# Display the result
print(f"The probability of the student getting funding is {probability_of_funding}%.")
