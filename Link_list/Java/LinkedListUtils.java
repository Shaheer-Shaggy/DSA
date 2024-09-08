package Java;
public class LinkedListUtils {

    public static class Node {
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
    }

    public static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next; // Move to the next node
        }
    }

    public static boolean searchNodeBool(Node head, int target) {
        while (head != null) {
            if (head.data == target) {
                return true;
            }
            head = head.next;
        }
        return false;
    }

    public static Node searchNode(Node head, int target) {
        while (head != null) {
            if (head.data == target) {
                return head;
            }
            head = head.next;
        }
        return null; // if not found return null pointer
    }

    public static Node insertionAtBegin(Node head, Node target) {
        target.next = head; // new node's next address points to the old head
        return target; // return the new head
    }

    public static void insertionAtEnd(Node head, int target) {
        Node newNode = new Node(target);

        if (head == null) {
            head = newNode; // if list is empty, return new node
        } else {
            Node current = head;
            while (current.next != null) {
                current = current.next; // move to the next node
            }
            current.next = newNode; // if last node, point new node to null
        }
    }

    public static Node removeFirstNode(Node head) {
        if (head == null)
            return null;

        Node temp = head;
        head = head.next;
        temp = null; // deallocate memory

        return head;
    }

    public static Node removeLastNode(Node head) {
        if (head == null)
            return null;

        if (head.next == null) {
            head = null;
            return null;
        }

        Node current = head;
        while (current.next.next != null) {
            current = current.next;
        }
        current.next = null;
        return head;
    }
}
