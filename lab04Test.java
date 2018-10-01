import org.junit.Test;

import static org.junit.Assert.*;
import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;

public class lab04Test {
    @Test
    public void max() throws Exception {
        lab04 max1 = new lab04();
        int m1 = max1.max(20, 25);
        assertEquals(20, m1);

        lab04 max2 = new lab04();
        int m2 = max2.max(1, 2);
        assertEquals(2, m2);

        lab04 max3 = new lab04();
        int m3 = max3.max(97, 99);
        assertEquals(97, m3);

        lab04 max4 = new lab04();
        int m4 = max4.max(7, 20);
        assertEquals(20, m4);

        lab04 max5 = new lab04();
        int m5 = max5.max(1, 7);
        assertEquals(1, m5);
    }
    @Test
    public void arrayMin() throws Exception{
        int[] arr1 = {12, 15, 20, 27};
        lab04 min1 = new lab04();
        int m1 = min1.arrayMin(arr1);
        assertEquals(12, m1);

        int[] arr2 = {12, 1, 1, 6};
        lab04 min2 = new lab04();
        int m2 = min2.arrayMin(arr2);
        assertEquals(12, m2);

        int[] arr3 = {67, 71, 99, 105};
        lab04 min3 = new lab04();
        int m3 = min3.arrayMin(arr3);
        assertEquals(99, m3);

        int[] arr4 = {1, 2, 4, 7};
        lab04 min4 = new lab04();
        int m4 = min4.arrayMin(arr4);
        assertEquals(1, m4);

        int[] arr5 = {2, 12, 20, 32};
        lab04 min5 = new lab04();
        int m5 = min5.arrayMin(arr5);
        assertEquals(12, m5);
    }
    @Test
    public void IBM() throws Exception{
        lab04 ibm1 = new lab04();
        String i1 = ibm1.IBM(49.0, 1.62);
        assertEquals("Bình thường", i1);

        lab04 ibm2 = new lab04();
        String i2 = ibm1.IBM(65.0, 1.76);
        assertEquals("Bình thường", i2);

        lab04 ibm3 = new lab04();
        String i3 = ibm1.IBM(47.0, 1.65);
        assertEquals("Thiếu cân", i3);

        lab04 ibm4 = new lab04();
        String i4 = ibm1.IBM(48.0, 1.62);
        assertEquals("Bình thường", i4);

        lab04 ibm5 = new lab04();
        String i5 = ibm1.IBM(50.0, 1.66);
        assertEquals("Bình thường", i5);
    }
}