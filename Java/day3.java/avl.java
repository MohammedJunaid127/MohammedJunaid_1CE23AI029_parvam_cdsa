public class AVLTree {

    // Node class for AVL Tree
    static class Node {
        int value;
        Node left, right;
        int height;

        // Constructor to create a new node
        public Node(int value) {
            this.value = value;
            this.height = 1;
        }
    }

    private Node root;

    // Get the height of the node
    private int height(Node node) {
        return node == null ? 0 : node.height;
    }

    // Get the balance factor of the node (left height - right height)
    private int getBalanceFactor(Node node) {
        return node == null ? 0 : height(node.left) - height(node.right);
    }

    // Right rotation (used for left-left case)
    private Node rightRotate(Node y) {
        Node x = y.left;
        Node T2 = x.right;

        // Perform rotation
        x.right = y;
        y.left = T2;

        // Update heights
        y.height = Math.max(height(y.left), height(y.right)) + 1;
        x.height = Math.max(height(x.left), height(x.right)) + 1;

        // Return the new root
        return x;
    }

    // Left rotation (used for right-right case)
    private Node leftRotate(Node x) {
        Node y = x.right;
        Node T2 = y.left;

        // Perform rotation
        y.left = x;
        x.right = T2;

        // Update heights
        x.height = Math.max(height(x.left), height(x.right)) + 1;
        y.height = Math.max(height(y.left), height(y.right)) + 1;

        // Return the new root
        return y;
    }

    // Insert a value into the AVL tree and balance the tree
    public void insert(int value) {
        root = insertRecursive(root, value);
    }

    private Node insertRecursive(Node node, int value) {
        // Perform the normal BST insertion
        if (node == null) {
            return new Node(value);
        }

        if (value < node.value) {
            node.left = insertRecursive(node.left, value);
        } else if (value > node.value) {
            node.right = insertRecursive(node.right, value);
        } else {
            // Duplicates are not allowed
            return node;
        }

        // Update the height of this ancestor node
        node.height = Math.max(height(node.left), height(node.right)) + 1;

        // Get the balance factor of this ancestor node to check whether this node became unbalanced
        int balance = getBalanceFactor(node);

        // If the node becomes unbalanced, there are 4 cases

        // Left Left Case
        if (balance > 1 && value < node.left.value) {
            return rightRotate(node);
        }

        // Right Right Case
        if (balance < -1 && value > node.right.value) {
            return leftRotate(node);
        }

        // Left Right Case
        if (balance > 1 && value > node.left.value) {
            node.left = leftRotate(node.left);
            return rightRotate(node);
        }

        // Right Left Case
        if (balance < -1 && value < node.right.value) {
            node.right = rightRotate(node.right);
            return leftRotate(node);
        }

        // Return the (unchanged) node pointer
        return node;
    }

    // In-order traversal of the AVL tree
    public void inorderTraversal() {
        inorderRecursive(root);
    }

    private void inorderRecursive(Node node) {
        if (node != null) {
            inorderRecursive(node.left);  // Visit left subtree
            System.out.print(node.value + " ");  // Visit root
            inorderRecursive(node.right);  // Visit right subtree
        }
    }

    // Main method to test the AVL Tree
    public static void main(String[] args) {
        AVLTree tree = new AVLTree();

        // Insert values into the AVL tree
        tree.insert(10);
        tree.insert(20);
        tree.insert(30);
        tree.insert(40);
        tree.insert(50);
        tree.insert(25);

        // Perform in-order traversal
        System.out.println("In-order traversal of AVL Tree:");
        tree.inorderTraversal();  // Expected output: 10 20 25 30 40 50
    }
}
