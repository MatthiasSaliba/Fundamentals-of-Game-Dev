#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

const int HABITAT_COUNT = 5; // Total number of habitats in the zoo

// Function to update the animal count in a specific habitat
void updateHabitat(int* habitatAnimalCounts, int habitatIndex, int changeInAnimals) {
    // TODO: Update the animal count for the specified habitat
    // Ensure that the count does not drop below zero
    habitatAnimalCounts[habitatIndex] += changeInAnimals;
    // Ensuring the animal count doesn't drop below 0
    if (habitatAnimalCounts[habitatIndex] < 0) {
        habitatAnimalCounts[habitatIndex] = 0;
    }
}

// Function to display the current status of the zoo habitats
void displayZooStatus(const int* habitatAnimalCounts) {
    cout << "Current Zoo Habitat Status:" << endl;
    // TODO: Display the number of animals in each habitat
    for (int i = 0; i < HABITAT_COUNT; i++) {
    	cout << "Habitat " << i + 1 << " has " << habitatAnimalCounts[i] << " animals." << endl;
	}
	cout << "\n";
}

int main() {
    srand(time(0)); // Initialize random seed

    int habitatAnimalCounts[HABITAT_COUNT];
    // TODO: Initialize each habitat with a random number of animals (2 to 10)
    for (int i = 0; i < HABITAT_COUNT; i++){
    	habitatAnimalCounts[i] = rand() % 9 + 2;
	}
    
    while (true) {
        displayZooStatus(habitatAnimalCounts);

        int chosenHabitat; 
		int changeInAnimals;
        cout << "Choose a habitat to manage (1-" << HABITAT_COUNT << "): ";
        cin >> chosenHabitat;
        cout << "Enter number of animals to add (positive) or remove (negative): ";
        cin >> changeInAnimals;

		//call updateHabitat
        updateHabitat(habitatAnimalCounts, chosenHabitat - 1, changeInAnimals);
    }

    return 0;
}
