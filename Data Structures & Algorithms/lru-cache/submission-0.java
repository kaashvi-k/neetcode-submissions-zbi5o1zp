class Node{
    int key; 
    int val; 
    Node next; 
    Node prev; 

    Node(int key, int val){
        this.key = key; 
        this.val = val; 

    }
}



class LRUCache {
    private int capacity; 
    private Node right ;
    private Node left; 
    private HashMap<Integer, Node> map = new HashMap<>();

    public LRUCache(int capacity) {
        this.capacity = capacity; 
        
        this.left = new Node(0,0);
        this.right = new Node(0,0);
        
        this.left.next = this.right; 
        this.right.prev = left; 

    }
    
    public void remove(Node node){
        Node p = node.prev; 
        Node n = node.next; 
        p.next = n; 
        n.prev = p ; 
    }

    public void insert(Node node){
        Node prev = right.prev; 
        
        prev.next = node; 
        node.prev = prev; 
        
        node.next = right; 
        right.prev = node; 
    }

    public int get(int key) {
        if (map.containsKey(key)) {

            Node node = map.get(key);
            
            remove(node); 
            insert(node); 
            
            return node.val;
        }

        return -1;
    }
    
    public void put(int key, int value) {
        if( map.containsKey(key)) {
            remove(map.get(key)); 
 
        }

        Node node = new Node(key, value); 
        map.put(key, node); 
        insert(node); 

        if(map.size() > capacity){
            Node lru = left.next; 
            remove(lru); 
            map.remove(lru.key); 

        }

        
    }
}
