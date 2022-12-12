public class Application {
    public static void main(String[] args) {
        Forecast forecast = new Forecast.Fake();
        Weather weather = new Weather(forecast, "12C");
        Weather temperature = weather.todayTemperature();
        assert "20C".equals(temperature.toString());
    }
}
