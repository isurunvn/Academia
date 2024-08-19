public class Person {
    private String name;
    private int age;

    public Person(String name, int age){
        this.name = name;
        this.age = age;
    }

    public void displayDetails(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("------------------------");
    }

    public static void main(String[] args) {
        Person person1 = new Person("Nadun", 22);
        person1.displayDetails();
    }
}
