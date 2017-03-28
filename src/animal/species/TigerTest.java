package animal.species;

import static org.junit.Assert.*;

import org.junit.Test;

import animal.sex.Sex;

public class TigerTest {
	Tiger test = new Tiger("Test", 1000, Sex.MALE, 1, 2);
	
	@Test
	public void testIsWild() {
		assertTrue(test.isWild());
	}

	@Test
	public void testCountConsumedMeat() {
		assertTrue(test.countConsumedMeat() > 0);
	}

	@Test
	public void testCountConsumedVeggie() {
		assertTrue(test.countConsumedVeggie() == 0);
	}

	@Test
	public void testGetFirstHabitat() {
		assertTrue(test.getFirstHabitat() == 'L');
	}

	@Test
	public void testGetSecondHabitat() {
		assertTrue(test.getSecondHabitat() == 'L');
	}

	@Test
	public void testClone() {
		assertTrue(test.clone().render() == test.render());
	}

	@Test
	public void testRender() {
		assertTrue(test.render() == 'T');
	}

	@Test
	public void testGetHeartChamber() {
		assertTrue(test.getHeartChamber() == 4);
	}

	@Test
	public void testGetBloodTemperature() {
		assertTrue(test.getBloodTemperature() == 'h');
	}

	@Test
	public void testGetVegRatio() {
		assertTrue(test.getVegRatio() == 0);
	}

	@Test
	public void testGetMeatRatio() {
		assertTrue(test.getMeatRatio() > 0);
	}
	
	@Test
	public void testGetName() {
		assertTrue(test.getName() == "Test");
	}

	@Test
	public void testGetWeight() {
		assertTrue(test.getWeight() == 1000);
	}

	@Test
	public void testGetSex() {
		assertTrue(test.getSex() == Sex.MALE);
	}

	@Test
	public void testGetRow() {
		assertTrue(test.getRow() == 1);
	}

	@Test
	public void testGetCol() {
		assertTrue(test.getCol() == 2);
	}

	@Test
	public void testSetName() {
		test.setName("NewName");
		assertTrue(test.getName() == "NewName");
	}

	@Test
	public void testSetWeight() {
		test.setWeight(500);
		assertTrue(test.getWeight() == 500);
	}

	@Test
	public void testSetSex() {
		test.setSex(Sex.FEMALE);
		assertTrue(test.getSex() == Sex.FEMALE);
	}

	@Test
	public void testSetRow() {
		test.setRow(3);
		assertTrue(test.getRow() == 3);
	}

	@Test
	public void testSetCol() {
		test.setCol(4);
		assertTrue(test.getCol() == 4);
	}


}
