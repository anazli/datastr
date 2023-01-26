#include <iostream>

#include "tree.h"

using namespace std;

int main() {
  TreeNode<int> tr1(43, nullptr, nullptr);
  TreeNode<int> tr2(1345, nullptr, nullptr);
  TreeNode<int> tr3(5, make_shared<TreeNode<int>>(tr1),
                    make_shared<TreeNode<int>>(tr2));
  cout << tr3.data() << endl;

  return 0;
}