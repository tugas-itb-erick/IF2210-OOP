package facility.park;

import static org.junit.Assert.*;

import org.junit.Test;

public class ParkTest {
	Park test = new Park();
	
	@Test
	public void testRender() {
		assertTrue(test.render() == '*');
	}

}
