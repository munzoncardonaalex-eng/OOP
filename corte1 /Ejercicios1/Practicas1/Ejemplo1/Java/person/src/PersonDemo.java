public class PersonDemo {
    static class Person {
        public String name;
        public int age;

        public void sayHello() {
            System.out.println("Hola, yo soy "+ name +" y tengo " + age + " años.");
        }
    }

    public static void main(String [] args) {
        Person p1 = new Person();
        p1.name = "Alex";
        p1.age = 18;
        p1.sayHello();
    }
    }

