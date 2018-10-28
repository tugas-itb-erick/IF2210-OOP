package habitat.air;

import static org.junit.Assert.*;

import org.junit.Test;

public class AirHabitatTest {
  AirHabitat test = new AirHabitat();
  
  @Test
  public void testRender() {
    assertTrue(test.render() == 'A');
  }

}
