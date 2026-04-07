package Inheritance;

public class Cat extends Animal {
    void meows() {
        System.out.println("cat meows");
    }

    public static void main(String[] args) {
        Cat obj = new Cat();
        obj.meows();
        obj.eat();
    }
}
