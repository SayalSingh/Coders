class A {

    void B() {
        System.out.println("Spider-man");
    }
}

public class Main {

    public static void main(String[] args) {

        System.out.print("\033\143");

        JK obj = new JK();
        System.out.println("Hello world");

        System.out.printf("Hello %s\n", obj.name);

        obj.table(3);

        A obj2 = new A();
        obj2.B();
    }
}