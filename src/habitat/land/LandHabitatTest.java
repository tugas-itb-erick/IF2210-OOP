package habitat.land;

import static org.junit.Assert.*;

import org.junit.Test;

public class LandHabitatTest {
	LandHabitat test = new LandHabitat();
	
	@Test
	public void testRender() {
		assertTrue(test.render() == 'L');
	}

}
