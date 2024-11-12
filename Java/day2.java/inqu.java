import java.util.LinkedList;
import java.util.Queue;

public class InsertionQueueExample {

    public static void main(String[] args) {
        Queue<Integer> queue = new LinkedList<>();

        queue.offer(10);
        queue.offer(20);
        queue.offer(30);
        queue.offer(40);
        System.out.println("Queue: " + queue);
        System.out.println("Dequeue: " + queue.poll());
        System.out.println("Dequeue: " + queue.poll());
        System.out.println("Queue after dequeue: " + queue);

        System.out.println("Peek: " + queue.peek());
    }
}
