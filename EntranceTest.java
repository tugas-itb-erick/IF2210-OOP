import org.junit.*;
import static org.junit.Assert.*;

public class EntranceTest {
  @Test
  public void test_render(){
    System.out.println("Test if render returns character 'i'");
    Entrance e = new Entrance();
    assertTrue(e.Render() == 'i');
  }
}
