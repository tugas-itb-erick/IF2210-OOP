package renderable.cage;

import static org.junit.Assert.*;
import org.junit.Before;
import org.junit.Test;

import animal.sex.Sex;
import animal.species.*;

public class CageTest {
	private Cage test;
	
	@Before
	public void setUp() throws Exception {
		test = new Cage(6);
		test.addPosition(0, 0);
		test.addPosition(1, 2);
		test.addPosition(1, 3);
		test.addPosition(2, 1);
		test.addPosition(2, 2);
		test.addPosition(2, 3);
		test.setHabitat('L');
	}

	@Test
	public void testGetSize() {
		assertTrue(test.getSize() == 6);
	}

	@Test
	public void testGetTotalAnimal() {
		assertTrue(test.getTotalAnimal() == 0);
	}

	@Test
	public void testGetRow() {
		assertTrue(test.getRow(1) == 1);
	}

	@Test
	public void testGetCol() {
		assertTrue(test.getCol(1) == 2);
	}

	@Test
	public void testGetAnimal() {
		test.addAnimal(new Elephant("Test", 10, Sex.MALE, 1, 3));
		assertTrue(test.getAnimal(0).render() == 'E');
	}

	@Test
	public void testGetHabitat() {
		assertTrue(test.getHabitat() == 'L');
	}

	@Test
	public void testSetHabitat() {
		test.setHabitat('W');
		assertTrue(test.getHabitat() == 'W');
	}

	@Test
	public void testSetNewCage() {
		test.setNewCage(10);
		assertTrue(test.getSize() == 10);
	}

	@Test
	public void testIsFull() {
		assertTrue(!test.isFull());
		test.addAnimal(new Elephant("Test", 10, Sex.MALE, 1, 3));
		test.addAnimal(new Elephant("Test", 10, Sex.MALE, 2, 1));
		assertTrue(test.isFull());
	}

	@Test
	public void testIsWild() {
		assertTrue(!test.isWild());
		test.addAnimal(new Tiger("Test", 10, Sex.MALE, 1, 3));
		assertTrue(test.isWild());
	}

	@Test
	public void testSearchPosition() {
		assertTrue(test.searchPosition(1, 3));
	}

	@Test
	public void testSearchAnimalIntInt() {
		test.addAnimal(new Tiger("Test", 10, Sex.FEMALE, 2, 2));
		assertTrue(test.searchAnimal(2, 2));
	}

	@Test
	public void testSearchAnimalAnimal() {
		test.addAnimal(new Tiger("Test", 10, Sex.FEMALE, 2, 2));
		assertTrue(test.searchAnimal(new Tiger()));
	}

	@Test
	public void testAddPosition() {
		test.setNewCage(1);
		test.addPosition(2, 3);
		assertTrue(test.getRow(0) == 2 && test.getCol(0) == 3);
	}

	@Test
	public void testAddAnimal() {
		test.addAnimal(new Tiger("Test", 10, Sex.FEMALE, 2, 2));
		assertTrue(test.searchAnimal(new Tiger()));
	}

	@Test
	public void testRender() {
		assertTrue(test.render() == 'l');
	}

	@Test
	public void testCountConsumedMeat() {
		assertTrue(test.countConsumedMeat() <= 0);
		test.addAnimal(new Lion("Test", 500, Sex.FEMALE, 2, 2));
		assertTrue(test.countConsumedMeat() > 0);
	}

	@Test
	public void testCountConsumedVeggie() {
		assertTrue(test.countConsumedVeggie() <= 0);
		test.addAnimal(new Giraffe("Test", 500, Sex.FEMALE, 2, 2));
		assertTrue(test.countConsumedVeggie() > 0);
	}

}
