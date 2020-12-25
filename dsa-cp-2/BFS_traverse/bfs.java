import java.util.*;
import java.io.*;

public class bfs {
    public static Node makeTree(String arr[]) {
        if (arr.length == 0)
            return null;
        Node root = new Node(Integer.parseInt(arr[0]));
        Queue<Node> q = new LinkedList<Node>();
        q.add(root);
        for (int i = 1; i < arr.length; i++) {
            Node temp = q.peek();
            if (!arr[i].equals("N")) {
                temp.left = new Node(Integer.parseInt(arr[i]));
                q.add(temp.left);
            }
            i++;
            if (i < arr.length && !arr[i].equals("N")) {
                temp.right = new Node(Integer.parseInt(arr[i]));
                q.add(temp.right);
            }
            q.remove();
        }
        q.clear();
        return root;
    }

    static void printBfs(Node root) {
        Queue<Node> q = new LinkedList<Node>();
        q.add(root);
        while (!q.isEmpty()) {
            System.out.print(q.peek().data + " ");
            if (q.peek().left != null) {
                q.add(q.peek().left);
            }
            if (q.peek().right != null) {
                q.add(q.peek().right);
            }
            q.remove();
        }
    }

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the data of tree in row('N' for null) : ");
        String str[] = br.readLine().trim().split(" ");
        Node root = makeTree(str);
        printBfs(root);
    }
}

class Node {
    public int data;
    public Node left;
    public Node right;

    Node(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}