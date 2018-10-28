package zoo;

import static org.junit.Assert.*;

import org.junit.Before;
import org.junit.Test;

public class ZooTest {
  private Zoo test;
  
  @Before
  public void setUp() throws Exception {
    test = new Zoo(5,6);
  }

  @Test
  public void testGetRow() {
    assertTrue(test.getRow() == 5);
  }

  @Test
  public void testGetCol() {
    assertTrue(test.getCol() == 6);
  }

  @Test
  public void testGetTotalCage() {
    assertTrue(test.getTotalCage() == 0);
  }

  @Test
  public void testSetNewZoo() {
    test.setNewZoo(1, 2);
    assertTrue(test.getRow() == 1);
    assertTrue(test.getCol() == 2);
  }

}
