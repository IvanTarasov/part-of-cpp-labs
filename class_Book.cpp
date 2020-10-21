#include <iostream>
#include <string>

class Book {
	private:
		std::string name;                   // название
		std::string genre;                 // жанр
		unsigned int numberOfPages;  // кол-во страниц
		std::string authors[10];			// авторы (до 10 авторов)
		
	public:
		Book(){ // пустой конструктор
			name = "none";
			genre = "none";
			numberOfPages = 0;
			
			for(int i = 0; i < 10; i++){
				authors[i] = "noName";
			}
		}
		
		Book (std::string newName, std::string newGenre, int newNumberOfPages, std::string * newAuthors, int numberOfAuthors){ // полный конструктор
			name = newName;
			genre = newGenre;
			
			if(newNumberOfPages > 0){
				numberOfPages = newNumberOfPages;
			}
			else{
				numberOfPages = newNumberOfPages * -1;
			}
			
			if(numberOfAuthors > 10) numberOfAuthors = 10; 
			for(int i = 0; i < numberOfAuthors; i++){
				authors[i] = newAuthors[i];
			}
			for(int i = numberOfAuthors; i < 10; i++){
				authors[i] = "*";
			}
		}
		
		// геттеры
		std::string GetName() { return name;};
		std::string GetGenre() { return genre;};
		unsigned int GetNumberOfPages() { return numberOfPages;};
		std::string * GetAuthors() { return authors;};
		
		// сеттеры
		void SetName(std::string newName){
			name = newName;
		}
		void SetGenre(std::string newGenre){
			genre = newGenre;
		}
		void SetNumberOfPages(int newNumberOfPages){
			if(newNumberOfPages > 0){
				numberOfPages = newNumberOfPages;
			}
			else{
				numberOfPages = newNumberOfPages * -1;
			}
		}
		void SetAuthors(std::string * newAuthors, int numberOfAuthors){
			if(numberOfAuthors > 10) numberOfAuthors = 10; 
			for(int i = 0; i < numberOfAuthors; i++){
				authors[i] = newAuthors[i];
			}
			for(int i = numberOfAuthors; i < 10; i++){
				authors[i] = "*";
			}
		}
		
		void Print(){ // печатает поля класса на консоль
			std::cout << std::endl;
			std::cout << "Name: " << name << std::endl;
			std::cout << "Genre: " << genre << std::endl;
			std::cout << "Number Of Pages: " << numberOfPages << std::endl;
			std::cout << "Authors: ";
			for(int i = 0; i < 10; i++){
				if(authors[i] == "*") break;
				std::cout << authors[i] << ", ";
			}
			std::cout << std::endl;
		}
		
		int AveragePagesPerAuthor(){ // возвращает среднее кол-во страниц на одного автора
			int kAut = 0;
			
			for(int i = 0; i < 10; i++){
				if(authors[i] == "*") break;
				kAut++;
			}
			
			return numberOfPages / kAut;
		}
};
int main(){
	
	// пример использования класса
	std::string author1[1] = { "L. N. Tolstoy"};
	Book book1("War And Peace", "Roman", 1344, author1, 1);
	
	book1.Print();
	std::string name, genre;
	int numA, numP;
	
	std::cout << "Enter new name: ";
	std::cin >> name;
	book1.SetName(name);
	
	std::cout << "Enter new genre: ";
	std::cin >> genre;
	book1.SetGenre(genre);
	
	std::cout << "Enter new number of pages: ";
	std::cin >> numP;
	book1.SetNumberOfPages(numP);
	
	std::cout << "Enter new number of authors: ";
	std::cin >> numA;
	
	std::string aut[numA];
	for(int i = 0; i < numA; i++){
		std::cout << "Enter " << i+1 << " author: ";
		std::cin >> aut[i];
	}
	book1.SetAuthors(aut, numA);
	
	book1.Print();
	std::cout << "Average Pages Per Author: " << book1.AveragePagesPerAuthor();
	
	return 0;	
}






















