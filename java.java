import java.util.LinkedList;

class Main {
  public static void main(String[] args) {
    LinkedList<String> languages = new LinkedList<>();

    // add elements in the LinkedList
    languages.add("Python");
    languages.add("Java");
    languages.add("JavaScript");
    System.out.println("LinkedList: " + languages);

    // get the element from the LinkedList
    String str = languages.get(1);
    System.out.print("Element at index 1: " + str);
  }
}


import java.util.LinkedList;

class Main {
  public static void main(String[] args){

    // create a linkedlist
    LinkedList<String> languages = new LinkedList<>();

    // Add elements to LinkedList
    languages.add("Java");
    languages.add("Python");
    languages.add("JavaScript");
    System.out.println("LinkedList: " + languages);
  }
}


import java.util.LinkedList;

class Main {
  public static void main(String[] args) {
    LinkedList<String> languages = new LinkedList<>();

    // add elements in LinkedList
    languages.add("Java");
    languages.add("Python");
    languages.add("JavaScript");
    languages.add("Kotlin");
    System.out.println("LinkedList: " + languages);

    // remove elements from index 1
    String str = languages.remove(3);
    System.out.println("Removed Element: " + str);

    System.out.println("Updated LinkedList: " + languages);
  }
}


class Graph {

  // inner class
  // to keep track of edges
  class Edge {
    int src, dest;
  }

  // number of vertices and edges
  int vertices, edges;

  // array to store all edges
  Edge[] edge;

  Graph(int vertices, int edges) {
    this.vertices = vertices;
    this.edges = edges;

    // initialize the edge array
    edge = new Edge[edges];
    for(int i = 0; i < edges; i++) {

      // each element of the edge array
      // is an object of Edge type
      edge[i] = new Edge();
    }
  }

  public static void main(String[] args) {

    // create an object of Graph class
    int noVertices = 5;
    int noEdges = 8;
    Graph g = new Graph(noVertices, noEdges);

    // create graph
    g.edge[0].src = 1;   // edge 1---2
    g.edge[0].dest = 2;

    g.edge[1].src = 1;   // edge 1---3
    g.edge[1].dest = 3;

    g.edge[2].src = 1;   // edge 1---4
    g.edge[2].dest = 4;

    g.edge[3].src = 2;   // edge 2---4
    g.edge[3].dest = 4;

    g.edge[4].src = 2;   // edge 2---5
    g.edge[4].dest = 5;

    g.edge[5].src = 3;   // edge 3---4
    g.edge[5].dest = 4;

    g.edge[6].src = 3;   // edge 3---5
    g.edge[6].dest = 5;

    g.edge[7].src = 4;   // edge 4---5
    g.edge[7].dest = 5;

    // print graph
    for(int i = 0; i < noEdges; i++) {
      System.out.println(g.edge[i].src + " - " + g.edge[i].dest);
    }

  }
}



import java.util.Arrays;

class Test {


  // length of result string should be equal to sum of two strings
  static boolean checkLength(String first, String second, String result) {
    if (first.length() + second.length() != result.length()) {
      return false;
    }
    else {
      return true;
    }
  }

  // this method converts the string to char array 
  // sorts the char array
  // convert the char array to string and return it
  static String sortString(String str) {
  
    char[] charArray = str.toCharArray();
    Arrays.sort(charArray);

    // convert char array back to string
    str = String.valueOf(charArray);

    return str;
  }

  // this method compares each character of the result with 
  // individual characters of the first and second string
  static boolean shuffleCheck(String first, String second, String result) {
    
    // sort each string to make comparison easier
    first = sortString(first);
    second = sortString(second);
    result = sortString(result);

    // variables to track each character of 3 strings
    int i = 0, j = 0, k = 0;

    // iterate through all characters of result
    while (k != result.length()) {

      // check if first character of result matches
      // with first character of first string
      if (i < first.length() && first.charAt(i) == result.charAt(k))
        i++;

      // check if first character of result matches
      // with the first character of second string
      else if (j < second.length() && second.charAt(j) == result.charAt(k))
        j++;

      // if the character doesn't match
      else {
        return false;
      }

      // access next character of result
      k++;
    }

    // after accessing all characters of result
    // if either first or second has some characters left
    if(i < first.length() || j < second.length()) {
      return false;
    }

    return true;
  }

  public static void main(String[] args) {

    String first = "XY";
    String second = "12";
    String[] results = {"1XY2", "Y1X2", "Y21XX"};

    // call the method to check if result string is
    // shuffle of the string first and second
    for (String result : results) {
      if (checkLength(first, second, result) == true && shuffleCheck(first, second, result) == true) {
        System.out.println(result + " is a valid shuffle of " + first + " and " + second);
      }
      else {
        System.out.println(result + " is not a valid shuffle of " + first + " and " + second);
      }
    }
  }
}


