#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  
	std::vector<std::string> inventory = {"Health Potion", "Mana Potion", "Wooden Sword", "Iron Shield", "Magic Scroll"};
	
	//add golden ring
	inventory.push_back("Golden Ring");
	
	//remove health potion
	auto it = std::find(inventory.begin(),inventory.end(),"Health Potion");
	if(it != inventory.end()){
		//remove at position
		int position = std::distance(inventory.begin(),it);
		inventory.erase(inventory.begin()+position);		
	}
	
	//replace wooden sword with steel sword
	it = std::find(inventory.begin(),inventory.end(),"Wooden Sword");
	if(it != inventory.end()){
		//replace at position
		int position = std::distance(inventory.begin(),it);
		inventory[position] = "Steel Sword";
	}
	
	//replace magic scroll with silver neklace
	it = std::find(inventory.begin(),inventory.end(),"Magic Scroll");
	if(it != inventory.end()){
		//replace at position
		int position = std::distance(inventory.begin(),it);
		inventory[position] = "Silver Neklace";
	}
	
	std::cout << "Output" <<std::endl;
	
	for(const auto &item : inventory){
		std::cout << item <<std::endl;
	}

	
	std::cout << "\nSorted" << std::endl;
	
	std::sort(inventory.begin(),inventory.end());
	
	for(const auto &item : inventory){
		std::cout << item <<std::endl;
	}
	

    return 0;
}

