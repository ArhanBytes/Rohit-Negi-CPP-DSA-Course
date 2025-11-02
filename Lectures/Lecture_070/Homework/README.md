
# Object Oriented Programming

### 3 Programming Challenges with Classes:

1. **Bank Customer Class:** [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_070/Homework/Q1.cpp)
**Challenge:** Design a `Customer` class for a bank system that manages customer information and basic operations.
**Attributes:**
- `name`: String containing the customer's full name.
- `accountNumber`: Unique integer identifying the customer's account.
- `accountBalance`: Double representing the current balance in the account.
- `isActive`: Boolean indicating whether the account is active.
**Methods:**
- `deposit(amount)`: Adds the specified amount to the account balance.
- `withdraw(amount)`: Deducts the specified amount from the account balance (check for sufficient funds).
- `transfer(amount, targetAccount)`: Transfers the specified amount to another customer's account (within the system).
- `printDetails()`: Prints the customer's name, account number, and current balance.

2. **Car Class:** [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_070/Homework/Q2.cpp)

**Challenge:** Create a `Car` class that simulates the behavior of a vehicle.

**Attributes:**
- `model`: String representing the car model name.
- `year`: Integer indicating the car's manufacturing year.
- `fuelLevel`: Double representing the remaining fuel quantity (percentage or liters).
- `speed`: Integer representing the current speed in kilometers per hour.
- `isRunning`: Boolean indicating whether the car is currently running.
**Methods:**
- ``startEngine()``: Sets isRunning to true and prints a starting message.
- ``stopEngine()``: Sets isRunning to false and prints a stopping message.
- ``accelerate(amount)``: Increases the car's speed by the specified amount (check engine state and fuel level).
- ``brake(amount)``: Decreases the car's speed by the specified amount (ensure speed doesn't become negative).
- ``refuel(amount)``: Increases the fuel level by the specified amount (check for tank capacity).
- ``printStatus()``: Displays the car's model, speed, fuel level, and running state.

3. **Laptop Class:** [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_070/Homework/Q3.cpp)

**Challenge:** Design a `Laptop` class that represents a portable computer system.

**Attributes:**
- `brand`: String representing the laptop brand and model.
- `screenSize`: Double indicating the screen size in inches.
- `processor`: String specifying the processor type and speed.
- `ram`: Integer representing the available RAM capacity in gigabytes.
- `storage`: Integer representing the storage capacity in gigabytes.
- `batteryLevel`: Double showing the remaining battery percentage.
- `isOn`: Boolean indicating whether the laptop is currently powered on.
**Methods:**
- `powerOn()`: Sets isOn to true and prints a startup message.
- `powerOff()`: Sets isOn to false and prints a shutdown message.
- `openApps(numApps)`: Simulates opening a specified number of applications, potentially impacting battery life.
- `closeApps(numApps)`: Simulates closing applications, restoring battery life.
- `charge(amount)`: Increases the battery level by the specified amount (check for maximum capacity).
- `printSpecs()`: Displays the laptop's brand, screen size, processor, RAM, storage, and battery level.