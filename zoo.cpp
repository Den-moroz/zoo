#include "classes.h" 

 

int main() { 

    SetConsoleCP(1251); 

    SetConsoleOutputCP(1251); 

 

 

    Animal a1("Васька", "Кіт", 4, 2, false, 5.1, 0.25, false, true, "немає", "Собаки", "Сухий_корм", 0, false); 

    Animal a2("Шарік", "Собака", 4, 7, true, 8.3, 0.7, false, true, "немає", "Коти", "Консерви", 2, true); 

    Animal a3("Гришка", "Папуга", 5, 1, true, 0.15, 0.15, true, false, "немає", "Немає", "Суміш", 0, false); 

    Animal a4("Мурка", "Кіт", 1, 3, true, 4.2, 0.3, false, true, "немає", "Собаки", "Сухий корм", 0, false); 

    Animal a5("Барсік", "Собака", 1, 5, false, 12.7, 0.6, false, true, "немає", "Коти", "Консерви", 3, true); 

    vector<Animal> animals {a1,a2,a3,a4,a5}; 

 

 

 

    vector<Worker> workers; 

    workers.emplace_back("Іваненко О.", 54, "Доглядач", 0, 25, 25000, "Хижаки", "Хижаки, Травоїдні"); 

    workers.emplace_back("Тимощук Т.", 35, "Прибиральник", 1, 3, 13000, "Ссавці", "Ссавці"); 

 

 

 

 

 

 

    Food dryFood("Сухий корм", "Корм для котів", 1.5); 

    Provider provider1("ТОВ 'Добрий котик'", dryFood, 100); 

    Food wetFood("Консерви", "Корм для собак", 0.8); 

    Provider provider2("ПП 'Вірний пес'", wetFood, 150); 

    vector<Provider> providers{provider1, provider2}; 

    Food specialFood("Спеціальний корм", "Корм для птахів", 0.5); 

    Food fishFood("Корм з рибою", "Корм для акваріумних рибок", 0.2); 

    vector<Food> foods{specialFood, fishFood}; 

    Zoo zoo1("Зоопарк 'Лев'", true, "Ссавці"); 

    Zoo zoo2("Зоопарк 'Птах'", false, "Птахи"); 

    Zoo zoo3("Зоопарк 'Тигр'", true, "Ссавці"); 

    Zoo zoo4("Зоопарк 'Крокодил'", true, "Земноводні"); 

    Zoo zoo5("Зоопарк 'Ведмідь'", false, "Ссавці"); 

    vector<Zoo> zoos{zoo1, zoo2, zoo3, zoo4, zoo5}; 

 

 

    bool working = 1; 

 

    while (working) { 

        system("cls"); 

 

        int request = -1; 

 

        cout << "\n|||||||||||||||||||||||||||||||||||||||||||||||" 

             << "\n|||||||||||||||||||||||||||||||||||||||||||||||" 

             << "\n|||||||||||||||||АІС ЗООПАРКУ||||||||||||||||||" 

             << "\n|||||||||||||||||||||||||||||||||||||||||||||||" 

 

 

 

             << "\n||||||||||||||||||||Виконав||||||||||||||||||||" 

             << "\n|||||||||||||Студент групи ІП-22-4|||||||||||||" 

             << "\n|||||||||||||Мороз Денис Русланович||||||||||||" 

             << "\n|||||||||||||||||||ІП-220508|||||||||||||||||||" 

             << "\n|||||||||||||||||||||||||||||||||||||||||||||||" 

 

                << "\n|||||||||ЗАПИТИ ІНФОРМАЦІЙНОЇ СИСТЕМИ||||||||||" 

                << "\n| |1| Службовці зоопарку                  |" 

                << "\n| |2| Службовці за видом тварин           |" 

                << "\n| |3| Службовці за доступом до тварин     |" 

                << "\n| |4| Перелік тварин                      |" 

                << "\n| |5| Зимуючі тварини                     |" 

                << "\n| |6| Тварини що підлягають щепленню      |" 

                << "\n| |7| Сумісні тварини                     |" 

                << "\n| |8| Постачальники кормів                |" 

                << "\n| |9| Корми зоопарку                      |" 

                << "\n| |10| Перелік тварин за кормами          |" 

                << "\n| |11| Повна інформація про тварину       |" 

                << "\n| |12| Тварини з потомством               |" 

                << "\n| |13| Перелік зоопарків на обмін         |" 

                << "\n| |14| Завершити роботу                   |" 

 

             << "\n\nВедіть номер запиту: "; 

        cin >> request; 

 

        system("cls"); 

 

 

 

 

        if (request == 1) { 

            cout << "Отримати список і загальне число службовців зоопарку, або службовців\n" 

                    "даної категорії повністю, за тривалістю роботи в зоопарку, за статевою ознакою,\n" 

                    "віком, розміром заробітної плати." << endl; 

            for (Worker w : workers) { 

                cout << w << "\n||||||||||||||||||||||||||\n"; 

            } 

            cout << "\nЗагальне число службовців: " << workers.size() << endl; 

        } 

 

        else if (request == 2){ 

            cout << "Отримати перелік і загальне число службовців зоопарку, відповідальних\n" 

                    "за вказаний вид тварин або по конкретній тварині за весь час перебування\n" 

                    "тварини в зоопарку, за вказаний період часу." << endl; 

            for (Worker w : workers) { 

                cout << w; 

                w.PrintAnimalType(); 

                cout << "\n||||||||||||||||||||||||||\n"; 

            } 

            cout << "\nЗагальне число службовців: " << workers.size() << endl; 

        } 

 

        if (request == 3){ 

            cout << "Отримати список і загальне число службовців зоопарку, які мають\n" 

                    "доступ до зазначеного виду тварин або до конкретної тварини." << endl; 

 

            for (Worker w : workers) { 

                cout << w; 

                w.PrintAnimalAccess(); 

                cout << "\n||||||||||||||||||||||||||\n"; 

            } 

            cout << "\nЗагальне число службовців: " << workers.size() << endl; 

        } 

 

        if (request == 4){ 

            cout << "Отримати перелік і загальне число всіх тварин у зоопарку або тварин\n" 

                    "зазначеного виду, які жили у вказаній клітці за весь час перебування в зоопарку,\n" 

                    "за статевою ознакою, віком, вагою, ростом." << endl; 

            cout << "\nВведіть номер клітки: "; 

            int cageNum; 

            int animalNum = 0; 

            cin >> cageNum; 

            for(Animal a : animals) { 

                if(a.getCage() == cageNum) { 

                    cout << a << "\n||||||||||||||||||||||||||\n"; 

                    animalNum++; 

                } 

            } 

            cout << "\n| Кількість тварин: " << animalNum << endl; 

        } 

 

        if (request == 5){ 

            cout << "Отримати перелік і загальне число тварин, які потребують теплого\n" 

 

                    "приміщення на зиму, повністю тварин тільки зазначеного виду або вказаного віку." << endl; 

 

            int animalNum = 0; 

            for(Animal a : animals) { 

                if(a.getWarmRoom()) { 

                    cout << a << "\n||||||||||||||||||||||||||\n"; 

                    animalNum++; 

                } 

            } 

            cout << "\n| Кількість тварин: " << animalNum << endl; 

 

        } 

 

        if (request == 6){ 

            cout << "Отримати перелік і загальне число тварин, яким поставлено зазначене\n" 

                    "щеплення, або перехворіли деякої хворобою, за тривалістю перебування в\n" 

                    "зоопарку, статевою ознакою, віком, ознакою наявності та кількості потомства." << endl; 

 

            int animalNum = 0; 

            for(Animal a : animals) { 

                if(a.isNeedsVaccination()) { 

                    cout << a << "\n||||||||||||||||||||||||||\n"; 

                    animalNum++; 

                } 

            } 

            cout << "\n| Кількість тварин: " << animalNum << endl; 

 

 

        } 

 

        if (request == 7){ 

            cout << "Отримати перелік усіх тварин, сумісних із зазначеним видом, або тільки\n" 

                    "тих тварин, яких необхідно переселити, або тих, які потребують в теплому\n" 

                    "приміщенні." << endl; 

 

            cout << "Введіть вид тварини: "; 

            string type; 

            cin >> type; 

 

            int animalNum = 0; 

            for(Animal a : animals) { 

                if(a.getType() == type) { 

                    cout << a << "\n||||||||||||||||||||||||||\n"; 

                    animalNum++; 

                } 

            } 

            cout << "\n| Кількість тварин: " << animalNum << endl; 

        } 

 

        if (request == 8){ 

           cout << "Отримати перелік і загальне число постачальників всіх кормів, або які\n" 

                   "постачають тільки певний корм, що поставляли в зазначений період, за кількістю\n" 

                   "поставленого корму, ціною, дат поставок." << endl; 

           for (Provider p : providers) { 

 

 

               cout << p << "\n||||||||||||||||||||||||||\n"; 

           } 

        } 

 

        if (request == 9){ 

            cout << "Отримати перелік і обсяг кормів, вироблених зоопарком повністю, або\n" 

                    "тільки тих кормів, у поставках яких зоопарк не потребує (забезпечує себе сам)." << endl; 

            for (Food f : foods) { 

                cout << f << "\n||||||||||||||||||||||||||\n"; 

            } 

        } 

 

        if (request == 10){ 

            cout << "Отримати перелік і загальне число всіх тварин, або зазначеного виду,\n" 

                    "яким необхідний певний тип кормів, у зазначеному сезоні, віці або цілий рік" << endl; 

 

            cout << "Введіть вид корму: "; 

            string type; 

            cin >> type; 

 

            int animalNum = 0; 

            for(Animal a : animals) { 

                if(a.getFoodType() == type) { 

                    cout << a << "\n||||||||||||||||||||||||||\n"; 

                    animalNum++; 

                } 

 

 

            } 

            cout << "\n| Кількість тварин: " << animalNum << endl; 

 

 

 

        } 

 

        if (request == 11){ 

            cout << "Отримати повну інформацію (зріст, вага, щеплення, хвороби, дата\n" 

                    "надходження в зоопарк або дата народження, вік, кількість потомства) про всіх\n" 

                    "тварин, або про тварин тільки даного виду, про конкретну тварину, про особини,\n" 

                    "які живуть у вказаній клітці." << endl; 

            cout << "\nВведіть номер клітки: "; 

            int cageNum; 

            int animalNum = 0; 

            cin >> cageNum; 

            for(Animal a : animals) { 

                if(a.getCage() == cageNum) { 

                    cout << a; 

                    a.PrintAdditionalInfo(); 

                    cout << "\n|||||||||||||||||||||||||||\n"; 

                    animalNum++; 

                } 

            } 

            cout << "\n| Кількість тварин: " << animalNum << endl; 

 

        } 

 

        if (request == 12){ 

            cout << " Отримати перелік тварин, від яких можна очікувати потомство в\n" 

                    "перспективі, в зазначений період." << endl; 

 

            int animalNum = 0; 

            for(Animal a : animals) { 

                if(a.isWillHaveChildren()) { 

                    cout << a << "\n||||||||||||||||||||||||||\n"; 

                    animalNum++; 

                } 

            } 

            cout << "\n| Кількість тварин: " << animalNum << endl; 

 

        } 

 

        if (request == 13){ 

            cout << "Отримати перелік і загальне число зоопарків, з якими був проведений\n" 

                    "обмін тваринами в цілому або тваринами тільки зазначеного виду." << endl; 

 

            for (Zoo z : zoos) { 

                if (z.isExchange()) { 

                    cout << z << "\n|||||||||||||||||||\n"; 

                } 

            } 

 

        } 

 

 

        if (request == 14) { 

            cout << "||||||||||||||||Кінець роботи||||||||||||||||||" << endl; 

            working = 0; 

 

        } 

 

        system("pause"); 

 

    } 

} 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

#pragma once 

 

#include <iostream> 

#include <string> 

#include <vector> 

#include <Windows.h> 

 

using namespace std; 

 

 

class Worker { 

    string name; 

    int age; 

    string type; 

    bool gender; 

    int experience; 

    int salary; 

    string animalType; 

    string animalAccess; 

 

public: 

    Worker(const string &name, int age, const string &type, bool gender, int experience, int salary, 

           const string &animalType, const string &animalAccess) : name(name), age(age), type(type), gender(gender), 

                                                                   experience(experience), salary(salary), 

                                                                   animalType(animalType), animalAccess(animalAccess) {} 

 

 

 

    friend ostream &operator<<(ostream &os, const Worker &worker) { 

        os 

        << "\n| ПІБ: " << worker.name 

        << "\n| Вік: " << worker.age 

        << "\n| Категорія: " << worker.type 

        << "\n| Стать: " << (worker.gender ? "чоловіча" : "жіноча") 

        << "\n| Стаж: " << worker.experience 

        << "\n| Зарплата: " << worker.salary; 

        return os; 

    } 

 

 

    void PrintAnimalType() { 

        cout << "\n| Вид тварин: " << this->animalType; 

    } 

 

    void PrintAnimalAccess() { 

        cout << "\n| Доступ до тварин: " << this->animalAccess; 

    } 

}; 

 

class Animal { 

    string name; 

    string type; 

    int cage; 

    int age; 

    bool gender; 

    float weight; 

 

 

    float height; 

    bool needsWarmRoom; 

    bool needsVaccination; 

    string diseases; 

    string typeCompatible; 

    string foodType; 

    int children; 

    bool willHaveChildren; 

public: 

    void PrintAdditionalInfo() { 

        cout 

        << "\n| Хвороби: " << diseases 

        << "\n| Потомство: " << children 

        << "\n| Матиме потомство: " << (willHaveChildren ? "так" : "ні"); 

    } 

    bool getWarmRoom() {return needsWarmRoom;} 

 

    bool isNeedsVaccination() const { 

        return needsVaccination; 

    } 

 

    bool isWillHaveChildren() const { 

        return willHaveChildren; 

    } 

 

    const string &getType() const { 

        return type; 

    } 

 

 

    const string &getFoodType() const { 

        return foodType; 

    } 

 

 

    Animal(const string &name, const string &type, int cage, int age, bool gender, float weight, float height, 

           bool needsWarmRoom, bool needsVaccination, const string &diseases, const string &typeCompatible, 

           const string &foodType, int children, bool willHaveChildren) : name(name), type(type), cage(cage), age(age), 

                                                                          gender(gender), weight(weight), 

                                                                          height(height), needsWarmRoom(needsWarmRoom), 

                                                                          needsVaccination(needsVaccination), 

                                                                          diseases(diseases), 

                                                                          typeCompatible(typeCompatible), 

                                                                          foodType(foodType), children(children), 

                                                                          willHaveChildren(willHaveChildren) {} 

 

    int getCage() {return cage;} 

 

    friend ostream &operator<<(ostream &os, const Animal &animal) { 

        os 

        << "\n| Назва: " << animal.name 

        << "\n| Клас: " << animal.type 

        << "\n| Клітка: " << animal.cage 

        << "\n| Вік: " << animal.age 

 

 

        << "\n| Стать: " << animal.gender 

        << "\n| Вага: " << animal.weight 

        << "\n| Ріст: " << animal.height; 

        return os; 

    } 

 

}; 

 

class Food { 

    string name; 

    string type; 

    float amount; 

public: 

    Food(const string &name, const string &type, float amount) : name(name), type(type), amount(amount) {} 

 

    friend ostream &operator<<(ostream &os, const Food &food) { 

        os 

        << "\n| Назва: " << food.name 

        << "\n| Тип: " << food.type 

        << "\n| Кількість: " << food.amount; 

        return os; 

    } 

}; 

 

class Provider { 

    string name; 

    Food food; 

    int price; 

 

 

public: 

 

    Provider(const string &name, const Food &food, int price) : name(name), food(food), price(price) {} 

 

    friend ostream &operator<<(ostream &os, const Provider &provider) { 

        os 

        << "\n| Назва: " << provider.name 

        << "\n| Корм: " << provider.food 

        << "\n| Ціна: " << provider.price; 

        return os; 

    } 

}; 

 

class Zoo { 

    string name; 

    bool exchange; 

    string animalType; 

 

public: 

    Zoo(const string &name, bool exchange, const string &animalType) : name(name), exchange(exchange), 

                                                                       animalType(animalType) {} 

 

    bool isExchange() const { 

        return exchange; 

    } 

 

    friend ostream &operator<<(ostream &os, const Zoo &zoo) { 

        os 

 

 

        << "\n| Назва : " << zoo.name 

        << "\n| Вид тварин: " << zoo.animalType; 

        return os; 

    } 

}; 