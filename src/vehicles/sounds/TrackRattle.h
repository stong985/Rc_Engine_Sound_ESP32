const unsigned int trackRattleSampleRate = 22050;
const unsigned int trackRattleSampleCount = 8015;
const signed char trackRattleSamples[] = {//0
0, 8, 34, 58, 60, 51, 6, -24, -28, -22, -25, -16, 42, 36, 22, 33, //16
30, -3, -14, -10, 11, 15, 13, 26, 21, 2, -13, -9, -19, -13, -4, -5, //32
-5, -6, -10, -18, -11, 8, 4, -34, -53, -34, -4, -13, -51, -73, -69, -68, //48
-68, -24, 8, 40, 30, -2, 11, 24, 12, -26, -42, -32, -15, -14, -11, -18, //64
-39, -39, -20, 10, 12, 2, -13, -23, -34, -67, -81, -51, -13, 27, 55, 62, //80
40, 37, 62, 80, 81, 80, 35, 6, 35, 55, 50, 35, 32, 22, 8, 7, //96
16, 24, 13, 1, -5, -10, -37, -41, -40, -31, -17, -24, -33, -32, -35, -39, //112
-42, -30, -10, -7, 8, 27, 20, -7, -16, -30, -20, 8, 38, 33, 23, 12, //128
-11, 1, 26, 16, 27, 64, 85, 66, 19, 7, 19, 21, 17, 18, 10, 18, //144
2, -19, -46, -65, -54, -43, -17, 8, 25, 22, 11, 4, 4, -7, -32, -59, //160
-52, -44, -40, -42, -44, -23, -11, -15, -17, -20, -43, -51, -41, -9, 21, 20, //176
2, 5, 38, 62, 33, 4, 17, 28, 12, -31, -43, -1, 2, -3, 5, 15, //192
9, 6, 38, 55, 68, 70, 56, 48, 24, -6, -39, -38, -5, -4, -5, -3, //208
-3, 1, 5, -26, -37, 3, 2, -55, -48, -35, 0, 28, 22, 5, -6, 17, //224
23, -15, -17, -11, 8, 43, 32, 6, -39, -44, -49, -66, -66, -52, -37, 5, //240
46, 46, 39, 25, -13, -8, -11, -5, 26, 50, 39, 12, -6, -2, 10, 23, //256
55, 62, 43, 46, 48, 16, 5, 2, 8, 3, 4, 10, -9, -17, -21, -21, //272
0, 10, 16, -21, -28, 5, 12, 13, -12, -9, 3, 2, 10, 12, 33, 50, //288
30, -11, -24, -39, -38, -32, -24, -7, -24, -44, -40, -50, -48, -40, -37, -47, //304
-66, -46, -11, -14, -34, -36, -8, 15, 23, 6, -27, -42, -44, -26, -8, -13, //320
-6, -2, 4, 20, 32, 54, 20, 3, -2, -8, 9, 20, 60, 83, 66, 64, //336
66, 63, 52, 53, 40, 6, -13, -14, -3, 25, 37, 28, -1, -13, -13, -12, //352
-22, -13, 13, 3, 11, 16, 7, 4, -28, -45, -8, 33, 20, -3, 2, -9, //368
3, 39, 51, 47, 9, -39, -29, -41, -54, -49, -38, -25, -39, -39, -15, -31, //384
-71, -58, -45, -18, -10, -16, -9, -52, -68, -67, -46, 0, 32, 37, 25, 17, //400
27, 22, 11, 3, -2, -3, 10, 30, 32, 38, 26, 38, 49, -11, -26, -13, //416
19, 22, -4, -25, -32, -22, 2, -1, -20, -11, -8, 16, 14, -7, -15, 6, //432
20, 23, 49, 53, 36, 24, 19, 3, -15, -20, -12, 3, 19, 65, 87, 75, //448
53, 32, 29, 12, 15, 24, -10, -47, -51, -19, 17, 22, 9, -6, -20, -29, //464
-26, -30, -31, -35, -38, -43, -37, -40, -60, -72, -56, -2, -19, -39, -47, -44, //480
-17, 10, 19, 5, -3, 11, 31, 47, 24, -2, -17, -15, -21, -5, 21, 38, //496
53, 33, 37, 37, 18, 1, -30, -41, -58, -63, -48, -34, -22, 17, 35, 38, //512
37, 26, 10, 15, 21, 1, -12, -21, -25, 19, 50, 56, 19, 0, 31, 3, //528
-21, -32, -47, -37, -23, -3, 19, 46, 55, 30, 6, -20, -30, -33, -36, -23, //544
-23, -20, 1, 17, 18, 4, -23, -22, -17, -21, 3, 16, -4, 16, 40, 37, //560
21, 29, 45, 38, 27, 20, -5, -25, -26, -9, 6, 40, 49, 38, 48, 58, //576
61, 16, -20, -46, -61, -69, -79, -72, -53, -28, 2, 12, 29, 11, -31, -49, //592
-79, -86, -67, -45, -19, -18, -19, -20, -9, 1, 17, 24, 5, 4, 21, 37, //608
37, 15, 18, 34, 43, 41, 27, 34, 36, 57, 48, 37, 52, 54, 52, 16, //624
-2, 5, -8, -22, -32, -43, -65, -91, -99, -84, -26, -14, -18, -5, 6, 12, //640
-12, -39, -54, -53, -27, 4, 28, 32, 36, 48, 24, 5, 0, -28, -43, -26, //656
-14, -11, 19, 34, 13, -3, -2, 1, 31, 57, 62, 61, 52, 54, 48, 33, //672
29, 21, 1, -7, -4, -10, -20, -24, -19, -9, -6, 0, 4, 9, -6, -31, //688
-40, -53, -44, -19, 12, 46, 68, 46, -30, -48, -58, -49, -54, -75, -18, 16, //704
7, -22, -53, -73, -76, -44, -8, 1, 31, 49, 51, 60, 41, 33, 37, 28, //720
37, 31, 15, 15, 30, 21, 55, 79, 42, 15, 2, -3, -19, -30, -45, -51, //736
-37, -49, -41, -22, -13, -5, -48, -72, -67, -61, -49, -60, -36, -14, -9, 2, //752
-8, 0, 3, -3, 12, 23, 16, 34, 44, 66, 108, 121, 84, 69, 49, 36, //768
23, 11, 41, 58, 55, 44, 22, -1, -1, -15, -24, -6, -2, -32, -36, -43, //784
-45, -42, -59, -41, -3, 3, -3, -6, -11, -14, -45, -35, -2, 26, 91, 83, //800
72, 49, 14, -17, -42, -44, -46, -36, -12, -19, -35, -55, -49, -36, -30, -18, //816
-39, -56, -52, -34, -23, -19, -8, -13, -35, -21, 18, 13, 23, 44, 62, 49, //832
13, -8, -36, -44, -24, 3, -7, 3, 10, -1, -18, -20, 8, 33, 36, 40, //848
43, 29, 19, 2, -4, -25, -53, -41, -29, -11, 8, 19, 20, 13, -3, -15, //864
-15, -2, 15, 26, 55, 56, 23, 17, 28, 30, 14, 8, 45, 61, 26, 10, //880
4, 20, -2, -33, -35, -46, -42, -14, 31, 52, 35, 11, -9, -49, -51, -54, //896
-36, 0, 4, 9, -9, -19, -21, -8, 21, 21, 5, -15, -13, -2, -18, -31, //912
-42, -57, -60, -36, 14, 32, 50, 41, 19, 30, 34, 15, 2, 4, 24, 23, //928
12, -11, -23, -6, 2, 7, -5, -35, -60, -64, -69, -76, -49, -18, -17, -27, //944
-10, 18, 23, 14, 20, 27, -4, -23, -38, -33, -6, 33, 69, 76, 54, 18, //960
-8, -34, -38, -16, 14, 40, 52, 76, 96, 66, 26, 17, 17, 22, -17, -48, //976
-58, -43, 6, 30, 8, -17, -34, -28, -17, -27, -56, -56, -29, -46, -46, -11, //992
1, 16, 30, 30, 39, 20, 5, -15, -46, -19, -3, 44, 94, 110, 109, 32, //1008
14, 20, 16, 20, 29, 19, 8, 4, 2, -4, 1, -6, -36, -32, -18, -27, //1024
-34, -39, -13, 18, 21, 33, 21, -7, -31, -44, -53, -64, -50, -28, -34, -52, //1040
-30, -2, -8, -14, -22, -20, -36, -56, -64, -51, -22, -20, -1, 12, 4, 24, //1056
36, 18, -9, -17, 2, 23, 10, -23, -5, 31, 38, 40, 66, 49, 19, 2, //1072
-1, 1, 5, 18, 22, 37, 42, 15, -33, -17, 13, 38, 61, 60, 22, 26, //1088
17, -4, -2, 3, 9, 6, -21, -35, -41, -28, -3, -19, -33, -43, -59, -41, //1104
-18, 10, 2, -19, -12, 14, 31, 16, -5, 18, 33, 39, 50, 38, 21, 4, //1120
11, -7, -43, -44, -32, -28, -17, -7, 13, 6, 6, 32, 33, 35, 17, 9, //1136
20, 30, 13, -13, -27, -40, -39, 10, 31, 2, -28, -22, -26, -43, -45, -55, //1152
-69, -87, -91, -46, -17, 8, 19, 3, 6, 11, 17, 0, -1, 35, 15, 23, //1168
35, 48, 52, 10, 4, 4, 6, 0, 1, -3, -17, -4, 36, 59, 68, 46, //1184
6, -20, -36, -37, -37, -34, 27, 80, 79, 80, 45, 4, -19, -34, -39, -69, //1200
-84, -57, -32, -15, -5, -15, -17, -28, -15, 31, 47, 38, 38, 26, 10, -8, //1216
-20, -17, 1, 24, 47, 68, 69, 66, 60, 27, -22, -66, -63, -29, 0, 12, //1232
0, -61, -63, -39, -49, -80, -76, -41, -27, -34, -36, -30, -36, -38, -58, -56, //1248
-33, -13, -5, -1, 18, 42, 57, 50, 54, 48, 34, 34, 41, 63, 80, 66, //1264
35, 12, -6, -5, -18, -6, 23, 31, 40, 27, 20, 10, 0, 11, -10, 8, //1280
24, 16, 18, 20, 25, 17, 6, -16, -37, -52, -39, -23, -39, -27, -15, -40, //1296
-49, -57, -48, -45, -46, -35, -19, 2, 5, 19, 42, 9, -3, 12, 12, -5, //1312
17, 37, 37, 14, -23, -40, -21, 24, 62, 68, 42, 14, 2, -34, -36, -27, //1328
-5, 8, -32, -52, -54, -51, -61, -45, -23, -13, -5, 1, 38, 50, 18, -38, //1344
-67, -50, 6, 22, 45, 79, 82, 68, 37, 22, 38, 45, 40, 40, 21, 26, //1360
45, 27, 17, 14, -14, -29, -25, 1, 25, 16, 24, 42, 54, 19, -33, -12, //1376
-35, -54, -35, -33, -20, -18, -32, -33, -36, -51, -50, -40, -50, -81, -81, -51, //1392
-58, -62, -48, -9, -1, 6, 40, 47, 54, 49, 34, 50, 45, 41, 38, 40, //1408
52, 62, 86, 78, 51, 21, -8, -23, -31, -8, 8, 22, 67, 88, 87, 28, //1424
-37, -45, -30, -6, -14, -31, -39, -64, -46, -49, -61, -58, -38, 7, 11, 1, //1440
-22, -59, -51, -28, -34, -32, -24, -27, -38, -22, 22, 60, 64, 46, 38, 33, //1456
19, 12, -6, -15, 13, 42, 50, 16, -7, 1, -4, -24, -54, -61, -66, -36, //1472
-8, -15, -17, -11, -3, 13, 30, 29, 10, -5, -3, -7, 0, 32, 52, 51, //1488
31, 4, 0, -8, -33, -46, -53, -42, -25, -24, -12, 28, 49, 44, 15, 13, //1504
29, 7, -24, -31, -36, -52, -20, 7, 36, 63, 72, 75, 48, 26, 17, 11, //1520
5, 4, 7, 9, 9, 17, 35, 44, 30, 15, -15, -42, -64, -75, -40, -27, //1536
-6, 37, 62, 43, 1, -10, -6, -17, -32, -17, 22, 33, 21, 7, -6, 9, //1552
0, -29, -48, -50, -41, -31, -33, -33, -24, -21, -19, -25, -30, -26, -17, -8, //1568
-32, -46, -35, -27, 21, 39, 28, 21, 20, 14, 9, 31, 57, 74, 82, 84, //1584
27, 0, 5, 20, 39, 30, 40, 42, 49, 49, 23, -8, -48, -32, 8, 9, //1600
8, -12, -12, -4, -18, -28, -36, -49, -77, -86, -66, -52, -45, -51, -42, -7, //1616
34, 23, -10, -41, -70, -79, -70, -24, 12, 41, 43, 28, 33, 34, 27, 28, //1632
-5, -41, -45, -40, 22, 66, 64, 51, -17, -3, -12, -22, 23, 27, 25, 51, //1648
40, 21, 3, 7, 2, -31, -26, -27, -38, -2, 5, 22, 14, 11, 24, -27, //1664
-18, 1, -24, -33, -2, -9, -13, -17, 3, 32, 9, 6, 12, 10, -12, -32, //1680
-10, 9, 34, 46, 44, 23, 3, -9, -12, 4, -6, -25, 2, 15, 24, 28, //1696
33, 39, 6, -12, -21, -37, -40, -38, -18, -8, -4, 18, 6, -7, -1, -3, //1712
4, 3, -10, -1, -4, -5, 3, 18, 9, -3, -28, -60, -66, -30, -8, -3, //1728
18, 28, 3, -13, -3, 6, 14, 19, 9, -7, -7, -8, -25, -19, 25, 38, //1744
26, 37, 41, 0, -16, -21, -19, -5, 1, -12, -9, 14, 50, 70, 39, 2, //1760
-1, -2, 18, 12, 24, 8, -31, -44, -49, -28, 10, 48, 48, 8, -10, -14, //1776
-11, -21, -40, -40, -31, 8, 19, 24, 34, -11, -37, 2, -5, -8, -13, -7, //1792
12, 23, 18, 6, -2, -16, -1, 9, -6, -13, 8, 24, 53, 56, 12, -22, //1808
-41, -42, -44, -48, -3, 49, 40, -18, -38, -42, -25, -14, -5, 0, -6, -6, //1824
13, 26, 0, -30, -25, -25, -37, -43, -28, -8, -2, -20, -24, -24, -16, -13, //1840
-5, 14, 21, 23, 21, 23, 10, -5, -10, 27, 24, -8, -19, 4, 63, 83, //1856
57, 32, 17, 27, 49, 72, 68, 45, 7, -5, 12, 6, 27, 48, 58, 58, //1872
20, 17, -9, -33, -43, -69, -65, -43, -29, -30, -36, -46, -53, -51, -45, -51, //1888
-59, -32, -2, 16, 7, -17, -49, -71, -87, -90, -76, -43, 21, 12, 8, 17, //1904
26, 23, 32, 37, 23, 13, 12, 37, 52, 62, 57, 48, 68, 74, 48, 46, //1920
34, 4, -14, -22, 6, 25, 17, 17, -13, -17, -9, -17, -35, -53, -62, -70, //1936
-75, -68, -32, 1, -10, -10, 16, 37, 32, 23, 6, -26, -31, -21, -13, 20, //1952
25, 20, 12, 14, 20, 4, 3, 26, 33, 25, 41, 56, 71, 71, 50, 24, //1968
0, -15, -23, -37, -44, -52, -66, -62, -57, -47, -40, -19, -13, -3, 11, 6, //1984
-1, -20, -17, -6, 0, 42, 63, 26, 9, -3, -12, -23, 5, -2, -16, -16, //2000
-20, -8, 17, 38, 55, 35, 16, 2, 15, 16, -20, -44, -57, -77, -64, -35, //2016
-3, 27, 23, -9, -22, -41, -44, -44, -61, -52, -2, 51, 71, 68, 38, 29, //2032
30, 22, 22, 17, -12, 12, 30, 42, 72, 85, 73, 34, 9, 10, -3, -16, //2048
-16, -19, -27, -29, -17, 5, 18, 27, 25, -1, -13, -19, -50, -94, -127, -103, //2064
-17, 12, 36, 64, 61, 43, 4, -31, -30, -5, 30, 37, 30, 31, 18, 17, //2080
21, -9, -18, -12, 1, 4, 5, -21, -58, -66, -51, -16, 31, 57, 52, 22, //2096
9, -7, -54, -56, -40, -20, -13, -23, -45, -38, -16, -22, -30, -16, -38, -57, //2112
-71, -68, -33, 9, 18, 22, 32, 24, 18, 38, 46, 51, 32, 15, 36, 55, //2128
79, 93, 95, 95, 45, 4, -23, -30, -28, -20, -6, 1, 0, -1, 16, 46, //2144
61, 58, 62, 70, 56, 14, -34, -68, -50, -10, 0, -10, -16, -28, -29, -41, //2160
-71, -71, -75, -61, -48, -38, 2, 11, 7, -13, -41, -63, -88, -78, -63, -16, //2176
31, 18, 19, 36, 48, 37, 21, -12, -35, -43, -33, -10, 7, 5, 0, 17, //2192
36, 38, 14, -13, -39, -52, -36, -12, 22, 35, 39, 71, 102, 118, 85, 25, //2208
-24, -63, -74, -46, -40, -21, 9, 11, 8, -12, -24, -18, -22, -26, -22, -8, //2224
-9, -3, 23, 27, 18, 6, -22, -31, -25, -35, -25, -13, 4, 25, 33, 27, //2240
17, 27, 23, 12, 24, 38, 24, 11, 20, 18, 19, 50, 26, 13, 24, 25, //2256
-12, -27, -12, -16, -11, 4, 4, 32, 27, 21, 11, -23, -24, -29, -53, -60, //2272
-35, -23, -12, -10, -30, -30, -14, 19, 8, 8, 23, -12, -42, -50, -58, -43, //2288
-47, -25, 10, 0, 6, 12, 32, 29, 26, 9, -43, -40, -14, -2, 55, 72, //2304
79, 73, 41, 35, 26, 8, -7, -12, -24, -18, 4, -17, -9, 12, 4, 39, //2320
40, 22, -20, -55, -25, -8, 9, 4, -7, -4, 9, 6, -1, 2, -8, -18, //2336
-58, -46, -9, -23, -20, 2, -8, 11, 10, 1, 5, -31, -31, -25, -11, 17, //2352
11, -4, -3, 2, -13, -7, 15, 8, 13, 35, 67, 73, 43, 46, 60, 65, //2368
49, 4, -4, -15, -20, -7, 10, -7, -18, 10, 45, 59, 42, -5, -13, -25, //2384
-57, -61, -51, -42, -45, -55, -44, -40, -48, -40, -14, 5, 2, -24, -49, -44, //2400
-17, 28, 46, 49, 24, -12, -23, -33, -42, -4, 22, 18, -7, -16, -10, -29, //2416
-35, -20, 3, 7, -18, -21, 3, 17, 1, -17, -14, 6, 20, 28, 35, 18, //2432
-5, -15, -37, -47, -49, -9, 16, 34, 37, 20, 28, 25, 39, 75, 84, 76, //2448
58, 9, -7, 5, 29, 26, -9, -6, -11, -24, -30, -35, -33, -11, -1, -7, //2464
0, 16, 39, 12, -9, -2, -4, -21, -47, -27, -15, 3, 39, 27, 54, 26, //2480
-13, -29, -44, -4, 1, 24, 64, 52, 7, -7, 11, 35, 12, -17, -40, -33, //2496
-15, -36, -47, -29, -36, -20, -5, 15, 40, 27, 25, 11, -4, -8, -18, 10, //2512
30, 22, -1, -18, -7, -13, -19, -17, -10, -23, -43, -34, -35, -22, 3, 8, //2528
12, 20, 23, 20, -5, -25, -32, -31, -34, -40, -29, 2, 22, 21, 28, 32, //2544
18, 1, -10, -22, -39, -35, -25, -26, -18, -5, 22, 32, 39, 58, 50, 26, //2560
16, 20, 36, 35, 14, -2, 16, 53, 44, 40, 7, -28, -29, -36, -14, 15, //2576
37, 44, 15, -9, -12, -26, -22, -20, -36, -34, -38, -44, -27, -8, -2, -5, //2592
-6, 4, 10, 18, 24, 29, 18, 4, -2, -5, 17, 15, 13, 19, 7, 0, //2608
-7, 4, 5, -18, -13, -22, -37, -32, -34, -17, 14, 14, 8, -8, 6, 25, //2624
20, 18, -5, -15, -13, -21, -13, -21, -26, -38, -53, -41, -63, -66, -53, -51, //2640
-32, 4, -2, -5, 3, 2, 23, 55, 61, 53, 34, 18, 19, 32, 67, 64, //2656
44, 39, 29, 1, -27, -13, 22, 37, 26, 32, 26, 2, -11, -12, -4, -6, //2672
-18, -33, -60, -53, -34, -40, -34, -17, -6, -6, 0, 7, 21, 40, 4, -18, //2688
-18, -24, -23, -12, 13, 14, -11, -34, -42, -38, -30, -16, 11, 46, 47, 7, //2704
11, 25, 26, 11, 1, -1, -15, -8, 19, 36, 57, 61, 50, 22, 5, 4, //2720
-24, -13, 22, 48, 61, 64, 41, 26, 19, 8, 0, 4, -5, 0, -12, -29, //2736
-19, -31, -44, -66, -62, -29, -17, -16, -20, -11, 5, -22, -46, -33, -21, -13, //2752
-23, -24, -25, -34, -43, -39, -25, -12, 0, 6, 6, -16, -41, -57, -71, -62, //2768
-48, -19, 9, -21, -21, -32, -31, -11, 1, 23, 42, 59, 45, 36, 60, 48, //2784
43, 49, 36, 19, 23, 43, 48, 48, 61, 72, 79, 73, 59, 49, 47, 28, //2800
24, 47, 50, 28, 18, 12, 9, -1, -25, -36, -32, -35, -46, -77, -93, -83, //2816
-47, -46, -54, -21, 8, 12, 18, -3, -11, -33, -56, -63, -64, -41, -28, -19, //2832
-5, 7, 9, 10, 23, 31, 31, 29, 14, -4, -8, 1, 34, 51, 52, 32, //2848
11, 3, -2, -16, -30, -30, -21, -13, 22, 32, 32, 7, -38, -50, -70, -68, //2864
-59, -45, -2, 27, 35, 30, 36, 30, 5, -12, -15, 21, 43, 53, 44, 29, //2880
28, 6, -11, -21, -32, -48, -55, -27, 6, 46, 74, 91, 109, 74, 40, 15, //2896
8, 1, -13, -18, -26, -36, -35, -21, -14, -11, -19, -90, -117, -120, -99, -75, //2912
-26, -8, -16, -11, -18, -26, -18, -11, -2, -26, -31, -3, 30, 54, 48, 41, //2928
51, 65, 34, -12, -20, 5, 33, 43, 54, 54, 30, 9, 21, 8, 2, 14, //2944
7, -5, -14, -19, -34, -54, -43, -18, 11, 23, 20, 16, 0, -12, -12, 3, //2960
19, 14, 16, -8, -36, -35, -26, -26, -28, -9, 9, 5, 6, 40, 64, 42, //2976
19, 12, 13, 21, 23, 30, 47, 29, 18, 22, 8, 11, 21, 29, 25, 23, //2992
11, 5, -10, -33, -29, -9, 6, 6, -20, -30, -12, -32, -46, -62, -87, -67, //3008
-63, -52, -62, -71, -37, -26, -14, -32, -44, -25, -10, -4, -36, -32, -34, -29, //3024
6, 7, 12, -5, -15, 5, 19, 31, 36, 55, 66, 52, 34, 12, 7, 20, //3040
26, 16, 3, 2, 1, 0, 12, 19, 45, 58, 53, 45, 29, 15, 1, -8, //3056
-17, -21, -19, -14, -15, -22, -15, -5, -7, 16, 22, 34, 51, 34, 11, 7, //3072
14, 6, -8, -20, -19, -8, -15, -13, -4, 11, 15, 6, 3, -19, -32, -29, //3088
-30, -33, -42, -44, -24, -15, -13, -7, -21, -18, -21, -36, -20, -2, 23, 18, //3104
6, -10, -37, -41, -32, 0, 0, -19, -3, 23, 34, 34, 42, 49, 63, 48, //3120
24, 15, 13, 13, 26, 52, 57, 28, 4, -8, -19, -17, -11, -8, 13, 13, //3136
-4, -16, -7, -14, -45, -68, -72, -61, -39, -37, -22, -13, -17, 3, 11, -20, //3152
-28, -7, 14, -2, -20, -16, -23, -14, 41, 70, 57, 52, 45, 37, 21, -1, //3168
-9, -17, -14, 7, 50, 34, 3, -9, -8, -7, -56, -69, -59, -71, -57, -13, //3184
14, 51, 52, 14, -17, -51, -43, -20, -4, 0, 3, 9, 11, 21, 42, 52, //3200
31, -6, -24, -37, -42, -40, -8, -4, 1, 14, 18, 26, 18, 12, 15, 15, //3216
2, -12, -9, -9, 2, 7, 11, 37, 36, 40, 28, 0, 2, 14, 18, 21, //3232
0, -22, -32, -12, 8, 2, -1, -3, -10, 3, 20, 25, 11, 4, -4, 2, //3248
11, 2, -1, -7, 17, 38, 27, 1, -18, -4, 16, 26, 24, 17, 1, -35, //3264
-66, -66, -40, -44, -40, -54, -64, -52, -55, -49, -39, -15, 15, 14, -2, -5, //3280
-15, -27, -10, 13, 32, 45, 46, 44, 32, 20, 27, 36, 28, 33, 32, 27, //3296
45, 55, 32, -3, -39, -48, -52, -50, -39, -19, 26, 52, 8, -11, -7, -4, //3312
-20, -29, -11, -2, 8, 26, 44, 58, 60, 69, 56, 19, -2, -12, -10, -27, //3328
-44, -44, -47, -28, -10, -3, -12, -33, -37, -44, -51, -45, -18, 10, -7, 9, //3344
35, 34, 29, 10, -25, -25, -29, -28, -5, 35, 32, 25, 38, 47, 42, 1, //3360
-15, -12, 2, 8, -10, -9, 8, 15, 6, 3, 19, 32, 46, 33, 14, 22, //3376
7, 11, 24, 24, 20, 0, 17, 21, -5, -37, -58, -50, -49, -49, -38, -39, //3392
-46, -66, -51, -20, -9, 9, 13, 3, 3, 10, 18, 19, 16, 7, -5, -19, //3408
-28, -3, 28, 46, 40, 1, -16, -28, -25, -21, -22, -16, -6, 14, 20, 43, //3424
58, 42, 24, 21, 11, 3, -1, -15, -12, -18, -32, -22, -24, -36, -30, -18, //3440
0, 8, 10, 10, 0, -14, -28, -24, -27, -31, 0, 4, -4, 8, 33, 70, //3456
76, 66, 69, 60, 36, 4, -1, 7, 0, -3, -37, -43, -34, -17, 10, 27, //3472
9, -19, -17, -2, 5, 2, -26, -66, -79, -68, -60, -75, -84, -62, -33, -15, //3488
8, 10, 13, 30, 35, 32, 26, 11, -29, -49, -36, -7, 17, 12, 12, 5, //3504
-3, 1, 33, 58, 65, 46, 24, 31, 54, 51, 39, 30, 45, 58, 48, 25, //3520
7, 21, 40, 38, 22, 5, 11, 24, 11, 13, 14, -4, -11, -12, 1, 14, //3536
-8, -28, -31, -26, -41, -58, -63, -68, -65, -104, -103, -64, -44, -37, -34, -19, //3552
-17, -27, -28, -24, -13, -16, -23, -16, -5, 3, 13, 5, -4, 15, 28, 9, //3568
3, 18, 21, 26, 16, -5, 13, 12, 17, 23, 20, 31, 19, 16, 24, 29, //3584
37, 43, 47, 45, 21, -14, -20, -19, -27, -32, -34, -21, 10, 16, 10, 2, //3600
-7, -15, -28, -28, 1, 19, 17, 38, 49, 42, 50, 44, 38, 15, 5, 11, //3616
12, 29, 33, 9, 13, -2, -21, -40, -44, -42, -61, -64, -59, -52, -45, -51, //3632
-74, -73, -45, -26, -18, -7, 2, -12, -28, -26, -13, -3, 26, 39, 23, -13, //3648
-15, 3, 1, 18, 28, 5, 27, 0, -28, -14, 4, 53, 67, 76, 70, 40, //3664
2, -23, -27, -28, -45, -47, -4, 6, -7, 7, 36, 13, 0, 9, 11, 2, //3680
-1, 12, 22, 15, 12, 17, 6, 16, 27, 40, 49, 44, 50, 28, 15, 33, //3696
48, 41, -2, -22, -32, -40, -40, -34, -9, 5, 7, 15, 6, -3, -2, -17, //3712
-39, -67, -73, -74, -66, -41, -23, -14, -9, -13, -9, 0, -10, -20, -29, -24, //3728
-20, -28, -33, -42, -48, -41, -30, -13, 5, 5, -34, -32, -11, 9, 23, 3, //3744
-2, 35, 61, 68, 86, 75, 55, 39, 42, 71, 91, 73, 54, 50, 57, 65, //3760
74, 65, 41, 21, -12, -55, -56, -41, -42, -41, -18, 12, 6, -13, -23, -35, //3776
-51, -83, -89, -76, -62, -48, -43, -27, -1, -2, -14, -34, -46, -28, -22, 10, //3792
27, 17, 37, 53, 61, 44, 21, 13, -19, -21, 9, 41, 40, 27, 50, 51, //3808
44, 30, 11, 13, 1, 1, 1, -15, -17, -30, -41, -48, -43, -27, -15, -9, //3824
-23, -45, -45, -28, -36, -52, -58, -54, -44, -35, -6, 2, 11, 22, 14, 7, //3840
0, 7, 20, 20, 24, 24, 21, 41, 66, 56, 39, 44, 38, 33, 48, 58, //3856
43, 27, 15, 25, 33, 31, 27, 8, -5, -25, -49, -34, 1, 1, -12, -12, //3872
-12, -33, -37, -31, -13, -17, -44, -47, -27, -38, -58, -55, -16, 40, 37, 24, //3888
2, -7, -18, -32, -43, -50, -49, -43, -20, -6, 25, 60, 56, 33, 37, 33, //3904
8, 3, 20, 21, 8, 11, 30, 32, 23, 3, -3, 10, 15, 10, -7, -36, //3920
-34, -42, -40, -29, -12, -1, -20, -29, -13, 10, 14, 4, -1, 3, 14, 1, //3936
1, 7, 0, 0, 5, -3, -19, -23, -21, -24, -16, -6, -8, -6, 9, 33, //3952
24, -4, -9, -9, -14, -7, 31, 34, 51, 62, 39, 12, 20, 21, 25, 23, //3968
0, -38, -48, -44, -26, 0, -6, -7, -5, -6, -3, -19, -28, -27, -36, -23, //3984
21, 44, 32, 16, 1, -18, -35, -16, -6, 5, 18, 6, 1, -4, 31, 48, //4000
36, 39, 33, 33, 27, -2, -20, -18, -6, 8, 4, -5, -13, -24, -11, 18, //4016
-8, -21, -26, -28, -15, -9, 21, 31, 30, 28, -3, 1, -3, 2, -13, -51, //4032
-27, 0, 11, 0, -20, -16, -22, -46, -55, -61, -68, -66, -45, -31, -40, -44, //4048
-47, -29, -16, 8, 16, -5, -20, -30, -21, -1, 17, 49, 76, 62, 59, 51, //4064
49, 57, 29, 21, 29, 46, 66, 94, 66, 17, -3, -10, 8, 43, 16, -6, //4080
-5, -3, -12, -43, -41, -40, -34, -19, -12, 2, -8, -28, -40, -48, -45, -34, //4096
-33, -21, 10, 25, 37, 44, 53, 58, 38, 3, -21, -31, -20, -2, 17, 49, //4112
70, 64, 44, 40, 26, 19, 4, -10, -10, -14, -17, -6, 14, 15, 11, 15, //4128
-7, -16, -38, -58, -55, -59, -60, -62, -60, -28, -15, -5, 3, -7, -26, -46, //4144
-39, -32, -21, 2, 24, 35, 16, -11, -44, -51, -43, -48, -56, -35, -15, -13, //4160
-8, -22, -52, -52, -47, -20, 2, 19, 34, 49, 47, 27, 19, 21, 17, 28, //4176
47, 42, 44, 63, 38, 18, 17, 25, 48, 70, 79, 69, 32, -5, -1, -2, //4192
6, 20, 32, 50, 52, 37, 18, 1, -14, -20, -14, -25, -33, -15, -4, 3, //4208
1, -16, -14, -6, -12, -14, -15, 0, -7, -29, -21, -26, -14, 6, 5, -6, //4224
-19, -20, -13, -2, 11, 9, -2, 10, 15, 6, -11, -29, -29, -36, -34, -22, //4240
-3, 26, 31, 33, -3, -51, -71, -69, -66, -68, -66, -41, -15, -12, 16, 38, //4256
36, 16, -10, -23, -24, -14, 4, 16, 17, 7, -4, 19, 45, 56, 69, 72, //4272
50, 27, 20, -10, -9, 13, 17, 4, 5, 14, 15, 19, -2, -24, -11, -28, //4288
-28, -14, 3, 18, 15, -4, -18, -19, -17, -12, -3, 5, 9, 11, 19, 13, //4304
-10, -19, -10, -4, -11, -9, 2, 13, 12, -17, -56, -32, -2, 23, 51, 56, //4320
37, 27, 19, 17, 23, 29, 34, 6, -21, -19, -25, -21, -1, 15, 15, 3, //4336
-11, -36, -34, -31, -28, -16, 1, -6, -17, -16, -12, 3, -4, -5, -4, -19, //4352
-18, -7, -15, -10, 4, 14, 9, -5, -8, 3, 8, 4, -2, 3, -8, -30, //4368
-24, -9, 11, 19, 22, 38, 40, 38, 29, 25, 16, 4, -8, -14, 25, 24, //4384
-11, -40, -45, -28, -12, -8, 11, 22, 30, 18, 3, 7, -6, -14, -12, -2, //4400
-23, -49, -40, -9, 14, 28, 16, 26, 22, -8, 11, -10, -37, -43, -36, -41, //4416
-56, -33, -10, -3, -18, -17, 26, 29, 25, 17, 8, -17, -38, -35, -26, -33, //4432
-26, 11, 9, 17, 26, 33, 41, 32, 32, 9, 15, 49, 36, 31, 34, 26, //4448
11, 17, 23, 7, 3, -2, -18, -22, -13, 8, 30, 27, 21, 24, 35, 37, //4464
14, -16, -41, -46, -27, -34, -36, -21, -16, -21, -46, -50, -27, -13, -35, -37, //4480
-38, -41, -12, 7, 6, 3, -4, -13, -32, -47, -35, -3, 20, 37, 63, 70, //4496
40, 19, 12, 18, 25, 3, 4, 16, 15, 17, 22, 27, 48, 51, 34, 27, //4512
14, -5, -29, -55, -66, -58, -55, -60, -32, 2, -3, -25, -48, -38, -19, -2, //4528
21, 47, 40, 29, 16, 15, 34, 30, 12, 16, 25, 11, -8, 0, 10, 21, //4544
34, 31, 17, 8, 4, 15, 6, -11, -21, -32, -22, -19, -14, -20, -37, -30, //4560
-19, -9, -3, -7, -9, -16, -19, -20, -10, 5, -7, -6, 5, 33, 57, 47, //4576
50, 27, -8, -13, -12, -13, -20, -20, -8, -7, -36, -62, -71, -49, -28, -2, //4592
25, 28, 17, 15, 16, -7, -17, -11, -18, -25, -28, -21, -22, -28, -21, -12, //4608
-13, -26, -26, -26, -25, -16, 0, 10, 3, 9, 28, 33, 42, 60, 54, 42, //4624
40, 25, 21, 27, 43, 39, 24, 24, 17, 30, 34, 1, -24, -12, -5, 13, //4640
31, 41, 56, 43, 30, 26, 30, 31, 28, 8, -27, -60, -80, -66, -24, -28, //4656
-47, -59, -60, -48, -45, -59, -71, -65, -50, 8, 24, 20, 35, 41, 27, -5, //4672
-22, -7, 10, 9, 25, 18, 9, 7, -10, -18, 11, 23, 23, 21, 0, -24, //4688
-17, 1, 23, 15, 1, 3, 27, 57, 45, 20, 18, 9, -36, -73, -71, -55, //4704
-40, -25, -6, 4, 0, -4, 16, 19, 2, 1, -3, -33, -54, -51, -42, -26, //4720
-4, 18, 14, 18, 29, 30, 14, 6, 23, 25, 26, 33, 31, 56, 60, 38, //4736
23, 19, 12, 15, 27, 30, 38, 43, 6, 7, 5, -10, -27, -54, -65, -56, //4752
-44, -31, -26, -1, 18, 10, 9, 17, 9, -25, -45, -35, -33, -36, -23, 8, //4768
55, 66, 47, 43, 31, 30, 8, -11, -20, -36, -23, -14, 8, 21, 17, 6, //4784
-33, -34, -40, -37, -6, 15, 12, 2, -13, -20, -20, -6, 3, 13, 12, 5, //4800
19, 12, -7, -20, -46, -55, -36, -13, 17, 38, 33, 10, -12, -23, -25, -27, //4816
-15, 5, -5, 9, 36, 44, 23, -11, -9, -2, -12, -11, 3, -20, -38, -43, //4832
-27, -16, -9, 21, 32, 54, 59, 41, 30, 45, 45, 34, 33, 37, 46, 27, //4848
7, 2, -6, -40, -38, -41, -47, -39, -42, -34, -22, -11, -23, -37, -38, -24, //4864
8, 6, -6, 3, 21, 11, -5, -6, 1, 16, 19, 20, 13, 10, 8, 1, //4880
22, 28, 18, -6, -1, 47, 32, 10, 10, 3, -6, 24, 29, 22, 5, -4, //4896
26, 44, 42, 47, 33, 12, -9, -28, -45, -47, -44, -41, -29, -14, -18, -28, //4912
-27, -30, -16, -10, -9, -14, -40, -60, -44, -28, -23, -40, -38, -14, -11, -3, //4928
-2, 5, 12, 17, -2, -31, -33, -29, -2, 0, -19, -31, -33, -21, 8, 21, //4944
33, 43, 38, 26, 34, 33, 22, 29, 47, 48, 65, 77, 58, 63, 73, 36, //4960
36, 32, 37, 40, 21, 0, -22, -32, -35, -40, -41, -36, -4, 9, -11, -28, //4976
-13, -21, -22, -16, -21, -4, 13, 22, 2, -41, -69, -75, -32, -7, 4, 13, //4992
20, 54, 32, -3, -18, -19, 18, 19, -3, -10, -15, -22, -28, -36, -36, -45, //5008
-41, -25, -10, 8, -5, -18, -28, -48, -29, -15, -2, 22, 31, 15, 18, 27, //5024
32, 26, -1, -25, -12, 0, -14, -26, -30, -13, 8, -9, -42, -52, -21, 23, //5040
81, 107, 88, 56, 15, -1, -12, -2, 7, 25, 21, 16, 17, -10, -24, 4, //5056
25, 45, 55, 37, 13, 14, 4, -10, -24, -28, -1, 4, 13, 15, -2, -17, //5072
-18, -13, -11, 15, 54, 79, 56, 22, 1, -26, -52, -37, -34, -25, -17, -13, //5088
15, 11, -1, -10, -1, 16, 3, -13, -35, -36, -36, -61, -57, -43, -29, -13, //5104
-6, 4, 0, 9, 29, 19, 12, 4, -10, 0, 1, 0, 1, -8, -16, -6, //5120
9, 24, 28, 21, 28, 32, 31, 18, 4, 17, 23, 10, 8, 30, 31, 27, //5136
33, 42, 47, 25, 3, -14, -20, -22, -46, -48, -41, -44, -42, -43, -46, -38, //5152
-54, -62, -62, -42, -1, 15, 6, 3, 3, -13, -42, -60, -68, -65, -54, -24, //5168
6, 1, -17, -20, 15, 28, 36, 54, 33, 25, 17, -4, -2, -6, -8, -9, //5184
4, 34, 58, 79, 90, 93, 81, 38, 11, 19, 37, 42, 63, 68, 47, 16, //5200
3, 13, 24, -6, -11, 2, 11, 28, 31, 21, -8, -24, -30, -63, -55, -43, //5216
-44, -29, -19, -39, -47, -38, -13, -6, -18, -34, -42, -57, -62, -27, 11, 4, //5232
6, 8, 0, -13, 1, 19, 0, -39, -52, -43, -26, 5, 17, 18, 35, 40, //5248
60, 68, 44, 42, 61, 77, 44, 15, 5, -16, -42, -75, -76, -70, -52, -40, //5264
-43, -54, -58, -46, -44, -41, -3, 16, 2, -20, -29, -36, -8, -2, -2, 9, //5280
-8, -24, -35, -39, -11, 10, 23, 39, 51, 74, 77, 68, 38, 30, 40, 44, //5296
66, 84, 56, 46, 49, 45, 39, 31, 37, 47, 19, -11, -19, -19, -15, -7, //5312
0, 0, 5, -10, -33, -28, -12, 4, 12, 22, 28, 17, -2, -22, -69, -86, //5328
-71, -48, -42, -55, -72, -71, -46, -13, 6, 24, 31, 19, 0, -30, -42, -16, //5344
-2, 1, -7, -10, 1, -10, -43, -53, -39, -40, -58, -20, -10, -19, 1, -1, //5360
24, 46, 46, 53, 45, 29, 26, 38, 49, 44, 30, 31, 43, 46, 38, 42, //5376
60, 42, 39, 7, -19, -6, 2, 32, 26, 8, -6, -26, -34, -23, -8, -16, //5392
-24, -17, -14, -27, -22, -10, 5, 11, -32, -27, -42, -73, -68, -52, -21, -3, //5408
10, 21, 7, -20, -38, -47, -46, -57, -51, -13, -2, 3, 2, 6, 12, 9, //5424
1, -12, -8, 5, 14, 37, 52, 64, 62, 43, 60, 62, 62, 64, 33, -13, //5440
-21, -17, 3, 12, 6, 6, 4, -6, -29, -55, -56, 10, 51, 50, 50, 59, //5456
62, 42, -4, -53, -78, -61, -23, -7, -1, 11, 20, 21, 8, -3, -10, -27, //5472
-29, -31, -17, -11, -21, -26, -23, -2, 3, 10, 8, 6, 6, 1, 16, 4, //5488
-2, 3, -3, -8, -22, -37, -52, -59, -34, -26, -20, -2, -8, -9, 29, 51, //5504
51, 31, 0, -54, -71, -73, -78, -72, -34, -24, -30, -26, -28, -22, -3, 31, //5520
65, 58, 31, 25, 31, 54, 51, 55, 49, 28, 50, 40, 30, 32, 41, 53, //5536
36, 8, -2, 21, 27, -12, -17, 3, 38, 55, 54, 41, 23, 17, 16, 15, //5552
16, 12, 22, 24, 24, 3, -53, -63, -89, -115, -115, -95, -50, -21, -7, -11, //5568
-7, 13, 8, -10, -28, -57, -51, -22, -6, 0, -13, 5, 18, 7, 16, 20, //5584
27, 20, -31, -46, -35, -18, -15, -24, -2, 7, 2, -8, -16, -16, 1, 11, //5600
24, 39, 34, 24, 12, -10, -26, -29, -23, -18, -19, -18, -21, -4, 33, 82, //5616
92, 80, 69, 55, 23, -24, -53, -55, -47, -21, 10, 21, 18, 21, 14, -10, //5632
-3, -6, -19, -34, -46, -27, -17, -8, 10, 18, 16, 1, 18, 35, 33, 34, //5648
40, 61, 60, 48, 37, 25, 15, 3, -10, -9, -18, -22, -18, -34, -10, 9, //5664
-1, -5, -21, -32, -39, -43, -32, -37, -48, -28, 2, -21, -57, -42, -39, -13, //5680
11, 25, 47, 56, 42, 18, 16, 10, -28, -33, -45, -37, -15, -14, 43, 62, //5696
43, 24, -5, -14, -37, -41, -12, -5, 2, 25, 19, -7, -28, -32, -37, -48, //5712
-55, -63, -69, -53, -23, 25, 63, 77, 75, 65, 42, 17, 3, 2, -2, -3, //5728
-10, 1, 18, 29, 28, 5, 9, -1, -21, 0, 26, 30, 54, 69, 69, 51, //5744
15, -26, -26, -25, -39, -34, 0, 17, 13, -11, -34, -37, -10, -35, -59, -49, //5760
-10, 28, -10, -32, -33, -32, -11, 9, -6, -17, -25, -21, -11, -5, 29, 40, //5776
25, 13, 4, 33, 24, -12, -29, -20, 11, 24, 31, 18, 3, 5, -3, -5, //5792
-1, -4, -14, -17, -1, 6, 19, 18, 19, 7, -6, -14, -38, -36, -30, -19, //5808
-5, -20, -9, 21, 36, 22, -8, -5, 5, 5, 35, 47, 60, 68, 62, 35, //5824
-2, 5, 21, 20, -16, -35, -28, -23, -21, -43, -49, -30, -17, 3, 14, 24, //5840
27, 27, 15, 0, -1, 2, -4, -40, -31, 0, 21, 36, 3, -21, -22, -21, //5856
-17, -26, -76, -78, -76, -80, -69, -74, -89, -64, -66, -63, -27, -2, 3, 10, //5872
4, -8, -4, 10, 8, 19, 28, 21, 9, -1, 17, 37, 43, 54, 65, 70, //5888
86, 105, 99, 91, 89, 80, 69, 42, 29, 55, 37, 11, 2, -1, -3, 17, //5904
44, 62, 55, 15, -19, -60, -74, -58, -53, -60, -65, -52, -24, -1, 6, -2, //5920
-31, -35, -25, -22, -15, -7, -13, -32, -64, -85, -85, -79, -55, -40, -31, 6, //5936
42, 43, 36, 27, 14, 1, -9, -15, -15, -9, 4, 15, 36, 33, 23, 20, //5952
23, 33, 38, 44, 24, -13, -36, -49, -17, -3, 8, 6, -9, -13, -13, 2, //5968
20, 29, 16, -1, -11, -18, -12, -24, -44, -32, -8, 8, 27, 33, 14, 9, //5984
9, 11, 21, 36, 25, 30, 57, 76, 70, 23, -19, -11, 3, 32, 47, 29, //6000
4, -25, -37, -29, -12, -3, -19, -49, -61, -54, -59, -22, -19, -26, -6, -6, //6016
-14, -15, -26, -29, -36, -37, -15, -10, -7, -10, 4, -14, -30, -11, -3, 15, //6032
14, -34, -28, -23, -18, -24, -33, 23, 36, 44, 35, -8, -2, -3, 11, 57, //6048
78, 71, 49, 24, 4, -4, -11, -15, -29, -22, 13, 54, 86, 95, 79, 59, //6064
52, 44, 39, 48, 52, 47, 20, -5, -15, -10, -7, -15, -22, -27, -50, -43, //6080
-31, -14, -10, -36, -52, -68, -59, -44, -44, -33, -25, -27, -20, -11, 0, 5, //6096
-2, 2, -4, -26, -40, -21, -16, -36, -65, -67, -39, -12, 6, 6, 8, 19, //6112
13, 21, 23, 25, 33, 21, -32, -45, -40, -23, 13, 47, 93, 87, 56, 37, //6128
8, -21, -22, -37, -32, -24, -29, 4, 13, 23, 42, 58, 55, 10, -8, -19, //6144
-36, -52, -18, 8, 21, 17, -5, -12, -8, 4, 18, 15, 23, 26, 33, 57, //6160
39, 30, 7, -35, -23, -22, 2, -6, -25, 2, -4, -8, -24, -36, -2, 32, //6176
48, 32, -3, -25, -52, -38, -6, 6, 16, 28, 23, 14, -1, -12, -33, -83, //6192
-80, -61, -46, -46, -24, -4, -16, 1, 12, 14, 11, 14, 3, -16, 5, 28, //6208
57, 68, 62, 63, 41, 7, -13, -24, -21, -11, -16, -13, -2, 17, 33, 32, //6224
37, 17, 1, -17, 0, 42, 25, -17, 2, 23, 23, -5, -24, 5, 2, -23, //6240
-49, -59, -60, -47, -38, -49, -51, -25, 19, 39, 48, 46, 36, 30, 48, 60, //6256
47, 11, -5, 9, 24, 38, 13, -30, -44, -50, -46, -39, -28, -16, -14, -1, //6272
11, 7, 6, 12, -4, -20, -42, -36, -19, -19, -11, 13, 52, 53, 46, 53, //6288
14, 2, 7, -1, -13, -26, -34, -19, 20, 35, 33, 41, 27, 12, -20, -21, //6304
-13, -38, -38, -59, -48, -13, 27, 22, -4, -11, -13, -6, 21, 31, 31, 39, //6320
57, 51, 47, 46, 33, 25, 6, -55, -70, -59, -30, -18, -14, 15, 13, 8, //6336
12, 8, 1, -9, -31, -44, -43, -24, -8, -6, 7, 6, 2, -12, -25, -43, //6352
-46, -15, -1, -5, -29, -26, -3, -24, -56, -41, -18, -9, 0, 12, 2, -8, //6368
-4, 7, 22, 6, -2, 13, 20, 32, 34, 30, 45, 41, 29, 22, 19, 17, //6384
-15, -20, -18, -12, 0, -4, 7, 18, 25, 20, 20, 32, 39, 28, 0, -3, //6400
19, 21, -12, -24, -12, -4, -31, -53, -48, -41, -36, -13, 4, 5, 12, 18, //6416
26, 27, 19, 20, 14, -11, -14, 5, 2, 18, 37, 46, 44, 1, -39, -75, //6432
-60, -22, 6, 39, 31, 39, 39, 37, 36, 14, -10, -22, -19, -5, 4, -10, //6448
-27, -48, -38, -10, -16, -40, -54, -56, -57, -40, -25, -3, 17, 30, 45, 29, //6464
17, 6, -31, -56, -52, -44, -26, -25, -26, -15, 4, -5, -23, -26, -26, -10, //6480
21, 19, -7, -28, -31, -29, -6, 8, 19, 41, 37, 21, 19, -2, -24, -11, //6496
28, 63, 57, 44, 41, 31, 23, 27, 27, 35, 23, 9, 50, 57, 31, 1, //6512
-2, 2, -23, -17, 0, 10, 11, 4, -9, -3, 12, -2, -14, -13, -17, -2, //6528
16, 6, -16, -31, -30, -37, -36, -2, 21, 7, -27, -43, -25, -26, -10, 1, //6544
4, -8, -29, -17, -18, -13, -16, -25, -13, 17, 45, 43, 37, 26, -11, -50, //6560
-44, 5, 56, 85, 98, 65, 42, 7, -27, -28, -2, 12, 18, 26, 24, 18, //6576
-5, -34, -47, -48, -44, -38, -58, -52, -32, -29, -34, -35, -30, -34, -47, -51, //6592
-50, -33, -14, -10, 2, 11, 16, 32, 33, 31, 21, 7, -2, 9, 1, -16, //6608
-14, -8, 0, 28, 68, 77, 63, 59, 30, -7, -20, -16, 7, 36, 19, -2, //6624
-21, -20, -2, -4, -4, -21, -29, -11, -2, 28, 23, -3, -5, -15, 7, 26, //6640
19, 17, 0, -29, -33, -20, -17, -23, -16, 8, 12, 6, -8, -20, 0, 34, //6656
29, 17, 4, 2, 5, 1, 10, 24, 28, 30, 29, 21, 14, 0, -11, -4, //6672
12, 4, -6, -24, -35, -33, -29, -29, -38, -37, -19, 23, 30, 23, 26, 17, //6688
0, 4, -7, -14, -15, -7, 20, 16, -8, -14, -1, -10, -32, -27, -39, -45, //6704
-34, -29, -40, -37, -14, 11, 22, 21, -1, -15, -10, -4, 8, 26, 38, 58, //6720
67, 80, 63, -5, -18, -23, -15, -16, -33, -2, 4, -14, -11, -7, -22, -32, //6736
-33, -23, -11, -3, 10, 20, 32, 54, 64, 44, 15, -6, -24, -23, -23, -13, //6752
-12, -2, 17, 15, 6, 23, 23, 14, 24, 23, 18, 32, 15, -20, -39, -54, //6768
-58, -50, -32, -2, 6, 1, -8, 1, 14, 21, 24, -6, -9, -6, -16, -7, //6784
-4, 6, 8, 4, 21, 30, 38, 32, 33, 22, 5, 16, 2, -13, -18, -13, //6800
17, 27, 28, 23, 2, -5, -17, -4, -10, -38, -36, -56, -67, -49, -54, -53, //6816
-55, -48, -28, -7, -11, -33, -58, -64, -49, -36, -19, 7, 4, -6, 10, 17, //6832
32, 35, 15, 0, -9, 7, 12, 17, 37, 34, 33, 40, 43, 55, 55, 17, //6848
18, 26, 15, 8, 1, -13, -2, 22, 41, 40, 24, 41, 63, 49, 36, 27, //6864
6, 4, 4, 4, -9, -6, -18, -41, -31, -23, -8, 11, -13, -14, -2, -1, //6880
-19, -89, -88, -67, -45, -25, -21, -5, 6, 29, 51, 65, 73, 43, 5, -21, //6896
-27, -28, -32, -18, -5, 8, 17, 5, 9, 7, -1, 14, 6, -4, -5, -17, //6912
-14, -19, -11, -36, -69, -79, -84, -71, -51, 3, 30, 40, 50, 47, 52, 37, //6928
2, -1, 2, 8, 35, 12, 11, 30, 48, 64, 52, 42, 9, -31, -46, -25, //6944
-16, -10, 6, 15, 21, 39, 45, 37, 14, 3, -16, -69, -61, -48, -23, -11, //6960
-17, -21, -35, -25, -28, -33, -33, -55, -60, -51, -46, -46, -15, -2, 0, 11, //6976
12, -7, -20, -30, -29, -14, 20, 43, 43, 51, 52, 51, 38, 12, 24, 38, //6992
43, 21, -3, -6, -10, 8, 23, 21, 10, -3, -9, 3, 6, -3, 14, 42, //7008
54, 37, 9, -10, 0, 12, 17, 5, -14, -5, 1, 11, 0, -8, 21, 11, //7024
6, 20, 34, 45, 7, -12, -28, -37, -27, -24, -16, -12, -13, -10, -8, -7, //7040
-6, 9, 12, -3, -20, -21, -1, -12, -27, -13, -8, -24, -38, -53, -57, -59, //7056
-41, -39, -48, -34, -18, -20, 1, 15, 13, 4, -8, -20, 3, 4, -4, 11, //7072
26, 69, 78, 77, 85, 86, 58, -24, -37, -28, -26, -21, -6, 3, 16, 36, //7088
34, 21, 27, 14, -3, -31, -65, -64, -55, -43, -17, -20, -25, 2, 48, 58, //7104
44, 22, -5, -24, -25, -18, 8, 30, 33, 21, 28, 31, 17, 2, -4, 5, //7120
14, 7, 12, 17, 28, 24, 9, 13, -2, -33, -54, -48, -40, -35, -20, 4, //7136
37, 45, 37, 12, -14, -43, -53, -48, -33, -24, -14, -30, -42, -24, -18, -18, //7152
2, 23, 15, 16, 12, -14, -23, -11, 0, -14, -9, 21, 8, -7, -26, -29, //7168
-14, 9, 27, 24, 26, 10, -28, -39, -7, 27, 54, 57, 43, 64, 68, 54, //7184
56, 53, 31, -9, -34, -32, 0, 15, 7, 1, -10, -8, 1, -4, 3, 7, //7200
-2, -7, -5, -6, -11, -28, -40, -44, -33, 8, 12, 18, 1, -6, 12, 0, //7216
2, -8, -13, -17, -44, -39, -27, -27, -28, -18, -14, -8, -12, -10, 22, 39, //7232
24, 7, -8, -25, -23, -9, -25, -10, 2, 6, 5, -8, -4, -13, -12, -20, //7248
-36, -47, -56, -40, -23, -11, 26, 53, 52, 29, 36, 43, 30, 44, 50, 45, //7264
31, 30, 36, 21, -1, -6, 10, 38, 33, 19, 22, 9, -5, 11, -2, -15, //7280
-19, -24, -23, 0, -4, -6, -3, -8, -12, -26, -28, -42, -46, -25, -7, 16, //7296
7, -6, -19, -30, -1, 2, 15, 22, 19, 20, 21, 32, 43, 35, -1, -38, //7312
-45, -46, -33, -21, -18, -20, -20, -11, 4, 19, 0, -15, -40, -50, -32, -20, //7328
17, 34, 42, 28, -15, -36, -17, -8, -7, -11, -24, -18, -6, -1, -8, -27, //7344
-20, 6, 11, 9, 34, 77, 72, 60, 41, 27, 21, 16, 19, 20, 12, 4, //7360
6, 20, 25, 12, 7, -7, -15, -33, -53, -47, -37, -26, -4, 25, 40, 59, //7376
70, 52, 30, 10, -4, -11, -30, -40, -42, -49, -46, -60, -64, -49, -31, -9, //7392
-11, -16, -14, -3, 28, 28, 27, 22, 6, -11, -21, -36, -39, -33, -21, 32, //7408
43, 34, 28, 21, 23, 24, -1, -7, 6, 11, 20, 41, 62, 62, 41, 17, //7424
12, 8, -8, -19, -39, -50, -29, -23, -15, -4, -7, -46, -57, -40, -26, -36, //7440
-40, -16, -3, 18, 27, 20, 22, -6, -24, -11, -3, -10, -9, 6, 15, 19, //7456
21, 15, 7, -1, 6, 19, 28, 52, 33, 21, 25, 39, 54, 33, 23, 12, //7472
3, -21, -36, -35, -43, -37, -54, -65, -52, -40, -33, -42, -35, -19, -27, -31, //7488
-21, -1, 4, -5, 19, 27, 16, 3, -17, -16, -10, -9, -8, -22, -32, -23, //7504
1, 31, 50, 65, 62, 46, 50, 56, 55, 38, 18, 16, 17, 20, 22, 29, //7520
61, 55, 24, -5, -32, -29, -1, -2, -10, -25, -37, -54, -41, -21, -3, 14, //7536
2, -30, -39, -44, -39, -22, 4, 17, 12, 4, -6, -18, -31, -34, -27, -5, //7552
2, -9, -11, 4, 21, 32, 29, 9, -9, -2, 4, 5, -1, 0, 30, 61, //7568
54, 57, 67, 23, 6, -31, -34, -4, 1, -2, -23, -19, -1, 3, 5, -30, //7584
-56, -59, -49, -31, 11, 37, 26, 16, 23, 7, -5, -21, -35, -17, -26, -48, //7600
-47, -28, 7, 19, 13, -29, -45, -57, -72, -71, -48, 1, 23, 54, 52, 41, //7616
36, 11, 1, -25, -40, -49, -48, 11, 68, 101, 104, 101, 69, 18, -13, -26, //7632
-29, -25, -18, -8, 12, 28, 46, 83, 74, 59, 51, 36, -16, -46, -49, -32, //7648
-8, 7, 12, 14, 8, -10, -13, -5, -10, -35, -44, -29, -29, -12, -1, -6, //7664
-28, -54, -56, -50, -39, -28, -27, -30, -23, 5, 17, 23, 22, 22, 8, 2, //7680
10, 19, 20, 12, 27, 45, 53, 40, 16, 17, 28, 12, 5, 9, -1, -33, //7696
-37, -17, 10, 21, 15, -4, -1, -9, -24, -23, -24, -22, -35, -44, -26, -9, //7712
-9, -12, 4, 4, -22, -34, -26, -1, 16, 15, 3, -12, -6, 17, 20, 15, //7728
20, 18, 9, -2, -5, -5, -4, -21, -25, 1, 11, -9, -18, -2, 14, 38, //7744
56, 46, 22, 11, 3, 10, 17, 15, 17, 13, 13, 17, 4, -6, -17, -6, //7760
7, 5, 14, 10, 9, -4, -15, -10, -17, -11, -21, -29, -43, -73, -79, -70, //7776
-34, -6, -10, -9, 9, 22, 14, -6, -18, -25, -23, -32, -27, -9, 9, 16, //7792
4, 12, 22, 35, 61, 79, 78, 65, 31, 10, 18, 38, 48, 39, 28, 32, //7808
9, -9, -29, -34, -27, -38, -24, -21, -12, 13, 12, 6, -5, -28, -49, -68, //7824
-61, -31, -19, -4, 9, 31, 40, 33, 31, 24, 10, -23, -44, -47, -51, -45, //7840
-25, 10, 49, 61, 36, 15, 6, -31, -55, -68, -65, -49, -42, -24, -6, 3, //7856
6, 6, 6, -2, 15, 27, 14, 9, 16, 40, 42, 19, -14, -47, -53, -32, //7872
-17, 6, 28, 46, 48, 74, 101, 84, 58, 39, 8, 3, -9, -4, 22, 36, //7888
51, 43, 11, -20, -44, -46, -38, -42, -32, -12, 8, 38, 28, 14, 4, -7, //7904
-14, -29, -33, -41, -41, -43, -43, -18, -8, -27, -44, -35, -22, -34, -42, -25, //7920
-7, -3, 33, 60, 71, 58, 36, 25, 9, -3, -9, -22, -18, -7, 16, 43, //7936
53, 58, 14, -13, -19, -23, -25, -17, 11, 7, -10, -23, -13, 13, 30, 21, //7952
1, 3, -4, -29, -38, -50, -29, 1, 20, 20, 2, -28, -66, -86, -95, -80, //7968
-47, -20, 2, 9, 3, 23, 29, 14, 0, -7, 1, 1, -10, -11, 9, 25, //7984
59, 67, 61, 62, 58, 48, 51, 46, 27, 14, 8, 3, 8, 8, 18, 21, //8000
18, 21, 14, 17, 19, 12, -26, -33, -32, -45, -50, -47, -28, -20, -18, };
