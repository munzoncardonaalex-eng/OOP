public class StatsDemo {

    static class Stats {
        public static int sum(int[] a) {
            int total = 0;
            for (int x: a) {
                total += x;
            }
            return total;
        }

        public static double average(int [] a) {
            int total = sum(a);
            return (double) total / a.length;
        }
    }

    public static void main(String[] args) {
        int[] grades = {80,75, 90, 60, 95};

        int total = Stats.sum(grades);
        double avg = Stats.average(grades);

        System.out.println("Sum: " + total);
        System.out.println("Avergae: " + avg);
    }
    
}
