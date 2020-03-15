const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 434;
const signed char knockSamples[] = {
0, -1, -1, 0, 1, 2, 4, 7, 10, 14, 17, 22, 30, 32, 36, 39,
42, 48, 51, 54, 57, 59, 62, 67, 70, 73, 75, 77, 79, 84, 89, 92, 
96, 99, 105, 109, 113, 117, 120, 121, 126, 127, 127, 126, 125, 123, 118, 114, 
110, 106, 101, 92, 86, 80, 74, 68, 61, 50, 43, 35, 28, 20, 15, 8, 
5, 2, -1, -2, -4, -6, -6, -6, -5, -4, -2, -1, -2, -2, -2, -2, 
-2, -1, -1, 0, 0, -3, -5, -7, -8, -11, -14, -19, -22, -26, -29, -30, 
-32, -35, -37, -38, -39, -42, -43, -44, -46, -47, -47, -49, -52, -56, -59, -62, 
-66, -68, -71, -73, -74, -76, -78, -80, -80, -80, -80, -77, -74, -72, -71, -70, 
-69, -66, -62, -56, -52, -49, -44, -40, -37, -35, -33, -30, -30, -33, -37, -41, 
-45, -48, -52, -59, -62, -64, -68, -72, -73, -75, -76, -76, -76, -75, -74, -72, 
-71, -68, -66, -62, -56, -54, -52, -49, -48, -47, -45, -46, -46, -46, -46, -46, 
-45, -44, -45, -46, -47, -45, -43, -43, -41, -40, -40, -37, -35, -32, -28, -25, 
-22, -17, -13, -9, -3, 3, 10, 16, 21, 28, 36, 41, 49, 53, 59, 64, 
67, 70, 77, 78, 79, 82, 83, 82, 83, 83, 81, 81, 80, 77, 76, 75, 
73, 71, 70, 66, 63, 61, 60, 60, 57, 56, 56, 56, 56, 55, 55, 55, 
54, 53, 54, 55, 55, 55, 57, 58, 57, 58, 60, 61, 61, 61, 60, 58, 
58, 56, 53, 51, 49, 44, 39, 33, 30, 26, 20, 16, 12, 8, 6, 3, 
-3, -5, -7, -9, -12, -12, -14, -16, -16, -15, -14, -10, -7, -4, -2, 1, 
4, 10, 14, 17, 19, 22, 27, 30, 32, 35, 36, 38, 43, 45, 48, 49, 
49, 48, 47, 46, 43, 40, 36, 30, 26, 23, 21, 19, 15, 12, 11, 10, 
9, 8, 7, 2, 1, -1, -5, -8, -12, -15, -19, -24, -26, -28, -31, -32, 
-34, -36, -38, -40, -43, -44, -45, -46, -48, -50, -49, -47, -47, -46, -45, -46, 
-45, -45, -46, -45, -46, -48, -49, -51, -52, -53, -56, -57, -57, -57, -58, -60, 
-60, -59, -60, -60, -60, -60, -60, -61, -62, -62, -63, -64, -64, -67, -68, -69, 
-70, -71, -73, -74, -75, -77, -77, -81, -83, -85, -87, -88, -88, -88, -88, -87, 
-86, -85, -84, -82, -79, -78, -74, -70, -65, -61, -57, -53, -51, -47, -43, -40, 
-36, -31, -28, -23, -20, -17, -14, -12, -10, -7, -6, -6, -5, -4, -2, -1, 
-1, 0, };