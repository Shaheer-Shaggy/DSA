package Java;
import Java.LinkedListUtils.Node;

public class Main {
    public static void main(String[] args) {
        Node head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);
        Node forth = new Node(4);
        Node fifth = new Node(5);

        head.addNext(second);
        second.addNext(third);
        third.addNext(forth);
        forth.addNext(fifth);

        LinkedListUtils.printList(head); // prints 1 2 3 4 5 

        // Example usage of other functions
        System.out.println(); 
        System.out.println(LinkedListUtils.searchNodeBool(head, 2)); // true
        System.out.println(LinkedListUtils.searchNodeBool(head, 4)); // false

        Node foundNode = LinkedListUtils.searchNode(head, 3);
        if (foundNode != null) {
            System.out.println("Found node with data: " + foundNode.data); // Found node with data: 3
        } else {
            System.out.println("Node not found");
        }

        head = LinkedListUtils.insertionAtBegin(head, new Node(0));
        LinkedListUtils.printList(head); // prints 0 1 2 3

        LinkedListUtils.insertionAtEnd(head, 4);
        LinkedListUtils.printList(head); // prints 0 1 2 3 4

        head = LinkedListUtils.removeFirstNode(head);
        LinkedListUtils.printList(head); // prints 1 2 3 4

        head = LinkedListUtils.removeLastNode(head);
        LinkedListUtils.printList(head); // prints 1 2 3
    }
}
