public class RectangleDemo {

    static class Rectangle {
        public double base;
        public double height;

        public Rectangle(double b, double h) {
            base = b;
            height = h;
        }

        public double area() {
            return base * height;
        }
    }

    public static void main(String[] args) {
        Rectangle r1 = new Rectangle(3.0, 2.0);

        System.out.println("Base: " + r1.base);
        System.out.println("Altura: " + r1.height);
        System.out.println("Area: " + r1.area());
    }
}
