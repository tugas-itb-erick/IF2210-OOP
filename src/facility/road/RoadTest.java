package facility.road;

import static org.junit.Assert.*;

import org.junit.Test;

public class RoadTest {
  Road test = new Road();
  
  @Test
  public void testRender() {
    assertTrue(test.render() == '-');
  }

}
