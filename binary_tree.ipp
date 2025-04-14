template <typename T>
BinaryTree<T>::BinaryTree() : root(NULL) {}

template <typename T>
BinaryTree<T>::~BinaryTree() {
    deleteTree(root);
}

template <typename T>
void BinaryTree<T>::insert(BinaryNode<T>* root) {
    this -> root = root;
}



template <typename T>
void BinaryTree<T>::deleteTree(BinaryNode<T>* node) {
    if (node) {
        deleteTree(node->getLeft());
        deleteTree(node->getRight());
        delete node;
    }
}
