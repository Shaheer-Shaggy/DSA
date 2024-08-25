public class Node {
    int data;
    Node next;

    // Constructor
    public Node(int data) {
        this.data = data;
        this.next = null;
    }

    // Add new address to new node
    public void addNext(Node node) {
        this.next = node;
    }

    // Print linked list
    public static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next; // Move to the next node
        }
    }

    public static void main(String[] args) {
        Node head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);

        head.addNext(second);
        second.addNext(third);

        printList(head); // prints 1 2 3
    }
}
