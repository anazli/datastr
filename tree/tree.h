#pragma once

#include <memory>

template <class T>
class TreeNode {
 public:
  TreeNode(const T &data, std::shared_ptr<TreeNode<T>> left,
           std::shared_ptr<TreeNode<T>> right)
      : m_data(data), m_left(left), m_right(right) {}

  T data() { return m_data; }
  std::shared_ptr<TreeNode<T>> left() { return m_left; };
  std::shared_ptr<TreeNode<T>> right() { return m_left; };
  void setLeft(std::shared_ptr<TreeNode<T>> lft) { m_left = lft; }
  void setRight(std::shared_ptr<TreeNode<T>> rt) { m_right = rt; }

 private:
  T m_data;
  std::shared_ptr<TreeNode<T>> m_left;
  std::shared_ptr<TreeNode<T>> m_right;
};

template <class T>
class BSTree {
 public:
 private:
};