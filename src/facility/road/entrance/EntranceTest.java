package facility.road.entrance;

import static org.junit.Assert.*;

import org.junit.Test;

public class EntranceTest {
	Entrance test = new Entrance();
	
	@Test
	public void testRender() {
		assertTrue(test.render() == 'i');
	}

}
