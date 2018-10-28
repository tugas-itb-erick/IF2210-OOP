package facility.road.exit;

import static org.junit.Assert.*;

import org.junit.Test;

public class ExitTest {
  Exit test = new Exit();
  
  @Test
  public void testRender() {
    assertTrue(test.render() == 'o');
  }

}
