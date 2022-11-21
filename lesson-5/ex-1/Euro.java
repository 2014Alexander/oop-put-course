public class Euro implements Currency {
    private FakeCantor fakeCantor = new FakeCantor();
    private float value;
    private final String abbreviation = "EUR";

    public Euro(float value) {
        this.value = value;
    }

    @Override
    public Currency addedCurrency(float value, String currency) {
        float rate = fakeCantor.euroToRate(currency);
        float valueEuro = value / rate;
        return new Euro(valueEuro + value);
    }

    @Override
    public Currency subtractedCurrency(float value, String currency) {
        float rate = fakeCantor.euroToRate(currency);
        float valueEuro = value / rate;
        return new Euro(valueEuro - value);
    }

    @Override
    public String abbreviation() {
        return abbreviation;
    }

    @Override
    public String symbol() {
        return "€";
    }

    @Override
    public String balance() {
        return "Balance: " + value;
    }

    @Override
    public float toDollarExchangeRate() {
        float dollarRate = fakeCantor.euroToRate("USD");
        return value * dollarRate;
    }
}
