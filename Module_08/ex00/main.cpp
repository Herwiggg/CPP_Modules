#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    int vec_to_find = 3;
    std::vector<int>::iterator it_vec = easyfind(vec, vec_to_find);
    if (it_vec != vec.end())
        std::cout << "Valeur trouvée dans le container : " << *it_vec << std::endl;

    int lst_to_find = 25;
    std::list<int>::iterator it_lst = easyfind(lst, lst_to_find);
    if (it_lst != lst.end())
        std::cout << "Valeur trouvée dans le container : " << *it_lst << std::endl;
    else
        std::cout << lst_to_find << " n'a pas été trouvée dans le container" <<std::endl;
}