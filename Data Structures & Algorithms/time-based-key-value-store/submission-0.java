class TimeMap {
    HashMap<String, Vector< Pair<String, Integer> > > s; 
    public TimeMap() {
        s = new HashMap<>(); 
    }
    
    public void set(String key, String value, int timestamp) {
        if(!s.containsKey(key)) s.put(key, new Vector<>());
        s.get(key).add(new Pair<>(value, timestamp)); 
    }
    
    public String get(String key, int timestamp) {
        String ans  = ""; 
        if(s.containsKey(key)){
            Vector<Pair<String, Integer>> arr = s.get(key); 

            int l = 0; 
            int r = arr.size()-1; 

           

            while(l <= r) {
                int m = l + (r-l)/2;
                String val = arr.get(m).getKey(); 
                int ts = arr.get(m).getValue(); 

                if( ts <= timestamp){
                    ans = val; 
                    l = m + 1; 
                }

                else if (ts > timestamp){
                    r = m - 1; 
                }
            }
 
        }
        return ans; 
    }
}
