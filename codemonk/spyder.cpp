#include <iostream>
#include <vector>
#include <algorithm> // for std::max_element

int main() {
    int num_it;
    std::cout << "enter the number of iteration" << std::endl;
    std::cin >> num_it;

    std::vector<int> num_lst_rem;
    std::vector<int> pop_ot_lst;
    int n = 6;

    for (int i = 0; i < n; ++i) {
        int temp;
        std::cout << "enter " << std::endl;
        std::cin >> temp;
        num_lst_rem.push_back(temp);
    }

    std::vector<int> use_num_lst = num_lst_rem;

    for (int j = 0; j < num_it; ++j) {
        std::vector<int> de_que(use_num_lst.begin(), use_num_lst.begin() + num_it);
        std::vector<int> lft_que(use_num_lst.begin() + num_it, use_num_lst.end());

        int max_num = *std::max_element(de_que.begin(), de_que.end());
        de_que.erase(std::remove(de_que.begin(), de_que.end(), max_num), de_que.end());

        for (int &x : de_que) {
            if (x != 0) {
                x = x - 1;
            }
        }

        use_num_lst = lft_que;
        use_num_lst.insert(use_num_lst.end(), de_que.begin(), de_que.end());

        int pop_out_num = std::distance(num_lst_rem.begin(), std::find(num_lst_rem.begin(), num_lst_rem.end(), max_num));
        // list of all the popped out elements
        pop_ot_lst.push_back(pop_out_num);
    }

    // Optional: To print the popped out elements list
    std::cout << "List of all the popped out elements: ";
    for (int i : pop_ot_lst) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
