package habitat.water;

import static org.junit.Assert.*;

import org.junit.Test;

public class WaterHabitatTest {
  WaterHabitat test = new WaterHabitat();
  
  @Test
  public void testRender() {
    assertTrue(test.render() == 'W');
  }

}
