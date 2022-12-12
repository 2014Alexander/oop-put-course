public interface Forecast {
    String temperature();

    final class Fake implements Forecast {
        @Override
        public String temperature() {
            return "20C";
        }
    }
}