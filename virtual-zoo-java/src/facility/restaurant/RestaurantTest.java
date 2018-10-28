package facility.restaurant;

import static org.junit.Assert.*;

import org.junit.Test;

public class RestaurantTest {
  Restaurant test = new Restaurant();
  
  @Test
  public void test() {
    assertTrue(test.render() == 'R');
  }

}
