public class Weather {
    private final Forecast forecast;
    private final String temperature;

    public Weather(Forecast forecast, String temperature) {
        this.forecast = forecast;
        this.temperature = temperature;
    }

    public Weather todayTemperature() {
        return new Weather(this.forecast, this.forecast.temperature());
    }

    @Override
    public String toString() {
        return temperature;
    }
}