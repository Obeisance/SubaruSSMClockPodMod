/*these are adopted from the romraider logger definitions v253
use PROGMEM to save variable space except for the active DTCs
A 3D array, with the 1st index set the same as the request order 
of the ECU calls to tempDTCs and memDTCs addresses, the second
index set to the bit position of the DTC address, and the third
as the DTC code chars */

const char P0335[] PROGMEM = "P0335";
const char unkn[] PROGMEM = "unkn";
const char P0336[] PROGMEM = "P0336";
const char P0341[] PROGMEM = "P0341";
const char P0340[] PROGMEM = "P0340";
const char P0604[] PROGMEM = "P0604";
const char P0601[] PROGMEM = "P0601";

//0x0000AE and temp 0x00008E
//PROGMEM const char *addr0x0000AE[] = {P0335,unkn,P0336,P0341,P0340,unkn,P0604,P0601};

const char P0102[] PROGMEM = "P0102";
const char P0103[] PROGMEM = "P0103";
const char P1141[] PROGMEM = "P1141";
const char P0101[] PROGMEM = "P0101";
const char P0500[] PROGMEM = "P0500";
const char P1540[] PROGMEM = "P1540";
const char P0332[] PROGMEM = "P0332";
const char P0333[] PROGMEM = "P0333";

//0x0000AF and temp 0x00008F
//PROGMEM const char *addr0x0000AF[] = {P0102,P0103,P1141,P0101,P0500,P1540,P0332,P0333};

const char P0325[] PROGMEM = "P0325";
const char P0330[] PROGMEM = "P0330";
const char P0327[] PROGMEM = "P0327";
const char P0328[] PROGMEM = "P0328";
const char P0122[] PROGMEM = "P0122";
const char P0123[] PROGMEM = "P0123";
const char P1142[] PROGMEM = "P1142";
const char P0121[] PROGMEM = "P0121";

//0x0000B0 and temp 0x000090
//PROGMEM const char *addr0x0000B0[] = {P0325,P0330,P0327,P0328,P0122,P0123,P1142,P0121};

const char P0117[] PROGMEM = "P0117";
const char P0118[] PROGMEM = "P0118";
const char P0464[] PROGMEM = "P0464";
const char P0125[] PROGMEM = "P0125";
const char P0462[] PROGMEM = "P0462";
const char P0463[] PROGMEM = "P0463";
const char P0461[] PROGMEM = "P0461";
const char P1442[] PROGMEM = "P1442";

//0x0000B1 and temp 0x000091
//PROGMEM const char *addr0x0000B1[] = {P0117,P0118,P0464,P0125,P0462,P0463,P0461,P1442};

const char P0107[] PROGMEM = "P0107";
const char P0108[] PROGMEM = "P0108";
const char P0143[] PROGMEM = "P0143";
const char P0144[] PROGMEM = "P0144";
const char P0106[] PROGMEM = "P0106";
const char P0350[] PROGMEM = "P0350";
const char P1518[] PROGMEM = "P1518";
const char P0512[] PROGMEM = "P0512";

//0x0000B2 and temp 0x000092
//PROGMEM const char *addr0x0000B2[] = {P0107,P0108,P0143,P0144,P0106,P0350,P1518,P0512};

const char P0452[] PROGMEM = "P0452";
const char P0453[] PROGMEM = "P0453";
const char P0451[] PROGMEM = "P0451";
const char P1237[] PROGMEM = "P1237";
const char P1238[] PROGMEM = "P1238";
const char P1239[] PROGMEM = "P1238";
const char P1240[] PROGMEM = "P1240";

//0x0000B3 and temp 0x000093
//PROGMEM const char *addr0x0000B3[] = {P0452,P0453,unkn,P0451,P1237,P1238,P1239,P1240};

const char P1590[] PROGMEM = "P1590";
const char P1591[] PROGMEM = "P1591";
const char P1592[] PROGMEM = "P1592";
const char P0851[] PROGMEM = "P0851";
const char P0182[] PROGMEM = "P0182";
const char P0183[] PROGMEM = "P0183";
const char P0181[] PROGMEM = "P0181";
const char P0852[] PROGMEM = "P0852";

//0x0000B4 and temp 0x000094
//PROGMEM const char *addr0x0000B4[] = {P1590,P1591,P1592,P0851,P0182,P0183,P0181,P0852};

const char P1510[] PROGMEM = "P1510";
const char P1511[] PROGMEM = "P1511";
const char P1512[] PROGMEM = "P1512";
const char P1513[] PROGMEM = "P1513";
const char P1514[] PROGMEM = "P1514";
const char P1515[] PROGMEM = "P1515";
const char P1516[] PROGMEM = "P1516";
const char P1517[] PROGMEM = "P1517";

//0x0000B5 and temp 0x000095
//PROGMEM const char *addr0x0000B5[] = {P1510,P1511,P1512,P1513,P1514,P1515,P1516,P1517};

const char P1492[] PROGMEM = "P1492";
const char P1493[] PROGMEM = "P1493";
const char P1494[] PROGMEM = "P1494";
const char P1495[] PROGMEM = "P1495";
const char P1496[] PROGMEM = "P1496";
const char P1497[] PROGMEM = "P1497";
const char P1498[] PROGMEM = "P1498";
const char P1499[] PROGMEM = "P1499";

//0x0000B6 and temp 0x000096
//PROGMEM const char *addr0x0000B6[] = {P1492,P1493,P1494,P1495,P1496,P1497,P1498,P1499};

const char P1102[] PROGMEM = "P1102";
const char P1122[] PROGMEM = "P1122";
const char P1446[] PROGMEM = "P1446";
const char P1447[] PROGMEM = "P1447";
const char P1090[] PROGMEM = "P1090";
const char P1091[] PROGMEM = "P1091";
const char P1092[] PROGMEM = "P1092";
const char P1093[] PROGMEM = "P1093";

//0x0000B7 and temp 0x000097
//PROGMEM const char *addr0x0000B7[] = {P1102,P1122,P1446,P1447,P1090,P1091,P1092,P1093};

const char P0508[] PROGMEM = "P0508";
const char P0509[] PROGMEM = "P0509";
const char P1507[] PROGMEM = "P1507";
const char P0506[] PROGMEM = "P0506";
const char P0507[] PROGMEM = "P0507";
const char P1698[] PROGMEM = "P1698";
const char P1699[] PROGMEM = "P1699";
const char P1448[] PROGMEM = "P1448";

//0x0000B8 and temp 0x000098
//PROGMEM const char *addr0x0000B8[] = {P0508,P0509,P1507,P0506,P0507,P1698,P1699,P1448};

const char P0444[] PROGMEM = "P0444";
const char P0445[] PROGMEM = "P0445";
const char P0691[] PROGMEM = "P0691";
const char P0692[] PROGMEM = "P0692";
const char P0480[] PROGMEM = "P0480";
const char P1480[] PROGMEM = "P1480";
const char P0483[] PROGMEM = "P0483";
const char P0864[] PROGMEM = "P0864";

//0x0000B9 and temp 0x000099
//PROGMEM const char *addr0x0000B9[] = {P0444,P0445,P0691,P0692,P0480,P1480,P0483,P0864};

const char P0365[] PROGMEM = "P0365";
const char P0390[] PROGMEM = "P0390";
const char P0011[] PROGMEM = "P0011";
const char P0021[] PROGMEM = "P0021";
const char P1400[] PROGMEM = "P1400";
const char P1420[] PROGMEM = "P1420";
const char P0458[] PROGMEM = "P0458";
const char P0459[] PROGMEM = "P0459";

//0x0000BA and temp 0x00009A
//PROGMEM const char *addr0x0000BA[] = {P0365,P0390,P0011,P0021,P1400,P1420,P0458,P0459};

const char P0865[] PROGMEM = "P0865";
const char P0866[] PROGMEM = "P0866";
const char P1443[] PROGMEM = "P1443";
const char P1559[] PROGMEM = "P1559";
const char P0661[] PROGMEM = "P0661";
const char P0662[] PROGMEM = "P0662";
const char P0447[] PROGMEM = "P0447";
const char P0448[] PROGMEM = "P0448";

//0x0000BB and temp 0x00009B  
//PROGMEM const char *addr0x0000BB[] = {P0865,P0866,P1443,P1559,P0661,P0662,P0447,P0448};

const char P0720[] PROGMEM = "P0720";
const char P0725[] PROGMEM = "P0725";
const char P1700[] PROGMEM = "P1700";
const char P0710[] PROGMEM = "P0710";
const char P0705[] PROGMEM = "P0705";
const char P1701[] PROGMEM = "P1701";
const char P0703[] PROGMEM = "P0703";
const char P0741[] PROGMEM = "P0741";

//0x0000BC and temp 0x00009C 
//PROGMEM const char *addr0x0000BC[] = {P0720,P0725,P1700,P0710,P0705,P1701,P0703,P0741};

const char P0753[] PROGMEM = "P0753";
const char P0758[] PROGMEM = "P0758";
const char P1706[] PROGMEM = "P1706";
const char P0748[] PROGMEM = "P0748";
const char P0743[] PROGMEM = "P0743";
const char P0731[] PROGMEM = "P0731";
const char P0732[] PROGMEM = "P0732";
const char P0733[] PROGMEM = "P0733";

//0x0000BD and temp 0x00009D 
//PROGMEM const char *addr0x0000BD[] = {P0753,P0758,P1706,P0748,P0743,P0731,P0732,P0733};

const char P0734[] PROGMEM = "P0734";
const char P1707[] PROGMEM = "P1707";
const char P1595[] PROGMEM = "P1595";
const char P1596[] PROGMEM = "P1596";
const char P0135[] PROGMEM = "P0135";
const char P0141[] PROGMEM = "P0141";
const char P1593[] PROGMEM = "P1593";
const char P1594[] PROGMEM = "P1594";

//0x0000BE and temp 0x00009E  
//PROGMEM const char *addr0x0000BE[] = {P0734,P1707,P1595,P1596,P0135,P0141,P1593,P1594};

const char P0133[] PROGMEM = "P0133";
const char P0130[] PROGMEM = "P0130";
const char P0139[] PROGMEM = "P0139";
const char P0136[] PROGMEM = "P0136";
const char P1152[] PROGMEM = "P1152";
const char P1153[] PROGMEM = "P1153";
const char P0174[] PROGMEM = "P0174";
const char P0175[] PROGMEM = "P0175";

//0x0000BF and temp 0x00009F 
//PROGMEM const char *addr0x0000BF[] = {P0133,P0130,P0139,P0136,P1152,P1153,P0174,P0175};

const char P0420[] PROGMEM = "P0420";
const char P0442[] PROGMEM = "P0442";
const char P0170[] PROGMEM = "P0170";
const char P0456[] PROGMEM = "P0456";
const char P0400[] PROGMEM = "P0400";
const char P1230[] PROGMEM = "P1230";
const char P0171[] PROGMEM = "P0171";
const char P0172[] PROGMEM = "P0172";

//0x0000C0 and temp 0x0000A0  
//PROGMEM const char *addr0x0000C0[] = {P0420,P0442,P0170,P0456,P0400,P1230,P0171,P0172};

const char P0301[] PROGMEM = "P0301";
const char P0302[] PROGMEM = "P0302";
const char P0303[] PROGMEM = "P0303";
const char P0304[] PROGMEM = "P0304";
const char P0305[] PROGMEM = "P0305";
const char P0306[] PROGMEM = "P0306";
const char P1301[] PROGMEM = "P1301";
const char P0457[] PROGMEM = "P0457";

//0x0000C1 and temp 0x0000A1
//PROGMEM const char *addr0x0000C1[] = {P0301,P0302,P0303,P0304,P0305,P0306,P1301,P0457};

const char P0000[] PROGMEM = "P0000";
const char P1235[] PROGMEM = "P1235";
const char P1236[] PROGMEM = "P1236";
const char P1597[] PROGMEM = "P1597";
const char P1598[] PROGMEM = "P1598";
const char P0034[] PROGMEM = "P0034";
const char P0035[] PROGMEM = "P0035";

//0x0000C2 and temp 0x0000A2
//PROGMEM const char *addr0x0000C2[] = {P0000,P0000,P1235,P1236,P1597,P1598,P0034,P0035};

const char P0137[] PROGMEM = "P0137";
const char P1134[] PROGMEM = "P1134";
const char P0131[] PROGMEM = "P0131";
const char P0151[] PROGMEM = "P0151";
const char P0132[] PROGMEM = "P0132";
const char P0152[] PROGMEM = "P0152";
const char P0138[] PROGMEM = "P0138";
const char P0153[] PROGMEM = "P0153";

//0x0000C3 and temp 0x0000A3
//PROGMEM const char *addr0x0000C3[] = {P0137,P1134,P0131,P0151,P0132,P0152,P0138,P0153};

const char P0112[] PROGMEM = "P0112";
const char P0113[] PROGMEM = "P0113";
const char P0111[] PROGMEM = "P0111";
const char P1546[] PROGMEM = "P1546";
const char P0038[] PROGMEM = "P0038";
const char P0032[] PROGMEM = "P0032";
const char P0037[] PROGMEM = "P0037";
const char P0031[] PROGMEM = "P0031";

//0x0000C4 and temp 0x0000A4
//PROGMEM const char *addr0x0000C4[] = {P0112,P0113,P0111,P1546,P0038,P0032,P0037,P0031};

const char P1110[] PROGMEM = "P1110";
const char P1111[] PROGMEM = "P1111";
const char P1112[] PROGMEM = "P1112";
//const char P0106[] PROGMEM = "P0106";
//const char P0107[] PROGMEM = "P0107";
//const char P0108[] PROGMEM = "P0108";
const char P1545[] PROGMEM = "P1545";
const char P1146[] PROGMEM = "P1146";

//0x0000C5 and temp 0x0000A5
//PROGMEM const char *addr0x0000C5[] = {P1110,P1111,P1112,P0106,P0107,P0108,P1545,P1146};

const char P1139[] PROGMEM = "P1139";
const char P1140[] PROGMEM = "P1140";
const char P1711[] PROGMEM = "P1711";
const char P1712[] PROGMEM = "P1712";
const char P0715[] PROGMEM = "P0715";
const char P1703[] PROGMEM = "P1703";
const char P0785[] PROGMEM = "P0785";
const char P0778[] PROGMEM = "P0778";

//0x0000C6 and temp 0x0000A6
//PROGMEM const char *addr0x0000C6[] = {P1139,P1140,P1711,P1712,P0715,P1703,P0785,P0778};

const char P1130[] PROGMEM = "P1130";
const char P1135[] PROGMEM = "P1135";
const char P1131[] PROGMEM = "P1131";
const char P1136[] PROGMEM = "P1136";
const char P1154[] PROGMEM = "P1154";
const char P1155[] PROGMEM = "P1155";
const char P0052[] PROGMEM = "P0052";
const char P0051[] PROGMEM = "P0051";

//0x0000C7 and temp 0x0000A7
//PROGMEM const char *addr0x0000C7[] = {P1130,P1135,P1131,P1136,P1154,P1155,P0052,P0051};

const char P0128[] PROGMEM = "P0128";
const char P1491[] PROGMEM = "P1491";
const char P0066[] PROGMEM = "P0066";
const char P0067[] PROGMEM = "P0067";
const char P0065[] PROGMEM = "P0065";
//const char P0130[] PROGMEM = "P0130";
const char P1137[] PROGMEM = "P1137";

//0x0000C8 and temp 0x0000A8
//PROGMEM const char *addr0x0000C8[] = {P0128,P1491,P0066,P0067,P0065,P0130,P1137,P1137};

const char P1248[] PROGMEM = "P1248";
const char P1249[] PROGMEM = "P1249";
const char P1250[] PROGMEM = "P1250";
const char P1560[] PROGMEM = "P1560";
const char P0192[] PROGMEM = "P0192";
const char P0193[] PROGMEM = "P0193";
const char P0562[] PROGMEM = "P0562";
const char P0563[] PROGMEM = "P0563";

//0x0000C9 and temp 0x0000A9
//PROGMEM const char *addr0x0000C9[] = {P1248,P1249,P1250,P1560,P0192,P0193,P0562,P0563};

const char P0245[] PROGMEM = "P0245";
const char P0246[] PROGMEM = "P0246";
const char P1244[] PROGMEM = "P1244";
const char P0244[] PROGMEM = "P0244";
const char P1245[] PROGMEM = "P1245";
const char P0249[] PROGMEM = "P0249";
const char P0250[] PROGMEM = "P0250";
const char P1247[] PROGMEM = "P1247";

//0x0000CA and temp 0x0000AA
//PROGMEM const char *addr0x0000CA[] = {P0245,P0246,P1244,P0244,P1245,P0249,P0250,P1247};

const char P1577[] PROGMEM = "P1577";
const char P1576[] PROGMEM = "P1576";
const char P0513[] PROGMEM = "P0513";
const char P1574[] PROGMEM = "P1574";
const char P1578[] PROGMEM = "P1578";
const char P1572[] PROGMEM = "P1572";
const char P1571[] PROGMEM = "P1571";
const char P1570[] PROGMEM = "P1570";

//0x0000CB and temp 0x0000AB
//PROGMEM const char *addr0x0000CB[] = {P1577,P1576,P0513,P1574,P1578,P1572,P1571,P1570};

const char P1095[] PROGMEM = "P1095";
const char P1097[] PROGMEM = "P1097";
const char P1094[] PROGMEM = "P1094";
const char P1096[] PROGMEM = "P1096";
const char P0261[] PROGMEM = "P0261";
const char P0264[] PROGMEM = "P0264";
const char P0267[] PROGMEM = "P0267";
const char P0270[] PROGMEM = "P0270";

//0x0000CC and temp 0x0000AC
//PROGMEM const char *addr0x0000CC[] = {P1095,P1097,P1094,P1096,P0261,P0264,P0267,P0270};

const char P0545[] PROGMEM = "P0545";
const char P0546[] PROGMEM = "P0546";
const char P1312[] PROGMEM = "P1312";
const char P1544[] PROGMEM = "P1544";
const char P1306[] PROGMEM = "P1306";
const char P1308[] PROGMEM = "P1308";
const char P1307[] PROGMEM = "P1307";
const char P1309[] PROGMEM = "P1309";

//0x0000CD and temp 0x0000AD
//PROGMEM const char *addr0x0000CD[] = {P0545,P0546,P1312,P1544,P1306,P1308,P1307,P1309};

const char P1719[] PROGMEM = "P1719";
const char P1242[] PROGMEM = "P1242";
const char P1241[] PROGMEM = "P1241";
const char P1199[] PROGMEM = "P1199";
const char P1086[] PROGMEM = "P1086";
const char P1087[] PROGMEM = "P1087";
const char P1088[] PROGMEM = "P1088";
const char P1089[] PROGMEM = "P1089";

//0x0000F4 and temp 0x0000F0
//PROGMEM const char *addr0x0000F4[] = {P1719,P1242,P1241,P1199,P1086,P1087,P1088,P1089};

const char P0801[] PROGMEM = "P0801";
const char P0768[] PROGMEM = "P0768";
const char P0763[] PROGMEM = "P0763";
const char P0736[] PROGMEM = "P0736";
const char P0724[] PROGMEM = "P0724";
const char P0719[] PROGMEM = "P0719";
const char P0713[] PROGMEM = "P0713";
const char P0712[] PROGMEM = "P0712";

//0x0000F5 and temp 0x0000F1
//PROGMEM const char *addr0x0000F5[] = {P0801,P0768,P0763,P0736,P0724,P0719,P0713,P0712};

const char P1817[] PROGMEM = "P1817";
const char P1762[] PROGMEM = "P1762";
const char P1761[] PROGMEM = "P1761";
const char P1760[] PROGMEM = "P1760";
const char P1718[] PROGMEM = "P1718";
const char P1714[] PROGMEM = "P1714";
const char P1709[] PROGMEM = "P1709";
const char P1708[] PROGMEM = "P1708";

//0x0000F6 and temp 0x0000F2
//PROGMEM const char *addr0x0000F6[] = {P1817,P1762,P1761,P1760,P1718,P1714,P1709,P1708};

const char P1600[] PROGMEM = "P1600";
const char P2709[] PROGMEM = "P2709";
const char P0773[] PROGMEM = "P0773";
const char P0735[] PROGMEM = "P0735";
const char P1799[] PROGMEM = "P1799";
const char P1798[] PROGMEM = "P1798";
const char P1314[] PROGMEM = "P1314";
const char P1313[] PROGMEM = "P1313";

//0x0000F7 and temp 0x0000F3
//PROGMEM const char *addr0x0000F7[] = {P1600,P2709,P0773,P0735,P1799,P1798,P1314,P1313};

const char P1710[] PROGMEM = "P1710";
const char P1717[] PROGMEM = "P1717";
const char P1716[] PROGMEM = "P1716";
const char P0771[] PROGMEM = "P0771";
const char P0716[] PROGMEM = "P0716";
const char P0726[] PROGMEM = "P0726";
//const char P0720[] PROGMEM = "P0720";
const char P0722[] PROGMEM = "P0722";

//0x00012B and temp 0x000123
//PROGMEM const char *addr0x00012B[] = {P1710,P1717,P1716,P0771,P0716,P0726,P0720,P0722};

const char P2707[] PROGMEM = "P2707";
//const char P0771[] PROGMEM = "P0771";
const char P0766[] PROGMEM = "P0766";
const char P0761[] PROGMEM = "P0761";
const char P0756[] PROGMEM = "P0756";
const char P0751[] PROGMEM = "P0751";
const char P1769[] PROGMEM = "P1769";
const char P1282[] PROGMEM = "P1282";

//0x00012C and temp 0x000124
//PROGMEM const char *addr0x00012C[] = {P2707,P0771,P0766,P0761,P0756,P0751,P1769,P1282};

const char P1844[] PROGMEM = "P1844";
const char P1843[] PROGMEM = "P1843";
const char P1842[] PROGMEM = "P1842";
const char P1841[] PROGMEM = "P1841";
const char P1840[] PROGMEM = "P1840";
const char P1875[] PROGMEM = "P1875";
const char P0558[] PROGMEM = "P0558";
const char P0559[] PROGMEM = "P0559";

//0x00012D and temp 0x000125
//PROGMEM const char *addr0x00012D[] = {P1844,P1843,P1842,P1841,P1840,P1875,P0558,P0559};

const char P0502[] PROGMEM = "P0502";
const char P0230[] PROGMEM = "P0230";
const char P0565[] PROGMEM = "P0565";
const char P0068[] PROGMEM = "P0068";
const char P0129[] PROGMEM = "P0129";
const char P0519[] PROGMEM = "P0519";
const char P0345[] PROGMEM = "P0345";
//const char P0101[] PROGMEM = "P0101";

//0x00012E and temp 0x000126
//PROGMEM const char *addr0x00012E[] = {P0502,P0230,P0565,P0068,P0129,P0519,P0345,P0101};

const char P0154[] PROGMEM = "P0154";
const char P0134[] PROGMEM = "P0134";
const char P0150[] PROGMEM = "P0150";
//const char P0130[] PROGMEM = "P0130";
const char P0050[] PROGMEM = "P0050";
const char P0030[] PROGMEM = "P0030";
const char P0501[] PROGMEM = "P0501";
const char P0503[] PROGMEM = "P0503";

//0x00012F and temp 0x000127
//PROGMEM const char *addr0x00012F[] = {P0154,P0134,P0150,P0130,P0050,P0030,P0501,P0503};

const char P0142[] PROGMEM = "P0142";
const char P0145[] PROGMEM = "P0145";
const char P0156[] PROGMEM = "P0156";
const char P0159[] PROGMEM = "P0159";
const char P0162[] PROGMEM = "P0162";
const char P0165[] PROGMEM = "P0165";
const char P0043[] PROGMEM = "P0043";
const char P0044[] PROGMEM = "P0044";

//0x000130 and temp 0x000128
//PROGMEM const char *addr0x000130[] = {P0142,P0145,P0156,P0159,P0162,P0165,P0043,P0044};

const char P0057[] PROGMEM = "P0057";
const char P0058[] PROGMEM = "P0058";
const char P0063[] PROGMEM = "P0063";
const char P0064[] PROGMEM = "P0064";
const char P0157[] PROGMEM = "P0157";
const char P0158[] PROGMEM = "P0158";
//const char P0143[] PROGMEM = "P0143";
//const char P0144[] PROGMEM = "P0144";

//0x000131 and temp 0x000129
//PROGMEM const char *addr0x000131[] = {P0057,P0058,P0063,P0064,P0157,P0158,P0143,P0144};

const char P2109[] PROGMEM = "P2109";
const char P1759[] PROGMEM = "P1759";
const char P1873[] PROGMEM = "P1873";
const char P1872[] PROGMEM = "P1872";
const char P1871[] PROGMEM = "P1871";
const char P1870[] PROGMEM = "P1870";
const char P2125[] PROGMEM = "P2125";
//const char P1700[] PROGMEM = "P1700";

//0x000132 and temp 0x00012A
//PROGMEM const char *addr0x000132[] = {P2109,P1759,P1873,P1872,P1871,P1870,P2125,P1700};

const char P0222[] PROGMEM = "P0222";
const char P0223[] PROGMEM = "P0223";
const char P1160[] PROGMEM = "P1160";
const char P2102[] PROGMEM = "P2102";
const char P2103[] PROGMEM = "P2103";
const char P2101[] PROGMEM = "P2101";
const char P2096[] PROGMEM = "P2096";
const char P0638[] PROGMEM = "P0638";

//0x000155 and temp 0x000150
//PROGMEM const char *addr0x000155[] = {P0222,P0223,P1160,P2102,P2103,P2101,P2096,P0638};

const char P0607[] PROGMEM = "P0607";
const char P2138[] PROGMEM = "P2138";
const char P2127[] PROGMEM = "P2127";
const char P2128[] PROGMEM = "P2128";
const char P2122[] PROGMEM = "P2122";
const char P2123[] PROGMEM = "P2123";
const char P2135[] PROGMEM = "P2135";
const char P2097[] PROGMEM = "P2097";

//0x000156 and temp 0x000151
//PROGMEM const char *addr0x000156[] = {P0607,P2138,P2127,P2128,P2122,P2123,P2135,P2097};

const char P0600[] PROGMEM = "P0600";
//const char P0390[] PROGMEM = "P0390";
//const char P0365[] PROGMEM = "P0365";
//const char P0345[] PROGMEM = "P0345";
//const char P0340[] PROGMEM = "P0340";
const char P0605[] PROGMEM = "P0605";
const char P1521[] PROGMEM = "P1521";
const char P0579[] PROGMEM = "P0579";

//0x000157 and temp 0x000152
//PROGMEM const char *addr0x000157[] = {P0600,P0390,P0365,P0345,P0340,P0605,P1521,P0579};

const char P2095[] PROGMEM = "P2095";
const char P2094[] PROGMEM = "P2094";
const char P2091[] PROGMEM = "P2091";
const char P2090[] PROGMEM = "P2090";
const char P2093[] PROGMEM = "P2093";
const char P2092[] PROGMEM = "P2092";
const char P2089[] PROGMEM = "P2089";
const char P2088[] PROGMEM = "P2088";

//0x000158 and temp 0x000153
//PROGMEM const char *addr0x000158[] = {P2095,P2094,P2091,P2090,P2093,P2092,P2089,P2088};

const char P0197[] PROGMEM = "P0197";
const char P1547[] PROGMEM = "P1547";
const char P1476[] PROGMEM = "P1476";
const char P1475[] PROGMEM = "P1475";
const char P1477[] PROGMEM = "P1477";
const char P2099[] PROGMEM = "P2099";
const char P2098[] PROGMEM = "P2098";
const char P0700[] PROGMEM = "P0700";

//0x000159 and temp 0x000154
//PROGMEM const char *addr0x000159[] = {P0197,P1547,P1476,P1475,P1477,P2099,P2098,P0700};

const char P0028[] PROGMEM = "P0028";
const char P0083[] PROGMEM = "P0083";
const char P0082[] PROGMEM = "P0082";
const char P0026[] PROGMEM = "P0026";
const char P0077[] PROGMEM = "P0077";
const char P0076[] PROGMEM = "P0076";
const char P0196[] PROGMEM = "P0196";
const char P0198[] PROGMEM = "P0198";

//0x000165 and temp 0x000160
//PROGMEM const char *addr0x000165[] = {P0028,P0083,P0082,P0026,P0077,P0076,P0196,P0198};

const char P2100[] PROGMEM = "P2100";
const char P2111[] PROGMEM = "P2111";
const char P2504[] PROGMEM = "P2504";
const char P2503[] PROGMEM = "P2503";
const char P1462[] PROGMEM = "P1462";
const char P1463[] PROGMEM = "P1463";
const char P1028[] PROGMEM = "P1028";
const char P1026[] PROGMEM = "P1026";

//0x000166 and temp 0x000161
//PROGMEM const char *addr0x000166[] = {P2100,P2111,P2504,P2503,P1462,P1463,P1028,P1026};

const char P0958[] PROGMEM = "P0958";
const char P0957[] PROGMEM = "P0957";
const char P0955[] PROGMEM = "P0955";
const char P0883[] PROGMEM = "P0883";
const char P0882[] PROGMEM = "P0882";
const char P0880[] PROGMEM = "P0880";
const char P0817[] PROGMEM = "P0817";
const char P1601[] PROGMEM = "P1601";

//0x000167 and temp 0x000162
//PROGMEM const char *addr0x000167[] = {P0958,P0957,P0955,P0883,P0882,P0880,P0817,P1601};

const char P2004[] PROGMEM = "P2004";
const char P2006[] PROGMEM = "P2006";
const char P2005[] PROGMEM = "P2005";
const char P2007[] PROGMEM = "P2007";
const char P2227[] PROGMEM = "P2227";
const char P0126[] PROGMEM = "P0126";
const char P2229[] PROGMEM = "P2229";
const char P2228[] PROGMEM = "P2228";

//0x000168 and temp 0x000163
//PROGMEM const char *addr0x000168[] = {P2004,P2006,P2005,P2007,P2227,P0126,P2229,P2228};

const char P2016[] PROGMEM = "P2016";
const char P2017[] PROGMEM = "P2017";
const char P2021[] PROGMEM = "P2021";
const char P2022[] PROGMEM = "P2022";
const char P2009[] PROGMEM = "P2009";
const char P2012[] PROGMEM = "P2012";
const char P2008[] PROGMEM = "P2008";
const char P2011[] PROGMEM = "P2011";

//0x000169 and temp 0x000164
//PROGMEM const char *addr0x000169[] = {P2016,P2017,P2021,P2022,P2009,P2012,P2008,P2011};

//These arrays line up with the address calls to the ECU
PGM_P const DTCset1[][8] PROGMEM= {{P0335,unkn,P0336,P0341,P0340,unkn,P0604,P0601},
                                  {P0102,P0103,P1141,P0101,P0500,P1540,P0332,P0333}, 
                                  {P0325,P0330,P0327,P0328,P0122,P0123,P1142,P0121},
                                  {P0117,P0118,P0464,P0125,P0462,P0463,P0461,P1442},
                                  {P0107,P0108,P0143,P0144,P0106,P0350,P1518,P0512}, 
                                  {P0452,P0453,unkn,P0451,P1237,P1238,P1239,P1240}, 
                                  {P1590,P1591,P1592,P0851,P0182,P0183,P0181,P0852}, 
                                  {P1510,P1511,P1512,P1513,P1514,P1515,P1516,P1517},
                                  {P1492,P1493,P1494,P1495,P1496,P1497,P1498,P1499}, 
                                  {P1102,P1122,P1446,P1447,P1090,P1091,P1092,P1093}, 
                                  {P0508,P0509,P1507,P0506,P0507,P1698,P1699,P1448},
                                  {P0444,P0445,P0691,P0692,P0480,P1480,P0483,P0864}, 
                                  {P0365,P0390,P0011,P0021,P1400,P1420,P0458,P0459}, 
                                  {P0865,P0866,P1443,P1559,P0661,P0662,P0447,P0448}, 
                                  {P0720,P0725,P1700,P0710,P0705,P1701,P0703,P0741}, 
                                  {P0753,P0758,P1706,P0748,P0743,P0731,P0732,P0733}, 
                                  {P0734,P1707,P1595,P1596,P0135,P0141,P1593,P1594}, 
                                  {P0133,P0130,P0139,P0136,P1152,P1153,P0174,P0175}, 
                                  {P0420,P0442,P0170,P0456,P0400,P1230,P0171,P0172}, 
                                  {P0301,P0302,P0303,P0304,P0305,P0306,P1301,P0457}, 
                                  {P0000,P0000,P1235,P1236,P1597,P1598,P0034,P0035}, 
                                  {P0137,P1134,P0131,P0151,P0132,P0152,P0138,P0153}, 
                                  {P0112,P0113,P0111,P1546,P0038,P0032,P0037,P0031}, 
                                  {P1110,P1111,P1112,P0106,P0107,P0108,P1545,P1146}, 
                                  {P1139,P1140,P1711,P1712,P0715,P1703,P0785,P0778}, 
                                  {P1130,P1135,P1131,P1136,P1154,P1155,P0052,P0051}, 
                                  {P0128,P1491,P0066,P0067,P0065,P0130,P1137,P1137}, 
                                  {P1248,P1249,P1250,P1560,P0192,P0193,P0562,P0563}, 
                                  {P0245,P0246,P1244,P0244,P1245,P0249,P0250,P1247}, 
                                  {P1577,P1576,P0513,P1574,P1578,P1572,P1571,P1570}, 
                                  {P1095,P1097,P1094,P1096,P0261,P0264,P0267,P0270}, 
                                  {P0545,P0546,P1312,P1544,P1306,P1308,P1307,P1309}};
                                  
PGM_P const DTCset2[][8] PROGMEM= {{P1719,P1242,P1241,P1199,P1086,P1087,P1088,P1089},
                                  {P0801,P0768,P0763,P0736,P0724,P0719,P0713,P0712},
                                  {P1817,P1762,P1761,P1760,P1718,P1714,P1709,P1708},
                                  {P1600,P2709,P0773,P0735,P1799,P1798,P1314,P1313},
                                  {P1710,P1717,P1716,P0771,P0716,P0726,P0720,P0722},
                                  {P2707,P0771,P0766,P0761,P0756,P0751,P1769,P1282},
                                  {P1844,P1843,P1842,P1841,P1840,P1875,P0558,P0559},
                                  {P0502,P0230,P0565,P0068,P0129,P0519,P0345,P0101},
                                  {P0154,P0134,P0150,P0130,P0050,P0030,P0501,P0503},
                                  {P0142,P0145,P0156,P0159,P0162,P0165,P0043,P0044},
                                  {P0057,P0058,P0063,P0064,P0157,P0158,P0143,P0144},
                                  {P2109,P1759,P1873,P1872,P1871,P1870,P2125,P1700},
                                  {P0222,P0223,P1160,P2102,P2103,P2101,P2096,P0638},
                                  {P0607,P2138,P2127,P2128,P2122,P2123,P2135,P2097},
                                  {P0600,P0390,P0365,P0345,P0340,P0605,P1521,P0579},
                                  {P2095,P2094,P2091,P2090,P2093,P2092,P2089,P2088},
                                  {P0197,P1547,P1476,P1475,P1477,P2099,P2098,P0700},
                                  {P0028,P0083,P0082,P0026,P0077,P0076,P0196,P0198},
                                  {P2100,P2111,P2504,P2503,P1462,P1463,P1028,P1026},
                                  {P0958,P0957,P0955,P0883,P0882,P0880,P0817,P1601},
                                  {P2004,P2006,P2005,P2007,P2227,P0126,P2229,P2228},
                                  {P2016,P2017,P2021,P2022,P2009,P2012,P2008,P2011}};
/*
From romraider logger defn 253
<dtcode id="D1" name="P0335 CRANKSHAFT POS. SENSOR A MALFUNCTION" desc="D1" tmpaddr="0x00008E" memaddr="0x0000AE" bit="0" />
                <dtcode id="D3" name="P0336 CRANKSHAFT POS. SENSOR A RANGE/PERF" desc="D3" tmpaddr="0x00008E" memaddr="0x0000AE" bit="2" />
                <dtcode id="D4" name="P0341 CAMSHAFT POS. SENSOR A RANGE/PERF" desc="D4" tmpaddr="0x00008E" memaddr="0x0000AE" bit="3" />
                <dtcode id="D5" name="P0340 CAMSHAFT POS. SENSOR A MALFUNCTION" desc="D5" tmpaddr="0x00008E" memaddr="0x0000AE" bit="4" />
                <dtcode id="D7" name="P0604 CONTROL MODULE RAM ERROR" desc="D7" tmpaddr="0x00008E" memaddr="0x0000AE" bit="6" />
                <dtcode id="D8" name="P0601 CONTROL MODULE MEMORY CHECKSUM ERROR" desc="D8" tmpaddr="0x00008E" memaddr="0x0000AE" bit="7" />
                <dtcode id="D9" name="P0102 MAF SENSOR LOW INPUT" desc="D9" tmpaddr="0x00008F" memaddr="0x0000AF" bit="0" />
                <dtcode id="D10" name="P0103 MAF SENSOR HIGH INPUT" desc="D10" tmpaddr="0x00008F" memaddr="0x0000AF" bit="1" />
                <dtcode id="D11" name="P1141 MAF SENSOR RANGE/PERF (LOW)" desc="D11" tmpaddr="0x00008F" memaddr="0x0000AF" bit="2" />
                <dtcode id="D12" name="P0101 MAF SENSOR RANGE/PERF" desc="D12" tmpaddr="0x00008F" memaddr="0x0000AF" bit="3" />
                <dtcode id="D13" name="P0500 VEHICLE SPEED SENSOR A" desc="D13" tmpaddr="0x00008F" memaddr="0x0000AF" bit="4" />
                <dtcode id="D14" name="P1540 VEHICLE SPEED SENSOR MALFUNCTION (LOW SPEED)" desc="D14" tmpaddr="0x00008F" memaddr="0x0000AF" bit="5" />
                <dtcode id="D15" name="P0332 KNOCK SENSOR 2 LOW INPUT" desc="D15" tmpaddr="0x00008F" memaddr="0x0000AF" bit="6" />
                <dtcode id="D16" name="P0333 KNOCK SENSOR 2 HIGH INPUT" desc="D16" tmpaddr="0x00008F" memaddr="0x0000AF" bit="7" />
                <dtcode id="D17" name="P0325 KNOCK SENSOR 1 MALFUNCTION" desc="D17" tmpaddr="0x000090" memaddr="0x0000B0" bit="0" />
                <dtcode id="D18" name="P0330 KNOCK SENSOR 2 MALFUNCTION" desc="D18" tmpaddr="0x000090" memaddr="0x0000B0" bit="1" />
                <dtcode id="D19" name="P0327 KNOCK SENSOR 1 LOW INPUT" desc="D19" tmpaddr="0x000090" memaddr="0x0000B0" bit="2" />
                <dtcode id="D20" name="P0328 KNOCK SENSOR 1 HIGH INPUT" desc="D20" tmpaddr="0x000090" memaddr="0x0000B0" bit="3" />
                <dtcode id="D21" name="P0122 TPS A LOW INPUT" desc="D21" tmpaddr="0x000090" memaddr="0x0000B0" bit="4" />
                <dtcode id="D22" name="P0123 TPS A HIGH INPUT" desc="D22" tmpaddr="0x000090" memaddr="0x0000B0" bit="5" />
                <dtcode id="D23" name="P1142 TPS RANGE/PERF (LOW)" desc="D23" tmpaddr="0x000090" memaddr="0x0000B0" bit="6" />
                <dtcode id="D24" name="P0121 TPS RANGE/PERF" desc="D24" tmpaddr="0x000090" memaddr="0x0000B0" bit="7" />
                <dtcode id="D25" name="P0117 COOLANT TEMP SENSOR LOW INPUT" desc="D25" tmpaddr="0x000091" memaddr="0x0000B1" bit="0" />
                <dtcode id="D26" name="P0118 COOLANT TEMP SENSOR HIGH INPUT" desc="D26" tmpaddr="0x000091" memaddr="0x0000B1" bit="1" />
                <dtcode id="D27" name="P0464 FUEL LEVEL SENSOR INTERMITTENT" desc="D27" tmpaddr="0x000091" memaddr="0x0000B1" bit="2" />
                <dtcode id="D28" name="P0125 INSUFFICIENT COOLANT TEMP (FUELING)" desc="D28" tmpaddr="0x000091" memaddr="0x0000B1" bit="3" />
                <dtcode id="D29" name="P0462 FUEL LEVEL SENSOR LOW INPUT" desc="D29" tmpaddr="0x000091" memaddr="0x0000B1" bit="4" />
                <dtcode id="D30" name="P0463 FUEL LEVEL SENSOR HIGH INPUT" desc="D30" tmpaddr="0x000091" memaddr="0x0000B1" bit="5" />
                <dtcode id="D31" name="P0461 FUEL LEVEL SENSOR RANGE/PERF" desc="D31" tmpaddr="0x000091" memaddr="0x0000B1" bit="6" />
                <dtcode id="D32" name="P1442 FUEL LEVEL SESNOR RANGE/PERF (TRAVEL DISTANCE)" desc="D32" tmpaddr="0x000091" memaddr="0x0000B1" bit="7" />
                <dtcode id="D33" name="P0107 MAP SENSOR LOW INPUT" desc="D33" tmpaddr="0x000092" memaddr="0x0000B2" bit="0" />
                <dtcode id="D34" name="P0108 MAP SENSOR HIGH INPUT" desc="D34" tmpaddr="0x000092" memaddr="0x0000B2" bit="1" />
                <dtcode id="D35" name="P1143 MAP SENSOR RANGE/PERF (LOW)" desc="D35" tmpaddr="0x000092" memaddr="0x0000B2" bit="2" />
                <dtcode id="D36" name="P1144 MAP SENSOR RANGE/PERF (HIGH)" desc="D36" tmpaddr="0x000092" memaddr="0x0000B2" bit="3" />
                <dtcode id="D37" name="P0106 MAP SENSOR RANGE/PERF" desc="D37" tmpaddr="0x000092" memaddr="0x0000B2" bit="4" />
                <dtcode id="D38" name="P0350 IGNITION COIL PRIMARY/SECONDARY" desc="D38" tmpaddr="0x000092" memaddr="0x0000B2" bit="5" />
                <dtcode id="D39" name="P1518 STARTER SWITCH LOW INPUT" desc="D39" tmpaddr="0x000092" memaddr="0x0000B2" bit="6" />
                <dtcode id="D40" name="P0512 STARTER REQUEST CIRCUIT" desc="D40" tmpaddr="0x000092" memaddr="0x0000B2" bit="7" />
                <dtcode id="D41" name="P0452 EVAP PRESSURE SENSOR LOW INPUT" desc="D41" tmpaddr="0x000093" memaddr="0x0000B3" bit="0" />
                <dtcode id="D42" name="P0453 EVAP PRESSURE SENSOR HIGH INPUT" desc="D42" tmpaddr="0x000093" memaddr="0x0000B3" bit="1" />
                <dtcode id="D44" name="P0451 EVAP PRESSURE SENSOR RANGE/PERF" desc="D44" tmpaddr="0x000093" memaddr="0x0000B3" bit="3" />
                <dtcode id="D45" name="P1237 ECV SOLENOID CIRCUIT LOW (POSITIVE PRES)" desc="D45" tmpaddr="0x000093" memaddr="0x0000B3" bit="4" />
                <dtcode id="D46" name="P1238 ECV SOLENOID CIRCUIT HIGH (POSITIVE PRES)" desc="D46" tmpaddr="0x000093" memaddr="0x0000B3" bit="5" />
                <dtcode id="D47" name="P1239 ECV SOLENOID CIRCUIT LOW (NEGATIVE PRES)" desc="D47" tmpaddr="0x000093" memaddr="0x0000B3" bit="6" />
                <dtcode id="D48" name="P1240 ECV SOLENOID CIRCUIT HIGH (NEGATIVE PRES)" desc="D48" tmpaddr="0x000093" memaddr="0x0000B3" bit="7" />
                <dtcode id="D49" name="P1590 NEUTRAL SWITCH HIGH (AT)" desc="D49" tmpaddr="0x000094" memaddr="0x0000B4" bit="0" />
                <dtcode id="D50" name="P1591 NEUTRAL SWITCH LOW (AT)" desc="D50" tmpaddr="0x000094" memaddr="0x0000B4" bit="1" />
                <dtcode id="D51" name="P1592 NEUTRAL SWITCH MALFUNCTION (MT)" desc="D51" tmpaddr="0x000094" memaddr="0x0000B4" bit="2" />
                <dtcode id="D52" name="P0851 NEUTRAL SWITCH INPUT LOW" desc="D52" tmpaddr="0x000094" memaddr="0x0000B4" bit="3" />
                <dtcode id="D53" name="P0182 FUEL TEMP SENSOR A LOW INPUT" desc="D53" tmpaddr="0x000094" memaddr="0x0000B4" bit="4" />
                <dtcode id="D54" name="P0183 FUEL TEMP SENSOR A HIGH INPUT" desc="D54" tmpaddr="0x000094" memaddr="0x0000B4" bit="5" />
                <dtcode id="D55" name="P0181 FUEL TEMP SENSOR A RANGE/PERF" desc="D55" tmpaddr="0x000094" memaddr="0x0000B4" bit="6" />
                <dtcode id="D56" name="P0852 NEUTRAL SWITCH INPUT HIGH" desc="D56" tmpaddr="0x000094" memaddr="0x0000B4" bit="7" />
                <dtcode id="D57" name="P1510 ISC SOLENOID SIGNAL 1 MALFUNCTION (LOW)" desc="D57" tmpaddr="0x000095" memaddr="0x0000B5" bit="0" />
                <dtcode id="D58" name="P1511 ISC SOLENOID SIGNAL 1 MALFUNCTION (HIGH)" desc="D58" tmpaddr="0x000095" memaddr="0x0000B5" bit="1" />
                <dtcode id="D59" name="P1512 ISC SOLENOID SIGNAL 2 MALFUNCTION (LOW)" desc="D59" tmpaddr="0x000095" memaddr="0x0000B5" bit="2" />
                <dtcode id="D60" name="P1513 ISC SOLENOID SIGNAL 2 MALFUNCTION (HIGH)" desc="D60" tmpaddr="0x000095" memaddr="0x0000B5" bit="3" />
                <dtcode id="D61" name="P1514 ISC SOLENOID SIGNAL 3 MALFUNCTION (LOW)" desc="D61" tmpaddr="0x000095" memaddr="0x0000B5" bit="4" />
                <dtcode id="D62" name="P1515 ISC SOLENOID SIGNAL 3 MALFUNCTION (HIGH)" desc="D62" tmpaddr="0x000095" memaddr="0x0000B5" bit="5" />
                <dtcode id="D63" name="P1516 ISC SOLENOID SIGNAL 4 MALFUNCTION (LOW)" desc="D63" tmpaddr="0x000095" memaddr="0x0000B5" bit="6" />
                <dtcode id="D64" name="P1517 ISC SOLENOID SIGNAL 4 MALFUNCTION (HIGH)" desc="D64" tmpaddr="0x000095" memaddr="0x0000B5" bit="7" />
                <dtcode id="D65" name="P1492 EGR SOLENOID SIGNAL 1 MALFUNCTION (LOW)" desc="D65" tmpaddr="0x000096" memaddr="0x0000B6" bit="0" />
                <dtcode id="D66" name="P1493 EGR SOLENOID SIGNAL 1 MALFUNCTION (HIGH)" desc="D66" tmpaddr="0x000096" memaddr="0x0000B6" bit="1" />
                <dtcode id="D67" name="P1494 EGR SOLENOID SIGNAL 2 MALFUNCTION (LOW)" desc="D67" tmpaddr="0x000096" memaddr="0x0000B6" bit="2" />
                <dtcode id="D68" name="P1495 EGR SOLENOID SIGNAL 2 MALFUNCTION (HIGH)" desc="D68" tmpaddr="0x000096" memaddr="0x0000B6" bit="3" />
                <dtcode id="D69" name="P1496 EGR SIGNAL 3 CIRCUIT LOW" desc="D69" tmpaddr="0x000096" memaddr="0x0000B6" bit="4" />
                <dtcode id="D70" name="P1497 EGR SOLENOID SIGNAL 3 MALFUNCTION (HIGH)" desc="D70" tmpaddr="0x000096" memaddr="0x0000B6" bit="5" />
                <dtcode id="D71" name="P1498 EGR SIGNAL 4 CIRCUIT LOW" desc="D71" tmpaddr="0x000096" memaddr="0x0000B6" bit="6" />
                <dtcode id="D72" name="P1499 EGR SIGNAL 4 CIRCUIT HIGH" desc="D72" tmpaddr="0x000096" memaddr="0x0000B6" bit="7" />
                <dtcode id="D73" name="P1102 PRESSURE SOURCE SWITCH SOLENOID (LOW)" desc="D73" tmpaddr="0x000097" memaddr="0x0000B7" bit="0" />
                <dtcode id="D74" name="P1122 PRESSURE SOURCE SWITCH SOLENOID (HIGH)" desc="D74" tmpaddr="0x000097" memaddr="0x0000B7" bit="1" />
                <dtcode id="D75" name="P1446 FUEL TANK SENSOR CONTROL CIRCUIT LOW" desc="D75" tmpaddr="0x000097" memaddr="0x0000B7" bit="2" />
                <dtcode id="D76" name="P1447 FUEL TANK SENSOR CONTROL CIRCUIT HIGH" desc="D76" tmpaddr="0x000097" memaddr="0x0000B7" bit="3" />
                <dtcode id="D77" name="P1090 TGV SYSTEM 1 (VALVE OPEN)" desc="D77" tmpaddr="0x000097" memaddr="0x0000B7" bit="4" />
                <dtcode id="D78" name="P1091 TGV SYSTEM 1 (VALVE CLOSE)" desc="D78" tmpaddr="0x000097" memaddr="0x0000B7" bit="5" />
                <dtcode id="D79" name="P1092 TGV SYSTEM 2 (VALVE OPEN)" desc="D79" tmpaddr="0x000097" memaddr="0x0000B7" bit="6" />
                <dtcode id="D80" name="P1093 TGV SYSTEM 2 (VALVE CLOSE)" desc="D80" tmpaddr="0x000097" memaddr="0x0000B7" bit="7" />
                <dtcode id="D81" name="P0508 IDLE CONTROL CIRCUIT LOW" desc="D81" tmpaddr="0x000098" memaddr="0x0000B8" bit="0" />
                <dtcode id="D82" name="P0509 IDLE CONTROL CIRCUIT HIGH" desc="D82" tmpaddr="0x000098" memaddr="0x0000B8" bit="1" />
                <dtcode id="D83" name="P1507 IDLE CONTROL MALFUNCTION (FAIL-SAFE)" desc="D83" tmpaddr="0x000098" memaddr="0x0000B8" bit="2" />
                <dtcode id="D84" name="P0506 IDLE CONTROL RPM LOWER THAN EXPECTED" desc="D84" tmpaddr="0x000098" memaddr="0x0000B8" bit="3" />
                <dtcode id="D85" name="P0507 IDLE CONTROL RPM HIGH THAN EXPECTED" desc="D85" tmpaddr="0x000098" memaddr="0x0000B8" bit="4" />
                <dtcode id="D86" name="P1698 ENGINE TORQUE CUT MALFUNCTION (LOW)" desc="D86" tmpaddr="0x000098" memaddr="0x0000B8" bit="5" />
                <dtcode id="D87" name="P1699 ENGINE TORQUE CUT MALFUNCTION (HIGH)" desc="D87" tmpaddr="0x000098" memaddr="0x0000B8" bit="6" />
                <dtcode id="D88" name="P1448 FUEL TANK SENSOR CONTROL RANGE/PERF" desc="D88" tmpaddr="0x000098" memaddr="0x0000B8" bit="7" />
                <dtcode id="D89" name="P0444 EVAP EMISSION CONTROL SYSTEM PURGE CONTROL VALVE CIRCUIT LOW" desc="D89" tmpaddr="0x000099" memaddr="0x0000B9" bit="0" />
                <dtcode id="D90" name="P0445 EVAP EMISSION CONTROL SYSTEM PURGE CONTROL VALVE CIRCUIT SHORTED" desc="D90" tmpaddr="0x000099" memaddr="0x0000B9" bit="1" />
                <dtcode id="D91" name="P0691 RADIATOR FAN CIRCUIT LOW" desc="D91" tmpaddr="0x000099" memaddr="0x0000B9" bit="2" />
                <dtcode id="D92" name="P0692 RADIATOR FAN CIRCUIT HIGH" desc="D92" tmpaddr="0x000099" memaddr="0x0000B9" bit="3" />
                <dtcode id="D93" name="P0480 RADIATOR FAN RELAY 1 CIRCUIT (LOW)" desc="D93" tmpaddr="0x000099" memaddr="0x0000B9" bit="4" />
                <dtcode id="D94" name="P1480 RADIATOR FAN RELAY 1 CIRCUIT (HIGH)" desc="D94" tmpaddr="0x000099" memaddr="0x0000B9" bit="5" />
                <dtcode id="D95" name="P0483 RADIATOR FAN RATIONALITY CHECK" desc="D95" tmpaddr="0x000099" memaddr="0x0000B9" bit="6" />
                <dtcode id="D96" name="P0864 TCM COMMUNICATION RANGE/PERF" desc="D96" tmpaddr="0x000099" memaddr="0x0000B9" bit="7" />
                <dtcode id="D97" name="P0365 CAMSHAFT POS. SENSOR B BANK 1" desc="D97" tmpaddr="0x00009A" memaddr="0x0000BA" bit="0" />
                <dtcode id="D98" name="P0390 CAMSHAFT POS. SENSOR B BANK 2" desc="D98" tmpaddr="0x00009A" memaddr="0x0000BA" bit="1" />
                <dtcode id="D99" name="P0011 CAMSHAFT POS. - TIMING OVER-ADVANCED 1" desc="D99" tmpaddr="0x00009A" memaddr="0x0000BA" bit="2" />
                <dtcode id="D100" name="P0021 CAMSHAFT POS. - TIMING OVER-ADVANCED 2" desc="D100" tmpaddr="0x00009A" memaddr="0x0000BA" bit="3" />
                <dtcode id="D101" name="P1400 FUEL TANK PRESSURE SOL. LOW" desc="D101" tmpaddr="0x00009A" memaddr="0x0000BA" bit="4" />
                <dtcode id="D102" name="P1420 FUEL TANK PRESSURE SOL. HIGH INPUT" desc="D102" tmpaddr="0x00009A" memaddr="0x0000BA" bit="5" />
                <dtcode id="D103" name="P0458 EVAP PURGE VALVE CIRCUIT LOW" desc="D103" tmpaddr="0x00009A" memaddr="0x0000BA" bit="6" />
                <dtcode id="D104" name="P0459 EVAP PURGE VALVE CIRCUIT HIGH" desc="D104" tmpaddr="0x00009A" memaddr="0x0000BA" bit="7" />
                <dtcode id="D105" name="P0865 TCM COMMUNICATION CIRCUIT LOW" desc="D105" tmpaddr="0x00009B" memaddr="0x0000BB" bit="0" />
                <dtcode id="D106" name="P0866 TCM COMMUNICATION CIRCUIT HIGH" desc="D106" tmpaddr="0x00009B" memaddr="0x0000BB" bit="1" />
                <dtcode id="D107" name="P1443 VENT CONTROL SOLENOID FUNCTION PROBLEM" desc="D107" tmpaddr="0x00009B" memaddr="0x0000BB" bit="2" />
                <dtcode id="D108" name="P1559 AIR INTAKE SYSTEM" desc="D108" tmpaddr="0x00009B" memaddr="0x0000BB" bit="3" />
                <dtcode id="D109" name="P0661 INTAKE MANIFOLD TUNING CIRCUIT (LOW)" desc="D109" tmpaddr="0x00009B" memaddr="0x0000BB" bit="4" />
                <dtcode id="D110" name="P0662 INTAKE MANIFOLD TUNING CIRCUIT (HIGH)" desc="D110" tmpaddr="0x00009B" memaddr="0x0000BB" bit="5" />
                <dtcode id="D111" name="P0447 EVAP VENT CONTROL CIRCUIT OPEN" desc="D111" tmpaddr="0x00009B" memaddr="0x0000BB" bit="6" />
                <dtcode id="D112" name="P0448 EVAP VENT CONTROL CIRCUIT SHORTED" desc="D112" tmpaddr="0x00009B" memaddr="0x0000BB" bit="7" />
                <dtcode id="D113" name="P0720 AT VEHICLE SPEED SENSOR HIGH" desc="D113" tmpaddr="0x00009C" memaddr="0x0000BC" bit="0" />
                <dtcode id="D114" name="P0725 ENGINE SPEED INPUT CIRCUIT MALFUNCTION" desc="D114" tmpaddr="0x00009C" memaddr="0x0000BC" bit="1" />
                <dtcode id="D115" name="P1700 THROTTLE POSITION SENSOR CIRCUIT MALFUNCTION FOR AT" desc="D115" tmpaddr="0x00009C" memaddr="0x0000BC" bit="2" />
                <dtcode id="D116" name="P0710 ATF TEMP SENSOR MALFUNCTION" desc="D116" tmpaddr="0x00009C" memaddr="0x0000BC" bit="3" />
                <dtcode id="D117" name="P0705 TRANSMISSION RANGE SENSOR MALFUNCTION" desc="D117" tmpaddr="0x00009C" memaddr="0x0000BC" bit="4" />
                <dtcode id="D118" name="P1701 CRUISE CONTROL SET SIGNAL CIRCUIT MALFUNCTION FOR AT" desc="D118" tmpaddr="0x00009C" memaddr="0x0000BC" bit="5" />
                <dtcode id="D119" name="P0703 BRAKE SWITCH INPUT MALFUNCTION" desc="D119" tmpaddr="0x00009C" memaddr="0x0000BC" bit="6" />
                <dtcode id="D120" name="P0741 TORQUE CONVERTER CLUTCH MALFUNCTION" desc="D120" tmpaddr="0x00009C" memaddr="0x0000BC" bit="7" />
                <dtcode id="D121" name="P0753 SHIFT SOLENOID A ELECTRICAL" desc="D121" tmpaddr="0x00009D" memaddr="0x0000BD" bit="0" />
                <dtcode id="D122" name="P0758 SHIFT SOLENOID B ELECTRICAL" desc="D122" tmpaddr="0x00009D" memaddr="0x0000BD" bit="1" />
                <dtcode id="D123" name="P1706 AT VEHICLE SPEED SENSOR CIRCUIT MALFUNCTION (REAR WHEEL)" desc="D123" tmpaddr="0x00009D" memaddr="0x0000BD" bit="2" />
                <dtcode id="D124" name="P0748 PRESSURE CONTROL LINE PRESSURE DUTY SOLENOID" desc="D124" tmpaddr="0x00009D" memaddr="0x0000BD" bit="3" />
                <dtcode id="D125" name="P0743 TORQUE CONVERTER CLUTCH LOCK-UP DUTY SOLENOID" desc="D125" tmpaddr="0x00009D" memaddr="0x0000BD" bit="4" />
                <dtcode id="D126" name="P0731 GEAR 1 INCORRECT RATIO" desc="D126" tmpaddr="0x00009D" memaddr="0x0000BD" bit="5" />
                <dtcode id="D127" name="P0732 GEAR 2 INCORRECT RATIO" desc="D127" tmpaddr="0x00009D" memaddr="0x0000BD" bit="6" />
                <dtcode id="D128" name="P0733 GEAR 3 INCORRECT RATIO" desc="D128" tmpaddr="0x00009D" memaddr="0x0000BD" bit="7" />
                <dtcode id="D129" name="P0734 GEAR 4 INCORRECT RATIO" desc="D129" tmpaddr="0x00009E" memaddr="0x0000BE" bit="0" />
                <dtcode id="D130" name="P1707 AT AWD SOLENOID VALVE CIRCUIT MALFUNCTION" desc="D130" tmpaddr="0x00009E" memaddr="0x0000BE" bit="1" />
                <dtcode id="D131" name="P1595 AT DIAGNOSTICS INPUT SIGNAL (LOW)" desc="D131" tmpaddr="0x00009E" memaddr="0x0000BE" bit="2" />
                <dtcode id="D132" name="P1596 AT DIAGNOSTICS INPUT SIGNAL (HIGH)" desc="D132" tmpaddr="0x00009E" memaddr="0x0000BE" bit="3" />
                <dtcode id="D133" name="P0135 REAR O2 SENSOR MALFUNCTION B1 S1" desc="D133" tmpaddr="0x00009E" memaddr="0x0000BE" bit="4" />
                <dtcode id="D134" name="P0141 REAR O2 SENSOR MALFUNCTION" desc="D134" tmpaddr="0x00009E" memaddr="0x0000BE" bit="5" />
                <dtcode id="D135" name="P1593 TCM COMMUNICATION MALFUNCTION" desc="D135" tmpaddr="0x00009E" memaddr="0x0000BE" bit="6" />
                <dtcode id="D136" name="P1594 AT DIAGNOSTICS INPUT SIGNAL MALFUNCTION" desc="D136" tmpaddr="0x00009E" memaddr="0x0000BE" bit="7" />
                <dtcode id="D137" name="P0133 FRONT O2 SENSOR SLOW RESPONSE" desc="D137" tmpaddr="0x00009F" memaddr="0x0000BF" bit="0" />
                <dtcode id="D138" name="P0130 FRONT O2 SENSOR B1 S1" desc="D138" tmpaddr="0x00009F" memaddr="0x0000BF" bit="1" />
                <dtcode id="D139" name="P0139 REAR O2 SENSOR SLOW RESPONSE" desc="D139" tmpaddr="0x00009F" memaddr="0x0000BF" bit="2" />
                <dtcode id="D140" name="P0136 FRONT O2 SENSOR B1 S2" desc="D140" tmpaddr="0x00009F" memaddr="0x0000BF" bit="3" />
                <dtcode id="D141" name="P1152 FRONT O2 SENSOR RANGE/PERF LOW B1 S1" desc="D141" tmpaddr="0x00009F" memaddr="0x0000BF" bit="4" />
                <dtcode id="D142" name="P1153 FRONT O2 SENSOR RANGE/PERF HIGH B1 S1" desc="D142" tmpaddr="0x00009F" memaddr="0x0000BF" bit="5" />
                <dtcode id="D143" name="P0174 SYSTEM TOO LEAN B2" desc="D143" tmpaddr="0x00009F" memaddr="0x0000BF" bit="6" />
                <dtcode id="D144" name="P0175 SYSTEM TOO RICH B2" desc="D144" tmpaddr="0x00009F" memaddr="0x0000BF" bit="7" />
                <dtcode id="D145" name="P0420 CAT EFFICIENCY BELOW THRESHOLD" desc="D145" tmpaddr="0x0000A0" memaddr="0x0000C0" bit="0" />
                <dtcode id="D146" name="P0442 EVAP LEAK DETECTED (SMALL)" desc="D146" tmpaddr="0x0000A0" memaddr="0x0000C0" bit="1" />
                <dtcode id="D147" name="P0170 FUEL TRIM B1" desc="D147" tmpaddr="0x0000A0" memaddr="0x0000C0" bit="2" />
                <dtcode id="D148" name="P0456 EVAP LEAK DETECTED (VERY SMALL)" desc="D148" tmpaddr="0x0000A0" memaddr="0x0000C0" bit="3" />
                <dtcode id="D149" name="P0400 EGR FLOW" desc="D149" tmpaddr="0x0000A0" memaddr="0x0000C0" bit="4" />
                <dtcode id="D150" name="P1230 FUEL PUMP CONTROL MALFUNCTION" desc="D150" tmpaddr="0x0000A0" memaddr="0x0000C0" bit="5" />
                <dtcode id="D151" name="P0171 SYSTEM TOO LEAN" desc="D151" tmpaddr="0x0000A0" memaddr="0x0000C0" bit="6" />
                <dtcode id="D152" name="P0172 SYSTEM TOO RICH" desc="D152" tmpaddr="0x0000A0" memaddr="0x0000C0" bit="7" />
                <dtcode id="D153" name="P0301 MISFIRE CYLINDER 1" desc="D153" tmpaddr="0x0000A1" memaddr="0x0000C1" bit="0" />
                <dtcode id="D154" name="P0302 MISFIRE CYLINDER 2" desc="D154" tmpaddr="0x0000A1" memaddr="0x0000C1" bit="1" />
                <dtcode id="D155" name="P0303 MISFIRE CYLINDER 3" desc="D155" tmpaddr="0x0000A1" memaddr="0x0000C1" bit="2" />
                <dtcode id="D156" name="P0304 MISFIRE CYLINDER 4" desc="D156" tmpaddr="0x0000A1" memaddr="0x0000C1" bit="3" />
                <dtcode id="D157" name="P0305 MISFIRE CYLINDER 5" desc="D157" tmpaddr="0x0000A1" memaddr="0x0000C1" bit="4" />
                <dtcode id="D158" name="P0306 MISFIRE CYLINDER 6" desc="D158" tmpaddr="0x0000A1" memaddr="0x0000C1" bit="5" />
                <dtcode id="D159" name="P1301 MISFIRE (HIGH TEMP EXHAUST GAS)" desc="D159" tmpaddr="0x0000A1" memaddr="0x0000C1" bit="6" />
                <dtcode id="D160" name="P0457 EVAP LEAK DETECTED (FUEL CAP)" desc="D160" tmpaddr="0x0000A1" memaddr="0x0000C1" bit="7" />
                <dtcode id="D161" name="P0000 PASS CODE (NO DTC DETECTED)" desc="D161" tmpaddr="0x0000A2" memaddr="0x0000C2" bit="0" />
                <dtcode id="D162" name="P0000 PASS CODE (NO DTC DETECTED)" desc="D162" tmpaddr="0x0000A2" memaddr="0x0000C2" bit="1" />
                <dtcode id="D163" name="P1235 INTAKE CONTROL VALVE SOLENOID CIRCUIT (LOW)" desc="D163" tmpaddr="0x0000A2" memaddr="0x0000C2" bit="2" />
                <dtcode id="D164" name="P1236 INTAKE CONTROL VALVE SOLENOID CIRCUIT (HIGH)" desc="D164" tmpaddr="0x0000A2" memaddr="0x0000C2" bit="3" />
                <dtcode id="D165" name="P1597 TCS SIGNAL CIRCUIT INPUT (LOW)" desc="D165" tmpaddr="0x0000A2" memaddr="0x0000C2" bit="4" />
                <dtcode id="D166" name="P1598 TCS SIGNAL CIRCUIT INPUT (HIGH)" desc="D166" tmpaddr="0x0000A2" memaddr="0x0000C2" bit="5" />
                <dtcode id="D167" name="P0034 TURBO CHARGER BYPASS VALVE CONTROL CIRCUIT (LOW)" desc="D167" tmpaddr="0x0000A2" memaddr="0x0000C2" bit="6" />
                <dtcode id="D168" name="P0035 TURBO CHARGER BYPASS VALVE CONTROL CIRCUIT (HIGH)" desc="D168" tmpaddr="0x0000A2" memaddr="0x0000C2" bit="7" />
                <dtcode id="D169" name="P0137 REAR O2 SENSOR LOW VOLTAGE" desc="D169" tmpaddr="0x0000A3" memaddr="0x0000C3" bit="0" />
                <dtcode id="D170" name="P1134 AIR/FUEL SENSOR COMPUTER PROBLEM" desc="D170" tmpaddr="0x0000A3" memaddr="0x0000C3" bit="1" />
                <dtcode id="D171" name="P0131 FRONT O2 SENSOR LOW INPUT" desc="D171" tmpaddr="0x0000A3" memaddr="0x0000C3" bit="2" />
                <dtcode id="D172" name="P0151 O2 SENSOR CIRCUIT LOW B2 S1" desc="D172" tmpaddr="0x0000A3" memaddr="0x0000C3" bit="3" />
                <dtcode id="D173" name="P0132 FRONT O2 SENSOR HIGH INPUT" desc="D173" tmpaddr="0x0000A3" memaddr="0x0000C3" bit="4" />
                <dtcode id="D174" name="P0152 O2 SENSOR CIRCUIT HIGH B2 S1" desc="D174" tmpaddr="0x0000A3" memaddr="0x0000C3" bit="5" />
                <dtcode id="D175" name="P0138 REAR O2 SENSOR HIGH VOLTAGE" desc="D175" tmpaddr="0x0000A3" memaddr="0x0000C3" bit="6" />
                <dtcode id="D176" name="P0153 O2 SENSOR CIRCUIT SLOW RESPONSE B2 S1" desc="D176" tmpaddr="0x0000A3" memaddr="0x0000C3" bit="7" />
                <dtcode id="D177" name="P0112 IAT SENSOR LOW INPUT" desc="D177" tmpaddr="0x0000A4" memaddr="0x0000C4" bit="0" />
                <dtcode id="D178" name="P0113 IAT SENSOR HIGH INPUT" desc="D178" tmpaddr="0x0000A4" memaddr="0x0000C4" bit="1" />
                <dtcode id="D179" name="P0111 IAT SENSOR RANGE/PERF" desc="D179" tmpaddr="0x0000A4" memaddr="0x0000C4" bit="2" />
                <dtcode id="D180" name="P1546 EXHAUST GAS TEMPERATURE SENSOR 2 CIRCUIT INPUT (HIGH)" desc="D180" tmpaddr="0x0000A4" memaddr="0x0000C4" bit="3" />
                <dtcode id="D181" name="P0038 REAR O2 SENSOR HIGH INPUT" desc="D181" tmpaddr="0x0000A4" memaddr="0x0000C4" bit="4" />
                <dtcode id="D182" name="P0032 FRONT O2 SENSOR HIGH INPUT" desc="D182" tmpaddr="0x0000A4" memaddr="0x0000C4" bit="5" />
                <dtcode id="D183" name="P0037 REAR O2 SENSOR LOW INPUT" desc="D183" tmpaddr="0x0000A4" memaddr="0x0000C4" bit="6" />
                <dtcode id="D184" name="P0031 FRONT O2 SENSOR LOW INPUT" desc="D184" tmpaddr="0x0000A4" memaddr="0x0000C4" bit="7" />
                <dtcode id="D185" name="P1110 ATMOS. PRESSURE SENSOR LOW INPUT" desc="D185" tmpaddr="0x0000A5" memaddr="0x0000C5" bit="0" />
                <dtcode id="D186" name="P1111 ATMOS. PRESSURE SENSOR HIGH INPUT" desc="D186" tmpaddr="0x0000A5" memaddr="0x0000C5" bit="1" />
                <dtcode id="D187" name="P1112 ATMOS. PRESSURE SENSOR RANGE/PERF" desc="D187" tmpaddr="0x0000A5" memaddr="0x0000C5" bit="2" />
                <dtcode id="D188" name="P0106 MAP SENSOR RANGE/PERF (LOW)" desc="D188" tmpaddr="0x0000A5" memaddr="0x0000C5" bit="3" />
                <dtcode id="D189" name="P0107 MAP SENSOR LOW INPUT" desc="D189" tmpaddr="0x0000A5" memaddr="0x0000C5" bit="4" />
                <dtcode id="D190" name="P0108 MAP SENSOR HIGH INPUT" desc="D190" tmpaddr="0x0000A5" memaddr="0x0000C5" bit="5" />
                <dtcode id="D191" name="P1545 EXHAUST GAS TEMPERATURE SENSOR 2 CIRCUIT INPUT (LOW)" desc="D191" tmpaddr="0x0000A5" memaddr="0x0000C5" bit="6" />
                <dtcode id="D192" name="P1146 MAP SENSOR RANGE/PERF (HIGH)" desc="D192" tmpaddr="0x0000A5" memaddr="0x0000C5" bit="7" />
                <dtcode id="D193" name="P1139 O2 SENSOR HEATER CIRCUIT RANGE/PERF B1 S1" desc="D193" tmpaddr="0x0000A6" memaddr="0x0000C6" bit="0" />
                <dtcode id="D194" name="P1140 O2 SENSOR HEATER CIRCUIT RANGE/PERF B2 S1" desc="D194" tmpaddr="0x0000A6" memaddr="0x0000C6" bit="1" />
                <dtcode id="D195" name="P1711 ENGINE TORQUE CONTROL SIGNAL #1 CIRCUIT MALFUNCTION" desc="D195" tmpaddr="0x0000A6" memaddr="0x0000C6" bit="2" />
                <dtcode id="D196" name="P1712 ENGINE TORQUE CONTROL SIGNAL #2 CIRCUIT MALFUNCTION" desc="D196" tmpaddr="0x0000A6" memaddr="0x0000C6" bit="3" />
                <dtcode id="D197" name="P0715 TORQUE CONVERTER TURBINE SPEED SENSOR CIRCUIT MALFUNCTION" desc="D197" tmpaddr="0x0000A6" memaddr="0x0000C6" bit="4" />
                <dtcode id="D198" name="P1703 AT LOW CLUTCH TIMING SOLENOID VALVE CIRCUIT MALFUNCTION" desc="D198" tmpaddr="0x0000A6" memaddr="0x0000C6" bit="5" />
                <dtcode id="D199" name="P0785 SHIFT/TIMING SOLENOID MALFUNCTION" desc="D199" tmpaddr="0x0000A6" memaddr="0x0000C6" bit="6" />
                <dtcode id="D200" name="P0778 PRESSURE CONTROL SOLENOID B ELECTRICAL" desc="D200" tmpaddr="0x0000A6" memaddr="0x0000C6" bit="7" />
                <dtcode id="D201" name="P1130 O2 SENSOR CIRCUIT (OPEN) B1 S1" desc="D201" tmpaddr="0x0000A7" memaddr="0x0000C7" bit="0" />
                <dtcode id="D202" name="P1135 O2 SENSOR CIRCUIT (OPEN) B2 S1" desc="D202" tmpaddr="0x0000A7" memaddr="0x0000C7" bit="1" />
                <dtcode id="D203" name="P1131 O2 SENSOR CIRCUIT (SHORT) B1 S1" desc="D203" tmpaddr="0x0000A7" memaddr="0x0000C7" bit="2" />
                <dtcode id="D204" name="P1136 O2 SENSOR CIRCUIT (SHORT) B2 S1" desc="D204" tmpaddr="0x0000A7" memaddr="0x0000C7" bit="3" />
                <dtcode id="D205" name="P1154 O2 SENSOR RANGE/PERF LOW B2 S1" desc="D205" tmpaddr="0x0000A7" memaddr="0x0000C7" bit="4" />
                <dtcode id="D206" name="P1155 O2 SENSOR RANGE/PERF HIGH B2 S1" desc="D206" tmpaddr="0x0000A7" memaddr="0x0000C7" bit="5" />
                <dtcode id="D207" name="P0052 HO2S CIRCUIT HIGH B2 S1" desc="D207" tmpaddr="0x0000A7" memaddr="0x0000C7" bit="6" />
                <dtcode id="D208" name="P0051 HO2S CIRCUIT LOW B2 S1" desc="D208" tmpaddr="0x0000A7" memaddr="0x0000C7" bit="7" />
                <dtcode id="D209" name="P0128 THERMOSTAT MALFUNCTION" desc="D209" tmpaddr="0x0000A8" memaddr="0x0000C8" bit="0" />
                <dtcode id="D210" name="P1491 PCV (BLOWBY) FUNCTION PROBLEM" desc="D210" tmpaddr="0x0000A8" memaddr="0x0000C8" bit="1" />
                <dtcode id="D211" name="P0066 AAI CONTROL CIRCUIT (LOW)" desc="D211" tmpaddr="0x0000A8" memaddr="0x0000C8" bit="2" />
                <dtcode id="D212" name="P0067 AAI CONTROL CIRCUIT (HIGH)" desc="D212" tmpaddr="0x0000A8" memaddr="0x0000C8" bit="3" />
                <dtcode id="D213" name="P0065 AAI CONTROL RANGE/PERF" desc="D213" tmpaddr="0x0000A8" memaddr="0x0000C8" bit="4" />
                <dtcode id="D214" name="P0130 O2 SENSOR CIRCUIT LEAN B1 S1" desc="D214" tmpaddr="0x0000A8" memaddr="0x0000C8" bit="5" />
                <dtcode id="D215" name="P1137 O2 SENSOR CIRCUIT (LAMBDA=1) B1 S1" desc="D215" tmpaddr="0x0000A8" memaddr="0x0000C8" bit="6" />
                <dtcode id="D216" name="P1137 O2 SENSOR CIRCUIT (MID) B1 S1" desc="D216" tmpaddr="0x0000A8" memaddr="0x0000C8" bit="7" />
                <dtcode id="D217" name="P1248 RELIEF VALVE CONTROL SOLENOID 1 CIRCUIT (HIGH)" desc="D217" tmpaddr="0x0000A9" memaddr="0x0000C9" bit="0" />
                <dtcode id="D218" name="P1249 RELIEF VALVE CONTROL SOLENOID 2 CIRCUIT (LOW)" desc="D218" tmpaddr="0x0000A9" memaddr="0x0000C9" bit="1" />
                <dtcode id="D219" name="P1250 RELIEF VALVE CONTROL SOLENOID 2 CIRCUIT (HIGH)" desc="D219" tmpaddr="0x0000A9" memaddr="0x0000C9" bit="2" />
                <dtcode id="D220" name="P1560 BACK-UP VOLTAGE MALFUNCTION" desc="D220" tmpaddr="0x0000A9" memaddr="0x0000C9" bit="3" />
                <dtcode id="D221" name="P0192 FUEL RAIL PRESSURE SENSOR CIRCUIT (LOW)" desc="D221" tmpaddr="0x0000A9" memaddr="0x0000C9" bit="4" />
                <dtcode id="D222" name="P0193 FUEL RAIL PRESSURE SENSOR CIRCUIT (HIGH)" desc="D222" tmpaddr="0x0000A9" memaddr="0x0000C9" bit="5" />
                <dtcode id="D223" name="P0562 SYSTEM VOLTAGE (LOW)" desc="D223" tmpaddr="0x0000A9" memaddr="0x0000C9" bit="6" />
                <dtcode id="D224" name="P0563 SYSTEM VOLTAGE (HIGH)" desc="D224" tmpaddr="0x0000A9" memaddr="0x0000C9" bit="7" />
                <dtcode id="D225" name="P0245 WASTEGATE SOLENOID A LOW" desc="D225" tmpaddr="0x0000AA" memaddr="0x0000CA" bit="0" />
                <dtcode id="D226" name="P0246 WASTEGATE SOLENOID A HIGH" desc="D226" tmpaddr="0x0000AA" memaddr="0x0000CA" bit="1" />
                <dtcode id="D227" name="P1244 WASTEGATE SOLENOID A RANGE/PERF (LOW)" desc="D227" tmpaddr="0x0000AA" memaddr="0x0000CA" bit="2" />
                <dtcode id="D228" name="P0244 WASTEGATE SOLENOID A RANGE/PERF (HIGH)" desc="D228" tmpaddr="0x0000AA" memaddr="0x0000CA" bit="3" />
                <dtcode id="D229" name="P1245 WASTEGATE SOLENOID A RANGE/PERF (FAIL-SAFE)" desc="D229" tmpaddr="0x0000AA" memaddr="0x0000CA" bit="4" />
                <dtcode id="D230" name="P0249 WASTEGATE SOLENOID B (LOW)" desc="D230" tmpaddr="0x0000AA" memaddr="0x0000CA" bit="5" />
                <dtcode id="D231" name="P0250 WASTEGATE SOLENOID B (HIGH)" desc="D231" tmpaddr="0x0000AA" memaddr="0x0000CA" bit="6" />
                <dtcode id="D232" name="P1247 RELIEF VALVE CONTROL SOLENOID 1 CIRCUIT (LOW)" desc="D232" tmpaddr="0x0000AA" memaddr="0x0000CA" bit="7" />
                <dtcode id="D233" name="P1577 IMMOBILIZER CONTROL MODULE EEPROM ERROR" desc="D233" tmpaddr="0x0000AB" memaddr="0x0000CB" bit="0" />
                <dtcode id="D234" name="P1576 EGI CONTROL MODULE EEPROM ERROR" desc="D234" tmpaddr="0x0000AB" memaddr="0x0000CB" bit="1" />
                <dtcode id="D235" name="P0513 INCORRECT IMMOBILIZER KEY" desc="D235" tmpaddr="0x0000AB" memaddr="0x0000CB" bit="2" />
                <dtcode id="D236" name="P1574 KEY COMMUNICATION FAILURE" desc="D236" tmpaddr="0x0000AB" memaddr="0x0000CB" bit="3" />
                <dtcode id="D237" name="P1578 METER FAILURE" desc="D237" tmpaddr="0x0000AB" memaddr="0x0000CB" bit="4" />
                <dtcode id="D238" name="P1572 IMMOBILZER CIRCUIT FAILURE (EXCEPT ANTENNA CIRCUIT)" desc="D238" tmpaddr="0x0000AB" memaddr="0x0000CB" bit="5" />
                <dtcode id="D239" name="P1571 REFERENCE CODE INCOMPATIBILITY" desc="D239" tmpaddr="0x0000AB" memaddr="0x0000CB" bit="6" />
                <dtcode id="D240" name="P1570 ANTENNA" desc="D240" tmpaddr="0x0000AB" memaddr="0x0000CB" bit="7" />
                <dtcode id="D241" name="P1095 TGV SIGNAL 1 (SHORT)" desc="D241" tmpaddr="0x0000AC" memaddr="0x0000CC" bit="0" />
                <dtcode id="D242" name="P1097 TGV SIGNAL 2 (SHORT)" desc="D242" tmpaddr="0x0000AC" memaddr="0x0000CC" bit="1" />
                <dtcode id="D243" name="P1094 TGV SIGNAL 1 (OPEN)" desc="D243" tmpaddr="0x0000AC" memaddr="0x0000CC" bit="2" />
                <dtcode id="D244" name="P1096 TGV SIGNAL 2 (OPEN)" desc="D244" tmpaddr="0x0000AC" memaddr="0x0000CC" bit="3" />
                <dtcode id="D245" name="P0261 FUEL INJECTOR #1 CIRCUIT LOW" desc="D245" tmpaddr="0x0000AC" memaddr="0x0000CC" bit="4" />
                <dtcode id="D246" name="P0264 FUEL INJECTOR #2 CIRCUIT LOW" desc="D246" tmpaddr="0x0000AC" memaddr="0x0000CC" bit="5" />
                <dtcode id="D247" name="P0267 FUEL INJECTOR #3 CIRCUIT LOW" desc="D247" tmpaddr="0x0000AC" memaddr="0x0000CC" bit="6" />
                <dtcode id="D248" name="P0270 FUEL INJECTOR #4 CIRCUIT LOW" desc="D248" tmpaddr="0x0000AC" memaddr="0x0000CC" bit="7" />
                <dtcode id="D249" name="P0545 EGT SENSOR CIRCUIT LOW" desc="D249" tmpaddr="0x0000AD" memaddr="0x0000CD" bit="0" />
                <dtcode id="D250" name="P0546 EGT SENSOR CIRCUIT HIGH" desc="D250" tmpaddr="0x0000AD" memaddr="0x0000CD" bit="1" />
                <dtcode id="D251" name="P1312 EGT SENSOR MALFUNCTION" desc="D251" tmpaddr="0x0000AD" memaddr="0x0000CD" bit="2" />
                <dtcode id="D252" name="P1544 EGT TOO HIGH" desc="D252" tmpaddr="0x0000AD" memaddr="0x0000CD" bit="3" />
                <dtcode id="D253" name="P1306 OCV 1 SIGNAL CIRCUIT MALFUNCTION (OPEN)" desc="D253" tmpaddr="0x0000AD" memaddr="0x0000CD" bit="4" />
                <dtcode id="D254" name="P1308 OCV 2 SIGNAL CIRCUIT MALFUNCTION (OPEN)" desc="D254" tmpaddr="0x0000AD" memaddr="0x0000CD" bit="5" />
                <dtcode id="D255" name="P1307 OCV 1 SIGNAL CIRCUIT MALFUNCTION (SHORT)" desc="D255" tmpaddr="0x0000AD" memaddr="0x0000CD" bit="6" />
                <dtcode id="D256" name="P1309 OCV 2 SIGNAL CIRCUIT MALFUNCTION (SHORT)" desc="D256" tmpaddr="0x0000AD" memaddr="0x0000CD" bit="7" />
                <dtcode id="D257" name="P1719 ECU COMMUNICATION CIRCUIT" desc="D257" tmpaddr="0x0000F0" memaddr="0x0000F4" bit="0" />
                <dtcode id="D258" name="P1242 2-STAGE TWIN TURBO SYSTEM (TWIN)" desc="D258" tmpaddr="0x0000F0" memaddr="0x0000F4" bit="1" />
                <dtcode id="D259" name="P1241 2-STAGE TWIN TURBO SYSTEM (SINGLE)" desc="D259" tmpaddr="0x0000F0" memaddr="0x0000F4" bit="2" />
                <dtcode id="D260" name="P1199 DIFFERENTIAL PRESSURE SENSOR" desc="D260" tmpaddr="0x0000F0" memaddr="0x0000F4" bit="3" />
                <dtcode id="D261" name="P1086 TGV POS. 2 CIRCUIT LOW" desc="D261" tmpaddr="0x0000F0" memaddr="0x0000F4" bit="4" />
                <dtcode id="D262" name="P1087 TGV POS. 2 CIRCUIT HIGH" desc="D262" tmpaddr="0x0000F0" memaddr="0x0000F4" bit="5" />
                <dtcode id="D263" name="P1088 TGV POS. 1 CIRCUIT LOW" desc="D263" tmpaddr="0x0000F0" memaddr="0x0000F4" bit="6" />
                <dtcode id="D264" name="P1089 TGV POS. 1 CIRCUIT HIGH" desc="D264" tmpaddr="0x0000F0" memaddr="0x0000F4" bit="7" />
                <dtcode id="D265" name="P0801 REVERSE INHIBIT CONTROL CIRCUIT" desc="D265" tmpaddr="0x0000F1" memaddr="0x0000F5" bit="0" />
                <dtcode id="D266" name="P0768 SHIFT SOLENOID D ELECTRICAL" desc="D266" tmpaddr="0x0000F1" memaddr="0x0000F5" bit="1" />
                <dtcode id="D267" name="P0763 SHIFT SOLENOID C ELECTRICAL" desc="D267" tmpaddr="0x0000F1" memaddr="0x0000F5" bit="2" />
                <dtcode id="D268" name="P0736 REVERSE INCORRECT RATIO" desc="D268" tmpaddr="0x0000F1" memaddr="0x0000F5" bit="3" />
                <dtcode id="D269" name="P0724 TORQUE CONVERTER BRAKE SWITCH B CIRCUIT HIGH" desc="D269" tmpaddr="0x0000F1" memaddr="0x0000F5" bit="4" />
                <dtcode id="D270" name="P0719 TORQUE CONVERTER BRAKE SWITCH B CIRCUIT LOW" desc="D270" tmpaddr="0x0000F1" memaddr="0x0000F5" bit="5" />
                <dtcode id="D271" name="P0713 TRANSMISSION FLUID TEMPERATURE SENSOR HIGH INPUT" desc="D271" tmpaddr="0x0000F1" memaddr="0x0000F5" bit="6" />
                <dtcode id="D272" name="P0712 TRANSMISSION FLUID TEMPERATURE SENSOR LOW INPUT" desc="D272" tmpaddr="0x0000F1" memaddr="0x0000F5" bit="7" />
                <dtcode id="D273" name="P1817 SPORTS MODE SWITCH CIRCUIT (MANUAL SWITCH)" desc="D273" tmpaddr="0x0000F2" memaddr="0x0000F6" bit="0" />
                <dtcode id="D274" name="P1762 LATERAL ACCELERATION SENSOR CIRCUIT HIGH" desc="D274" tmpaddr="0x0000F2" memaddr="0x0000F6" bit="1" />
                <dtcode id="D275" name="P1761 LATERAL ACCELERATION SENSOR CIRCUIT LOW" desc="D275" tmpaddr="0x0000F2" memaddr="0x0000F6" bit="2" />
                <dtcode id="D276" name="P1760 LATERAL ACCELERATION SENSOR PERFORMANCE PROBLEM" desc="D276" tmpaddr="0x0000F2" memaddr="0x0000F6" bit="3" />
                <dtcode id="D277" name="P1718 AT CAN COMMUNICATION CIRCUIT" desc="D277" tmpaddr="0x0000F2" memaddr="0x0000F6" bit="4" />
                <dtcode id="D278" name="P1714 THROTTLE POSITION SENSOR POWER SUPPLY CIRCUIT" desc="D278" tmpaddr="0x0000F2" memaddr="0x0000F6" bit="5" />
                <dtcode id="D279" name="P1709 THROTTLE POSITION SENSOR CIRCUIT HIGH INPUT" desc="D279" tmpaddr="0x0000F2" memaddr="0x0000F6" bit="6" />
                <dtcode id="D280" name="P1708 THROTTLE POSITION SENSOR CIRCUIT LOW INPUT" desc="D280" tmpaddr="0x0000F2" memaddr="0x0000F6" bit="7" />
                <dtcode id="D281" name="P1600 IMPROPER CAN COMMUNICATION" desc="D281" tmpaddr="0x0000F3" memaddr="0x0000F7" bit="0" />
                <dtcode id="D282" name="P2709 SHIFT SOLENOID F ELECTRICAL" desc="D282" tmpaddr="0x0000F3" memaddr="0x0000F7" bit="1" />
                <dtcode id="D283" name="P0773 SHIFT SOLENOID E ELECTRICAL" desc="D283" tmpaddr="0x0000F3" memaddr="0x0000F7" bit="2" />
                <dtcode id="D284" name="P0735 GEAR 5 INCORRECT RATIO" desc="D284" tmpaddr="0x0000F3" memaddr="0x0000F7" bit="3" />
                <dtcode id="D285" name="P1799 INTERLOCK" desc="D285" tmpaddr="0x0000F3" memaddr="0x0000F7" bit="4" />
                <dtcode id="D286" name="P1798 GEAR 1 ENGINE BREAKS" desc="D286" tmpaddr="0x0000F3" memaddr="0x0000F7" bit="5" />
                <dtcode id="D287" name="P1314 MISFIRE DETECTED SIGNAL CIRCUIT (LOW)" desc="D287" tmpaddr="0x0000F3" memaddr="0x0000F7" bit="6" />
                <dtcode id="D288" name="P1313 MISFIRE DETECTED SIGNAL CIRCUIT (HIGH)" desc="D288" tmpaddr="0x0000F3" memaddr="0x0000F7" bit="7" />
                <dtcode id="D289" name="P1710 TORQUE CONVERTER TURBINE 2 SPEED SIGNAL CIRCUIT MALFUNCTION" desc="D289" tmpaddr="0x000123" memaddr="0x00012B" bit="0" />
                <dtcode id="D290" name="P1717 ATF TEMPERATURE SENSOR 2 CIRCUIT HIGH" desc="D290" tmpaddr="0x000123" memaddr="0x00012B" bit="1" />
                <dtcode id="D291" name="P1716 ATF TEMPERATURE SENSOR 2 CIRCUIT LOW" desc="D291" tmpaddr="0x000123" memaddr="0x00012B" bit="2" />
                <dtcode id="D292" name="P0771 SHIFT SOLENOID E PERFORMANCE OR STUCK OFF" desc="D292" tmpaddr="0x000123" memaddr="0x00012B" bit="3" />
                <dtcode id="D293" name="P0716 TORQUE CONVERTER TURBINE SPEED SENSOR" desc="D293" tmpaddr="0x000123" memaddr="0x00012B" bit="4" />
                <dtcode id="D294" name="P0726 ENGINE SPEED INPUT CIRCUIT RANGE/PERFORMANCE" desc="D294" tmpaddr="0x000123" memaddr="0x00012B" bit="5" />
                <dtcode id="D295" name="P0720 AT VEHICLE SPEED SENSOR HIGH" desc="D295" tmpaddr="0x000123" memaddr="0x00012B" bit="6" />
                <dtcode id="D296" name="P0722 AT VEHICLE SPEED SENSOR CIRCUIT (LOW)" desc="D296" tmpaddr="0x000123" memaddr="0x00012B" bit="7" />
                <dtcode id="D297" name="P2707 SHIFT SOLENOID F MALFUNCTION" desc="D297" tmpaddr="0x000124" memaddr="0x00012C" bit="0" />
                <dtcode id="D298" name="P0771 SHIFT SOLENOID E PERFORMANCE OR STUCK OFF" desc="D298" tmpaddr="0x000124" memaddr="0x00012C" bit="1" />
                <dtcode id="D299" name="P0766 SHIFT SOLENOID D PERFORMANCE OR STUCK OFF" desc="D299" tmpaddr="0x000124" memaddr="0x00012C" bit="2" />
                <dtcode id="D300" name="P0761 SHIFT SOLENOID C PERFORMANCE OR STUCK OFF" desc="D300" tmpaddr="0x000124" memaddr="0x00012C" bit="3" />
                <dtcode id="D301" name="P0756 SHIFT SOLENOID B PERFORMANCE OR STUCK OFF" desc="D301" tmpaddr="0x000124" memaddr="0x00012C" bit="4" />
                <dtcode id="D302" name="P0751 SHIFT SOLENOID A PERFORMANCE OR STUCK OFF" desc="D302" tmpaddr="0x000124" memaddr="0x00012C" bit="5" />
                <dtcode id="D303" name="P1769 YAW RATE AND LATERAL G SENSOR ERROR" desc="D303" tmpaddr="0x000124" memaddr="0x00012C" bit="6" />
                <dtcode id="D304" name="P1282 PCV SYSTEM CIRCUIT (OPEN)" desc="D304" tmpaddr="0x000124" memaddr="0x00012C" bit="7" />
                <dtcode id="D305" name="P1844 TRANSMISSION FLUID PRESSURE SENSOR/SWITCH E CIRCUIT" desc="D305" tmpaddr="0x000125" memaddr="0x00012D" bit="0" />
                <dtcode id="D306" name="P1843 TRANSMISSION FLUID PRESSURE SENSOR/SWITCH D CIRCUIT" desc="D306" tmpaddr="0x000125" memaddr="0x00012D" bit="1" />
                <dtcode id="D307" name="P1842 TRANSMISSION FLUID PRESSURE SENSOR/SWITCH C CIRCUIT" desc="D307" tmpaddr="0x000125" memaddr="0x00012D" bit="2" />
                <dtcode id="D308" name="P1841 TRANSMISSION FLUID PRESSURE SENSOR/SWITCH B CIRCUIT" desc="D308" tmpaddr="0x000125" memaddr="0x00012D" bit="3" />
                <dtcode id="D309" name="P1840 TRANSMISSION FLUID PRESSURE SENSOR/SWITCH A CIRCUIT" desc="D309" tmpaddr="0x000125" memaddr="0x00012D" bit="4" />
                <dtcode id="D310" name="P1875 CIRCUIT OF CENTER DIFFERENTIAL" desc="D310" tmpaddr="0x000125" memaddr="0x00012D" bit="5" />
                <dtcode id="D311" name="P0558 BRAKE BOOSTER PRESSURE SENSOR CIRCUIT HIGH INPUT" desc="D311" tmpaddr="0x000125" memaddr="0x00012D" bit="6" />
                <dtcode id="D312" name="P0559 ALTERNATOR CIRCUIT HIGH" desc="D312" tmpaddr="0x000125" memaddr="0x00012D" bit="7" />
                <dtcode id="D313" name="P0502 VEHICLE SPEED SENSOR LOW INPUT" desc="D313" tmpaddr="0x000126" memaddr="0x00012E" bit="0" />
                <dtcode id="D314" name="P0230 FUEL PUMP PRIMARY CIRCUIT" desc="D314" tmpaddr="0x000126" memaddr="0x00012E" bit="1" />
                <dtcode id="D315" name="P0565 CRUISE CONTROL SET SIGNAL" desc="D315" tmpaddr="0x000126" memaddr="0x00012E" bit="2" />
                <dtcode id="D316" name="P0068 MAP SENSOR RANGE/PERF" desc="D316" tmpaddr="0x000126" memaddr="0x00012E" bit="3" />
                <dtcode id="D317" name="P0129 ATMOS. PRESSURE SENSOR RANGE/PERF" desc="D317" tmpaddr="0x000126" memaddr="0x00012E" bit="4" />
                <dtcode id="D318" name="P0519 IDLE CONTROL MALFUNCTION (FAIL-SAFE)" desc="D318" tmpaddr="0x000126" memaddr="0x00012E" bit="5" />
                <dtcode id="D319" name="P0345 CAMSHAFT POS. SENSOR A BANK 2" desc="D319" tmpaddr="0x000126" memaddr="0x00012E" bit="6" />
                <dtcode id="D320" name="P0101 MAF SENSOR RANGE/PERF" desc="D320" tmpaddr="0x000126" memaddr="0x00012E" bit="7" />
                <dtcode id="D321" name="P0154 O2 SENSOR CIRCUIT OPEN B2 S1" desc="D321" tmpaddr="0x000127" memaddr="0x00012F" bit="0" />
                <dtcode id="D322" name="P0134 FRONT O2 SENSOR NO ACTIVITY" desc="D322" tmpaddr="0x000127" memaddr="0x00012F" bit="1" />
                <dtcode id="D323" name="P0150 O2 SENSOR CIRCUIT B2 S1" desc="D323" tmpaddr="0x000127" memaddr="0x00012F" bit="2" />
                <dtcode id="D324" name="P0130 O2 SENSOR CIRCUIT B1 S1" desc="D324" tmpaddr="0x000127" memaddr="0x00012F" bit="3" />
                <dtcode id="D325" name="P0050 O2 SENSOR HEATER CIRCUIT RANGE/PERF B2 S1" desc="D325" tmpaddr="0x000127" memaddr="0x00012F" bit="4" />
                <dtcode id="D326" name="P0030 O2 SENSOR HEATER CIRCUIT RANGE/PERF B1 S1" desc="D326" tmpaddr="0x000127" memaddr="0x00012F" bit="5" />
                <dtcode id="D327" name="P0501 VEHICLE SPEED SENSOR MALFUNCTION AT LOW SPEED" desc="D327" tmpaddr="0x000127" memaddr="0x00012F" bit="6" />
                <dtcode id="D328" name="P0503 VEHICLE SPEED SENSOR MALFUNCTION AT HIGH SPEED" desc="D328" tmpaddr="0x000127" memaddr="0x00012F" bit="7" />
                <dtcode id="D329" name="P0142 O2 SENSOR CIRCUIT B1 S3" desc="D329" tmpaddr="0x000128" memaddr="0x000130" bit="0" />
                <dtcode id="D330" name="P0145 O2 SENSOR CIRCUIT SLOW RESPONSE B1 S3" desc="D330" tmpaddr="0x000128" memaddr="0x000130" bit="1" />
                <dtcode id="D331" name="P0156 O2 SENSOR CIRCUIT B2 S 2" desc="D331" tmpaddr="0x000128" memaddr="0x000130" bit="2" />
                <dtcode id="D332" name="P0159 O2 SENSOR CIRCUIT SLOW RESPONSE B2 S2" desc="D332" tmpaddr="0x000128" memaddr="0x000130" bit="3" />
                <dtcode id="D333" name="P0162 O2 SENSOR CIRCUIT B2 S 3" desc="D333" tmpaddr="0x000128" memaddr="0x000130" bit="4" />
                <dtcode id="D334" name="P0165 O2 SENSOR CIRCUIT SLOW RESPONSE B2 S3" desc="D334" tmpaddr="0x000128" memaddr="0x000130" bit="5" />
                <dtcode id="D335" name="P0043 HO2S HEATER CIRCUIT (LOW) B1 S3" desc="D335" tmpaddr="0x000128" memaddr="0x000130" bit="6" />
                <dtcode id="D336" name="P0044 HO2S HEATER CIRCUIT (HIGH) B1 S3" desc="D336" tmpaddr="0x000128" memaddr="0x000130" bit="7" />
                <dtcode id="D337" name="P0057 HO2S HEATER CIRCUIT (LOW) B2 S2" desc="D337" tmpaddr="0x000129" memaddr="0x000131" bit="0" />
                <dtcode id="D338" name="P0058 HO2S HEATER CIRCUIT (HIGH) B2 S2" desc="D338" tmpaddr="0x000129" memaddr="0x000131" bit="1" />
                <dtcode id="D339" name="P0063 HO2S HEATER CIRCUIT (LOW) B2 S3" desc="D339" tmpaddr="0x000129" memaddr="0x000131" bit="2" />
                <dtcode id="D340" name="P0064 HO2S HEATER CIRCUIT (HIGH) B2 S3" desc="D340" tmpaddr="0x000129" memaddr="0x000131" bit="3" />
                <dtcode id="D341" name="P0157 O2 SENSOR CIRCUIT (LOW) VOLTAGE B2 S2" desc="D341" tmpaddr="0x000129" memaddr="0x000131" bit="4" />
                <dtcode id="D342" name="P0158 O2 SENSOR CIRCUIT (HIGH) VOLTAGE B2 S2" desc="D342" tmpaddr="0x000129" memaddr="0x000131" bit="5" />
                <dtcode id="D343" name="P0143 O2 SENSOR CIRCUIT (LOW) VOLTAGE B1 S3" desc="D343" tmpaddr="0x000129" memaddr="0x000131" bit="6" />
                <dtcode id="D344" name="P0144 O2 SENSOR CIRCUIT (HIGH) VOLTAGE B1 S3" desc="D344" tmpaddr="0x000129" memaddr="0x000131" bit="7" />
                <dtcode id="D345" name="P2109 TPS A MINIMUM STOP PERF" desc="D345" tmpaddr="0x00012A" memaddr="0x000132" bit="0" />
                <dtcode id="D346" name="P1759 LATERAL G SENSOR SYSTEM CIRCUIT" desc="D346" tmpaddr="0x00012A" memaddr="0x000132" bit="1" />
                <dtcode id="D347" name="P1873 REAR RIGHT ABS SENSOR SIGNAL" desc="D347" tmpaddr="0x00012A" memaddr="0x000132" bit="2" />
                <dtcode id="D348" name="P1872 REAR LEFT ABS SENSOR SIGNAL" desc="D348" tmpaddr="0x00012A" memaddr="0x000132" bit="3" />
                <dtcode id="D349" name="P1871 FRONT RIGHT ABS SENSOR SIGNAL" desc="D349" tmpaddr="0x00012A" memaddr="0x000132" bit="4" />
                <dtcode id="D350" name="P1870 FRONT LEFT ABS SENSOR SIGNAL" desc="D350" tmpaddr="0x00012A" memaddr="0x000132" bit="5" />
                <dtcode id="D351" name="P2125 ACCELERATOR POSITION SENSOR E" desc="D351" tmpaddr="0x00012A" memaddr="0x000132" bit="6" />
                <dtcode id="D352" name="P1700 THROTTLE POSITION SENSOR CIRCUIT MALFUNCTION FOR AT" desc="D352" tmpaddr="0x00012A" memaddr="0x000132" bit="7" />
                <dtcode id="D353" name="P0222 TPS B (LOW) INPUT" desc="D353" tmpaddr="0x000150" memaddr="0x000155" bit="0" />
                <dtcode id="D354" name="P0223 TPS B (HIGH) INPUT" desc="D354" tmpaddr="0x000150" memaddr="0x000155" bit="1" />
                <dtcode id="D355" name="P1160 ABNORMAL RETURN SPRING" desc="D355" tmpaddr="0x000150" memaddr="0x000155" bit="2" />
                <dtcode id="D356" name="P2102 THROTTLE ACTUATOR CIRCUIT LOW" desc="D356" tmpaddr="0x000150" memaddr="0x000155" bit="3" />
                <dtcode id="D357" name="P2103 THROTTLE ACTUATOR CIRCUIT HIGH" desc="D357" tmpaddr="0x000150" memaddr="0x000155" bit="4" />
                <dtcode id="D358" name="P2101 THROTTLE ACTUATOR CIRCUIT RANGE/PERF" desc="D358" tmpaddr="0x000150" memaddr="0x000155" bit="5" />
                <dtcode id="D359" name="P2096 POST CATALYST TOO LEAN B1" desc="D359" tmpaddr="0x000150" memaddr="0x000155" bit="6" />
                <dtcode id="D360" name="P0638 THROTTLE ACTUATOR RANGE/PERF" desc="D360" tmpaddr="0x000150" memaddr="0x000155" bit="7" />
                <dtcode id="D361" name="P0607 CONTROL MODULE PERFORMANCE" desc="D361" tmpaddr="0x000151" memaddr="0x000156" bit="0" />
                <dtcode id="D362" name="P2138 TPS D/E VOLTAGE" desc="D362" tmpaddr="0x000151" memaddr="0x000156" bit="1" />
                <dtcode id="D363" name="P2127 TPS E CIRCUIT LOW INPUT" desc="D363" tmpaddr="0x000151" memaddr="0x000156" bit="2" />
                <dtcode id="D364" name="P2128 TPS E CIRCUIT HIGH INPUT" desc="D364" tmpaddr="0x000151" memaddr="0x000156" bit="3" />
                <dtcode id="D365" name="P2122 TPS D CIRCUIT LOW INPUT" desc="D365" tmpaddr="0x000151" memaddr="0x000156" bit="4" />
                <dtcode id="D366" name="P2123 TPS D CIRCUIT HIGH INPUT" desc="D366" tmpaddr="0x000151" memaddr="0x000156" bit="5" />
                <dtcode id="D367" name="P2135 TPS A/B VOLTAGE" desc="D367" tmpaddr="0x000151" memaddr="0x000156" bit="6" />
                <dtcode id="D368" name="P2097 POST CATALYST TOO RICH B1" desc="D368" tmpaddr="0x000151" memaddr="0x000156" bit="7" />
                <dtcode id="D369" name="P0600 SERIAL COMMUNICATION LINK" desc="D369" tmpaddr="0x000152" memaddr="0x000157" bit="0" />
                <dtcode id="D370" name="P0390 CAMSHAFT POS. SENSOR B BANK 2" desc="D370" tmpaddr="0x000152" memaddr="0x000157" bit="1" />
                <dtcode id="D371" name="P0365 CAMSHAFT POS. SENSOR B BANK 1" desc="D371" tmpaddr="0x000152" memaddr="0x000157" bit="2" />
                <dtcode id="D372" name="P0345 CAMSHAFT POS. SENSOR A BANK 2" desc="D372" tmpaddr="0x000152" memaddr="0x000157" bit="3" />
                <dtcode id="D373" name="P0340 CAMSHAFT POS. SENSOR A MALFUNCTION" desc="D373" tmpaddr="0x000152" memaddr="0x000157" bit="4" />
                <dtcode id="D374" name="P0605 CONTROL MODULE ROM ERROR" desc="D374" tmpaddr="0x000152" memaddr="0x000157" bit="5" />
                <dtcode id="D375" name="P1521 BRAKE SWITCH CIRCUIT RANGE/PERF (HIGH) INPUT" desc="D375" tmpaddr="0x000152" memaddr="0x000157" bit="6" />
                <dtcode id="D376" name="P0579 CRUISE CONTROL SWITCH CIRCUIT RANGE/PERF (HIGH) INPUT" desc="D376" tmpaddr="0x000152" memaddr="0x000157" bit="7" />
                <dtcode id="D377" name="P2095 OCV SOLENOID B2 CIRCUIT SHORT" desc="D377" tmpaddr="0x000153" memaddr="0x000158" bit="0" />
                <dtcode id="D378" name="P2094 OCV SOLENOID B2 CIRCUIT OPEN" desc="D378" tmpaddr="0x000153" memaddr="0x000158" bit="1" />
                <dtcode id="D379" name="P2091 OCV SOLENOID B1 CIRCUIT SHORT" desc="D379" tmpaddr="0x000153" memaddr="0x000158" bit="2" />
                <dtcode id="D380" name="P2090 OCV SOLENOID B1 CIRCUIT OPEN" desc="D380" tmpaddr="0x000153" memaddr="0x000158" bit="3" />
                <dtcode id="D381" name="P2093 OCV SOLENOID A2 CIRCUIT SHORT" desc="D381" tmpaddr="0x000153" memaddr="0x000158" bit="4" />
                <dtcode id="D382" name="P2092 OCV SOLENOID A2 CIRCUIT OPEN" desc="D382" tmpaddr="0x000153" memaddr="0x000158" bit="5" />
                <dtcode id="D383" name="P2089 OCV SOLENOID A1 CIRCUIT SHORT" desc="D383" tmpaddr="0x000153" memaddr="0x000158" bit="6" />
                <dtcode id="D384" name="P2088 OCV SOLENOID A1 CIRCUIT OPEN" desc="D384" tmpaddr="0x000153" memaddr="0x000158" bit="7" />
                <dtcode id="D385" name="P0197 OIL TEMP SENSOR LOW" desc="D385" tmpaddr="0x000154" memaddr="0x000159" bit="0" />
                <dtcode id="D386" name="P1547 EGT SENSOR MALFUNCTION" desc="D386" tmpaddr="0x000154" memaddr="0x000159" bit="1" />
                <dtcode id="D387" name="P1476 EXHAUST BY-PASS VALVE SOLENOID MALFUNCTION (HIGH)" desc="D387" tmpaddr="0x000154" memaddr="0x000159" bit="2" />
                <dtcode id="D388" name="P1475 EXHAUST BY-PASS VALVE SOLENOID MALFUNCTION (LOW)" desc="D388" tmpaddr="0x000154" memaddr="0x000159" bit="3" />
                <dtcode id="D389" name="P1477 EXHAUST BY-PASS VALVE FUNCTION" desc="D389" tmpaddr="0x000154" memaddr="0x000159" bit="4" />
                <dtcode id="D390" name="P2099 POST CATALYST TOO RICH B2" desc="D390" tmpaddr="0x000154" memaddr="0x000159" bit="5" />
                <dtcode id="D391" name="P2098 POST CATALYST TOO LEAN B2" desc="D391" tmpaddr="0x000154" memaddr="0x000159" bit="6" />
                <dtcode id="D392" name="P0700 TRANSMISSION CONTROL SYSTEM" desc="D392" tmpaddr="0x000154" memaddr="0x000159" bit="7" />
                <dtcode id="D393" name="P0028 OSV SOLENOID VALVE CIRCUIT RANGE/PERF B2" desc="D393" tmpaddr="0x000160" memaddr="0x000165" bit="0" />
                <dtcode id="D394" name="P0083 INTAKE VALVE CONTROL HIGH (BANK 2)" desc="D394" tmpaddr="0x000160" memaddr="0x000165" bit="1" />
                <dtcode id="D395" name="P0082 INTAKE VALVE CONTROL LOW (BANK 2)" desc="D395" tmpaddr="0x000160" memaddr="0x000165" bit="2" />
                <dtcode id="D396" name="P0026 OSV SOLENOID VALVE CIRCUIT RANGE/PERF B1" desc="D396" tmpaddr="0x000160" memaddr="0x000165" bit="3" />
                <dtcode id="D397" name="P0077 INTAKE VALVE CONTROL HIGH (BANK 1)" desc="D397" tmpaddr="0x000160" memaddr="0x000165" bit="4" />
                <dtcode id="D398" name="P0076 INTAKE VALVE CIRCUIT LOW (BANK 1)" desc="D398" tmpaddr="0x000160" memaddr="0x000165" bit="5" />
                <dtcode id="D399" name="P0196 OIL TEMP SENSOR RANGE/PERF" desc="D399" tmpaddr="0x000160" memaddr="0x000165" bit="6" />
                <dtcode id="D400" name="P0198 OIL TEMP SENSOR HIGH" desc="D400" tmpaddr="0x000160" memaddr="0x000165" bit="7" />
                <dtcode id="D401" name="P2100 THROTTLE CONTROL MOTOR CIRCUIT OPEN" desc="D401" tmpaddr="0x000161" memaddr="0x000166" bit="0" />
                <dtcode id="D402" name="P2111 THROTTLE VALVE OPEN STICK" desc="D402" tmpaddr="0x000161" memaddr="0x000166" bit="1" />
                <dtcode id="D403" name="P2504 CHARGING SYSTEM VOLTAGE HIGH" desc="D403" tmpaddr="0x000161" memaddr="0x000166" bit="2" />
                <dtcode id="D404" name="P2503 CHARGING SYSTEM VOLTAGE LOW" desc="D404" tmpaddr="0x000161" memaddr="0x000166" bit="3" />
                <dtcode id="D405" name="P1462 INTERCYLINDER FUEL PRESSURE SENSOR SYSTEM CIRCUIT (LOW)" desc="D405" tmpaddr="0x000161" memaddr="0x000166" bit="4" />
                <dtcode id="D406" name="P1463 INTERCYLINDER FUEL PRESSURE SENSOR SYSTEM CIRCUIT (HIGH)" desc="D406" tmpaddr="0x000161" memaddr="0x000166" bit="5" />
                <dtcode id="D407" name="P1028 VVL SYSTEMS 2 PERFORMANCE" desc="D407" tmpaddr="0x000161" memaddr="0x000166" bit="6" />
                <dtcode id="D408" name="P1026 VVL SYSTEMS 1 PERFORMANCE" desc="D408" tmpaddr="0x000161" memaddr="0x000166" bit="7" />
                <dtcode id="D409" name="P0958 BACKUP LIGHT RELAY CIRCUIT (HIGH)" desc="D409" tmpaddr="0x000162" memaddr="0x000167" bit="0" />
                <dtcode id="D410" name="P0957 BACKUP LIGHT RELAY CIRCUIT (LOW)" desc="D410" tmpaddr="0x000162" memaddr="0x000167" bit="1" />
                <dtcode id="D411" name="P0955 BACKUP LIGHT RELAY CIRCUIT (OPEN)" desc="D411" tmpaddr="0x000162" memaddr="0x000167" bit="2" />
                <dtcode id="D412" name="P0883 PIVGN POWER SUPPLY CIRCUIT (HIGH)" desc="D412" tmpaddr="0x000162" memaddr="0x000167" bit="3" />
                <dtcode id="D413" name="P0882 PIVGN POWER SUPPLY CIRCUIT (LOW)" desc="D413" tmpaddr="0x000162" memaddr="0x000167" bit="4" />
                <dtcode id="D414" name="P0880 PIVGN POWER SUPPLY CIRCUIT" desc="D414" tmpaddr="0x000162" memaddr="0x000167" bit="5" />
                <dtcode id="D415" name="P0817 STARTER DISABLE CIRCUIT" desc="D415" tmpaddr="0x000162" memaddr="0x000167" bit="6" />
                <dtcode id="D416" name="P1601 TCM COMMUNICATION MALFUNCTION" desc="D416" tmpaddr="0x000162" memaddr="0x000167" bit="7" />
                <dtcode id="D417" name="P2004 TGV - INTAKE MANIFOLD RUNNER 1 STUCK OPEN" desc="D417" tmpaddr="0x000163" memaddr="0x000168" bit="0" />
                <dtcode id="D418" name="P2006 TGV - INTAKE MANIFOLD RUNNER 1 STUCK CLOSED" desc="D418" tmpaddr="0x000163" memaddr="0x000168" bit="1" />
                <dtcode id="D419" name="P2005 TGV - INTAKE MANIFOLD RUNNER 2 STUCK OPEN" desc="D419" tmpaddr="0x000163" memaddr="0x000168" bit="2" />
                <dtcode id="D420" name="P2007 TGV - INTAKE MANIFOLD RUNNER 2 STUCK CLOSED" desc="D420" tmpaddr="0x000163" memaddr="0x000168" bit="3" />
                <dtcode id="D421" name="P2227 BARO. PRESSURE CIRCUIT RANGE/PERF" desc="D421" tmpaddr="0x000163" memaddr="0x000168" bit="4" />
                <dtcode id="D422" name="P0126 INSUFFICIENT COOLANT TEMP (OPERATION)" desc="D422" tmpaddr="0x000163" memaddr="0x000168" bit="5" />
                <dtcode id="D423" name="P2229 BARO. PRESSURE CIRCUIT HIGH INPUT" desc="D423" tmpaddr="0x000163" memaddr="0x000168" bit="6" />
                <dtcode id="D424" name="P2228 BARO. PRESSURE CIRCUIT LOW INPUT" desc="D424" tmpaddr="0x000163" memaddr="0x000168" bit="7" />
                <dtcode id="D425" name="P2016 TGV - INTAKE MANIFOLD RUNNER 1 POS. SENSOR LOW" desc="D425" tmpaddr="0x000164" memaddr="0x000169" bit="0" />
                <dtcode id="D426" name="P2017 TGV - INTAKE MANIFOLD RUNNER 1 POS. SENSOR HIGH" desc="D426" tmpaddr="0x000164" memaddr="0x000169" bit="1" />
                <dtcode id="D427" name="P2021 TGV - INTAKE MANIFOLD RUNNER 2 POS. SENSOR LOW" desc="D427" tmpaddr="0x000164" memaddr="0x000169" bit="2" />
                <dtcode id="D428" name="P2022 TGV - INTAKE MANIFOLD RUNNER 2 POS. SENSOR HIGH" desc="D428" tmpaddr="0x000164" memaddr="0x000169" bit="3" />
                <dtcode id="D429" name="P2009 TGV - INTAKE MANIFOLD RUNNER 1 CIRCUIT LOW" desc="D429" tmpaddr="0x000164" memaddr="0x000169" bit="4" />
                <dtcode id="D430" name="P2012 TGV - INTAKE MANIFOLD RUNNER 2 CIRCUIT LOW" desc="D430" tmpaddr="0x000164" memaddr="0x000169" bit="5" />
                <dtcode id="D431" name="P2008 TGV - INTAKE MANIFOLD RUNNER 1 CIRCUIT OPEN" desc="D431" tmpaddr="0x000164" memaddr="0x000169" bit="6" />
                <dtcode id="D432" name="P2011 TGV - INTAKE MANIFOLD RUNNER 2 CIRCUIT OPEN" desc="D432" tmpaddr="0x000164" memaddr="0x000169" bit="7" />
                <dtcode id="D433" name="P1579 REMOTE CONTROL STARTER ABNORMAL" desc="D433" tmpaddr="0x000174" memaddr="0x00017B" bit="0" />
                <dtcode id="D441" name="P0850 NEUTRAL POSITION SWITCH CIRCUIT" desc="D441" tmpaddr="0x000175" memaddr="0x00017C" bit="0" />
                <dtcode id="D442" name="P1721 DCCD ENGINE RPM SIGNAL SYSTEM CIRCUIT" desc="D442" tmpaddr="0x000175" memaddr="0x00017C" bit="1" />
                <dtcode id="D443" name="P1720 DCCD CAN SYSTEM CIRCUIT" desc="D443" tmpaddr="0x000175" memaddr="0x00017C" bit="2" />
                <dtcode id="D444" name="P1765 YAW RATE &amp; SIDE G SENSOR REFERENCE SYSTEM CIRCUIT" desc="D444" tmpaddr="0x000175" memaddr="0x00017C" bit="3" />
                <dtcode id="D445" name="P1764 YAW RATE SENSOR SYSTEM CIRCUIT" desc="D445" tmpaddr="0x000175" memaddr="0x00017C" bit="4" />
                <dtcode id="D446" name="P1767 DCCD STEERING ANGLE SENSOR CIRCUIT" desc="D446" tmpaddr="0x000175" memaddr="0x00017C" bit="5" />
                <dtcode id="D447" name="P1723 ATF TEMPERATURE SENSOR 2 CIRCUIT RANGE/PERFORMANCE" desc="D447" tmpaddr="0x000175" memaddr="0x00017C" bit="6" />
                <dtcode id="D448" name="P0711 TRANSMISSION FLUID TEMPERATURE SENSOR RANGE PERFORMANCE" desc="D448" tmpaddr="0x000175" memaddr="0x00017C" bit="7" />
                <dtcode id="D449" name="P2444 SECONDARY AIR PUMP 1 STUCK ON B1" desc="D449" tmpaddr="0x000176" memaddr="0x00017D" bit="0" />
                <dtcode id="D450" name="P0411 SECONDARY AIR PUMP INCORRECT FLOW" desc="D450" tmpaddr="0x000176" memaddr="0x00017D" bit="1" />
                <dtcode id="D451" name="P0410 SECONDARY AIR PUMP SYSTEM" desc="D451" tmpaddr="0x000176" memaddr="0x00017D" bit="2" />
                <dtcode id="D452" name="P2431 SECONDARY AIR PUMP CIRCUIT RANGE/PERF" desc="D452" tmpaddr="0x000176" memaddr="0x00017D" bit="3" />
                <dtcode id="D453" name="P2433 SECONDARY AIR PUMP CIRCUIT HIGH" desc="D453" tmpaddr="0x000176" memaddr="0x00017D" bit="4" />
                <dtcode id="D454" name="P2432 SECONDARY AIR PUMP CIRCUIT LOW" desc="D454" tmpaddr="0x000176" memaddr="0x00017D" bit="5" />
                <dtcode id="D455" name="P0413 SECONDARY AIR PUMP A OPEN" desc="D455" tmpaddr="0x000176" memaddr="0x00017D" bit="6" />
                <dtcode id="D456" name="P0418 SECONDARY AIR PUMP RELAY A" desc="D456" tmpaddr="0x000176" memaddr="0x00017D" bit="7" />
                <dtcode id="D457" name="P0140 O2 SENSOR CIRCUIT RANGE/PERF B1 S2" desc="D457" tmpaddr="0x000177" memaddr="0x00017E" bit="0" />
                <dtcode id="D458" name="P0160 O2 SENSOR CIRCUIT RANGE/PERF B2 S2" desc="D458" tmpaddr="0x000177" memaddr="0x00017E" bit="1" />
                <dtcode id="D459" name="P0146 O2 SENSOR CIRCUIT RANGE/PERF B1 S3" desc="D459" tmpaddr="0x000177" memaddr="0x00017E" bit="2" />
                <dtcode id="D460" name="P1602 CONTROL MODULE PROGRAMMING ERROR" desc="D460" tmpaddr="0x000177" memaddr="0x00017E" bit="3" />
                <dtcode id="D461" name="P0414 SECONDARY AIR PUMP A SHORTED" desc="D461" tmpaddr="0x000177" memaddr="0x00017E" bit="4" />
                <dtcode id="D462" name="P1418 SECONDARY AIR PUMP CIRCUIT SHORTED" desc="D462" tmpaddr="0x000177" memaddr="0x00017E" bit="5" />
                <dtcode id="D463" name="P0018 CRANKSHAFT/CAMSHAFT CORRELATION 2A" desc="D463" tmpaddr="0x000177" memaddr="0x00017E" bit="6" />
                <dtcode id="D464" name="P0016 CRANKSHAFT/CAMSHAFT CORRELATION 1A" desc="D464" tmpaddr="0x000177" memaddr="0x00017E" bit="7" />
                <dtcode id="D465" name="P0602 CONTROL MODULE PROG. ERROR" desc="D465" tmpaddr="0x000178" memaddr="0x00017F" bit="0" />
                <dtcode id="D466" name="P1410 SECONDARY AIR PUMP VALVE STUCK OPEN" desc="D466" tmpaddr="0x000178" memaddr="0x00017F" bit="1" />
                <dtcode id="D467" name="P2443 SECONDARY AIR PUMP 2 STUCK CLOSED" desc="D467" tmpaddr="0x000178" memaddr="0x00017F" bit="2" />
                <dtcode id="D468" name="P2442 SECONDARY AIR PUMP VALVE 2 STUCK OPEN" desc="D468" tmpaddr="0x000178" memaddr="0x00017F" bit="3" />
                <dtcode id="D469" name="P2441 SECONDARY AIR PUMP VALVE 1 STUCK CLOSED" desc="D469" tmpaddr="0x000178" memaddr="0x00017F" bit="4" />
                <dtcode id="D470" name="P2440 SECONDARY AIR PUMP VALVE 1 STUCK OPEN" desc="D470" tmpaddr="0x000178" memaddr="0x00017F" bit="5" />
                <dtcode id="D471" name="P0417 SECONDARY AIR PUMP B SHORTED" desc="D471" tmpaddr="0x000178" memaddr="0x00017F" bit="6" />
                <dtcode id="D472" name="P0416 SECONDARY AIR PUMP B OPEN" desc="D472" tmpaddr="0x000178" memaddr="0x00017F" bit="7" />
                <dtcode id="D473" name="P0024 EXHAUST AVCS SYSTEM 2 RANGE/PERF" desc="D473" tmpaddr="0x000179" memaddr="0x000180" bit="0" />
                <dtcode id="D474" name="P0014 EXHAUST AVCS SYSTEM 1 RANGE/PERF" desc="D474" tmpaddr="0x000179" memaddr="0x000180" bit="1" />
                <dtcode id="D475" name="P1616 START RELAY LOCK SYSTEM CIRCUIT (LOW)" desc="D475" tmpaddr="0x000179" memaddr="0x000180" bit="2" />
                <dtcode id="D476" name="P1520 IMRC CIRCUIT MALFUNCTION" desc="D476" tmpaddr="0x000179" memaddr="0x000180" bit="3" />
                <dtcode id="D477" name="P1519 IMRC STUCK CLOSED" desc="D477" tmpaddr="0x000179" memaddr="0x000180" bit="4" />
                <dtcode id="D478" name="P0441 EVAP INCORRECT PURGE FLOW" desc="D478" tmpaddr="0x000179" memaddr="0x000180" bit="5" />
                <dtcode id="D479" name="P2419 EVAP SWITCHING VALVE LOW" desc="D479" tmpaddr="0x000179" memaddr="0x000180" bit="6" />
                <dtcode id="D480" name="P2420 EVAP SWITCHING VALVE HIGH" desc="D480" tmpaddr="0x000179" memaddr="0x000180" bit="7" />
                <dtcode id="D481" name="P2634 SUB FUEL PUMP RELAY (HIGH)" desc="D481" tmpaddr="0x00017A" memaddr="0x000181" bit="0" />
                <dtcode id="D482" name="P2633 SUB FUEL PUMP RELAY (LOW)" desc="D482" tmpaddr="0x00017A" memaddr="0x000181" bit="1" />
                <dtcode id="D485" name="P0091 FUEL PRESSURE REGULATOR 1 CONTROL LOW" desc="D485" tmpaddr="0x00017A" memaddr="0x000181" bit="4" />
                <dtcode id="D486" name="P0092 FUEL PRESSURE REGULATOR 1 CONTROL HIGH" desc="D486" tmpaddr="0x00017A" memaddr="0x000181" bit="5" />
                <dtcode id="D487" name="P0019 CRANK/CAM TIMING B FAILURE 2" desc="D487" tmpaddr="0x00017A" memaddr="0x000181" bit="6" />
                <dtcode id="D488" name="P0017 CRANK/CAM TIMING B FAILURE 1" desc="D488" tmpaddr="0x00017A" memaddr="0x000181" bit="7" />
                <dtcode id="D489" name="P0201 INJECTOR CIRCUIT MALFUNCTION CYLINDER 1" desc="D489" tmpaddr="0x0001C5" memaddr="0x0001CB" bit="0" />
                <dtcode id="D490" name="P1213 INJECTOR DRIVER LOW CHARGE" desc="D490" tmpaddr="0x0001C5" memaddr="0x0001CB" bit="1" />
                <dtcode id="D491" name="P2148 INJECTOR DRIVER (SHORT TO POSITIVE)" desc="D491" tmpaddr="0x0001C5" memaddr="0x0001CB" bit="2" />
                <dtcode id="D492" name="P0704 CLUTCH SWITCH CIRCUIT MALFUNCTION" desc="D492" tmpaddr="0x0001C5" memaddr="0x0001CB" bit="3" />
                <dtcode id="D493" name="P0096 IAT SENSOR 2 RANGE/PERF" desc="D493" tmpaddr="0x0001C5" memaddr="0x0001CB" bit="4" />
                <dtcode id="D494" name="P0097 IAT SENSOR 2 CIRCUIT (LOW)" desc="D494" tmpaddr="0x0001C5" memaddr="0x0001CB" bit="5" />
                <dtcode id="D495" name="P0098 IAT SENSOR 2 CIRCUIT (HIGH)" desc="D495" tmpaddr="0x0001C5" memaddr="0x0001CB" bit="6" />
                <dtcode id="D496" name="P0116 ECT SENSOR CIRCUIT RANGE/PERF" desc="D496" tmpaddr="0x0001C5" memaddr="0x0001CB" bit="7" />
                <dtcode id="D497" name="P0088 FUEL RAIL PRESSURE ABNORMAL (TOO HIGH)" desc="D497" tmpaddr="0x0001C6" memaddr="0x0001CC" bit="0" />
                <dtcode id="D498" name="P0191 FUEL RAIL PRESSURE SENSOR CIRCUIT RANGE/PERF" desc="D498" tmpaddr="0x0001C6" memaddr="0x0001CC" bit="1" />
                <dtcode id="D499" name="P1214 INJECTOR DRIVER OVER CHARGE" desc="D499" tmpaddr="0x0001C6" memaddr="0x0001CC" bit="2" />
                <dtcode id="D500" name="P2149 FUEL INJECTOR POWER SUPPLY B OPEN CIRCUIT" desc="D500" tmpaddr="0x0001C6" memaddr="0x0001CC" bit="3" />
                <dtcode id="D501" name="P2146 FUEL INJECTOR POWER SUPPLY A OPEN CIRCUIT" desc="D501" tmpaddr="0x0001C6" memaddr="0x0001CC" bit="4" />
                <dtcode id="D502" name="P0204 INJECTOR CIRCUIT MALFUNCTION CYLINDER 4" desc="D502" tmpaddr="0x0001C6" memaddr="0x0001CC" bit="5" />
                <dtcode id="D503" name="P0203 INJECTOR CIRCUIT MALFUNCTION CYLINDER 3" desc="D503" tmpaddr="0x0001C6" memaddr="0x0001CC" bit="6" />
                <dtcode id="D504" name="P0202 INJECTOR CIRCUIT MALFUNCTION CYLINDER 2" desc="D504" tmpaddr="0x0001C6" memaddr="0x0001CC" bit="7" />
                <dtcode id="D505" name="P0093 FUEL SYSTEM LEAK DETECTED LARGE LEAK" desc="D505" tmpaddr="0x00020A" memaddr="0x00020E" bit="0" />
                <dtcode id="D506" name="P1234 FUEL PRESSURE ABNORMAL (PUMP FAILURE 2)" desc="D506" tmpaddr="0x00020A" memaddr="0x00020E" bit="1" />
                <dtcode id="D507" name="P1233 FUEL PRESSURE ABNORMAL (PUMP FAILURE 1)" desc="D507" tmpaddr="0x00020A" memaddr="0x00020E" bit="2" />
                <dtcode id="D508" name="P1232 FUEL PUMP MALFUNCTION" desc="D508" tmpaddr="0x00020A" memaddr="0x00020E" bit="3" />
                <dtcode id="D509" name="P2635 FUEL PUMP SUCTION CONTROL VALVE STICKS" desc="D509" tmpaddr="0x00020A" memaddr="0x00020E" bit="4" />
                <dtcode id="D510" name="P0628 FUEL PUMP SUCTION CONTROL VALVE CIRCUIT (SHORT TO GROUND)" desc="D510" tmpaddr="0x00020A" memaddr="0x00020E" bit="5" />
                <dtcode id="D511" name="P0629 FUEL PUMP SUCTION CONTROL VALVE CIRCUIT (SHORT TO POSITIVE)" desc="D511" tmpaddr="0x00020A" memaddr="0x00020E" bit="6" />
                <dtcode id="D512" name="P0089 FUEL PRESSURE REGULATOR PERF (OPEN PROBLEM)" desc="D512" tmpaddr="0x00020A" memaddr="0x00020E" bit="7" />
                <dtcode id="D513" name="P0401 EGR FLOW INSUFFICIENT DETECTED" desc="D513" tmpaddr="0x00020B" memaddr="0x00020F" bit="0" />
                <dtcode id="D514" name="P0402 EGR FLOW EXCESSIVE DETECTED" desc="D514" tmpaddr="0x00020B" memaddr="0x00020F" bit="1" />
                <dtcode id="D515" name="P0299 BOOST PRESSURE ABNORMAL (UNDER-BOOST)" desc="D515" tmpaddr="0x00020B" memaddr="0x00020F" bit="2" />
                <dtcode id="D516" name="P0234 BOOST PRESSURE ABNORMAL (OVER-BOOST)" desc="D516" tmpaddr="0x00020B" memaddr="0x00020F" bit="3" />
                <dtcode id="D517" name="P0606 CPU FAILURE" desc="D517" tmpaddr="0x00020B" memaddr="0x00020F" bit="4" />
                <dtcode id="D518" name="P1203 INJECTOR CODE INPUT FAILURE" desc="D518" tmpaddr="0x00020B" memaddr="0x00020F" bit="5" />
                <dtcode id="D519" name="P1202 INJECTOR CODE DATA ABNORMAL" desc="D519" tmpaddr="0x00020B" memaddr="0x00020F" bit="6" />
                <dtcode id="D520" name="P1201 INJECTOR CODE FAILURE (NOT WRITTEN)" desc="D520" tmpaddr="0x00020B" memaddr="0x00020F" bit="7" />
                <dtcode id="D521" name="P1382 GLOW RELAY CIRCUIT (HIGH)" desc="D521" tmpaddr="0x00020C" memaddr="0x000210" bit="0" />
                <dtcode id="D522" name="P0219 ENGINE OVERSPEED CONDITION" desc="D522" tmpaddr="0x00020C" memaddr="0x000210" bit="1" />
                <dtcode id="D523" name="P0046 TURBOCHARGER BOOST CONTROL SOLENOID VALVE CIRCUIT RANGE/PERF" desc="D523" tmpaddr="0x00020C" memaddr="0x000210" bit="2" />
                <dtcode id="D524" name="P0404 EGR OPERATION CIRCUIT ABNORMAL" desc="D524" tmpaddr="0x00020C" memaddr="0x000210" bit="3" />
                <dtcode id="D525" name="P0403 EGR SYSTEM FAILURE (CIRCUIT DUTY)" desc="D525" tmpaddr="0x00020C" memaddr="0x000210" bit="4" />
                <dtcode id="D526" name="P0409 EGR POSITION SENSOR PERFORMANCE" desc="D526" tmpaddr="0x00020C" memaddr="0x000210" bit="5" />
                <dtcode id="D527" name="P0405 EGR POSITION SENSOR CIRCUIT (LOW)" desc="D527" tmpaddr="0x00020C" memaddr="0x000210" bit="6" />
                <dtcode id="D528" name="P0406 EGR POSITION SENSOR CIRCUIT (HIGH)" desc="D528" tmpaddr="0x00020C" memaddr="0x000210" bit="7" />
                <dtcode id="D530" name="P2413 EGR VALVE STICKING" desc="D530" tmpaddr="0x00020D" memaddr="0x000211" bit="1" />
                <dtcode id="D531" name="P1009 SWIRL CONTROL VALVE CIRCUIT (LOW)" desc="D531" tmpaddr="0x00020D" memaddr="0x000211" bit="2" />
                <dtcode id="D532" name="P1607 MONITORING CIRCUIT ABNORMAL" desc="D532" tmpaddr="0x00020D" memaddr="0x000211" bit="3" />
                <dtcode id="D533" name="P2147 INJECTOR DRIVER (SHORT TO GROUND)" desc="D533" tmpaddr="0x00020D" memaddr="0x000211" bit="4" />
                <dtcode id="D534" name="P2010 SWIRL CONTROL VALVE CIRCUIT (HIGH)" desc="D534" tmpaddr="0x00020D" memaddr="0x000211" bit="5" />
                <dtcode id="D535" name="P0687 ECM/PCM SELF-SHUT RELAY FAILURE" desc="D535" tmpaddr="0x00020D" memaddr="0x000211" bit="6" />
                <dtcode id="D536" name="P1380 GLOW RELAY CIRCUIT (LOW)" desc="D536" tmpaddr="0x00020D" memaddr="0x000211" bit="7" />
                <dtcode id="D540" name="P1532 CHARGE CONTROL SYSTEM ABNORMAL" desc="D540" tmpaddr="0x000263" memaddr="0x000268" bit="3" />
                <dtcode id="D541" name="P1531 BATTERY CURRENT SENSOR CIRCUIT (HIGH)" desc="D541" tmpaddr="0x000263" memaddr="0x000268" bit="4" />
                <dtcode id="D542" name="P1530 BATTERY CURRENT SENSOR CIRCUIT (LOW)" desc="D542" tmpaddr="0x000263" memaddr="0x000268" bit="5" />
                <dtcode id="D543" name="P0517 BATTERY TEMPERATURE SENSOR CIRCUIT (HIGH)" desc="D543" tmpaddr="0x000263" memaddr="0x000268" bit="6" />
                <dtcode id="D544" name="P0516 BATTERY TEMPERATURE SENSOR CIRCUIT (LOW)" desc="D544" tmpaddr="0x000263" memaddr="0x000268" bit="7" />
                <dtcode id="D545" name="U0422 CAN INVALID DATA RECEIVED FROM BIU" desc="D545" tmpaddr="0x000264" memaddr="0x000269" bit="0" />
                <dtcode id="D546" name="U0140 CAN LOST COMMUNICATION WITH BIU" desc="D546" tmpaddr="0x000264" memaddr="0x000269" bit="1" />
                <dtcode id="D547" name="U0402 CAN INVALID DATA RECEIVED FROM TCM" desc="D547" tmpaddr="0x000264" memaddr="0x000269" bit="2" />
                <dtcode id="D548" name="U0101 CAN LOST COMMUNICATION WITH TCM" desc="D548" tmpaddr="0x000264" memaddr="0x000269" bit="3" />
                <dtcode id="D549" name="U0416 CAN INVALID DATA RECEIVED FROM VDC" desc="D549" tmpaddr="0x000264" memaddr="0x000269" bit="4" />
                <dtcode id="D550" name="U0122 CAN LOST COMMUNICATION WITH VDC" desc="D550" tmpaddr="0x000264" memaddr="0x000269" bit="5" />
                <dtcode id="D551" name="U0073 CAN COMMUNICATION BUS A OFF" desc="D551" tmpaddr="0x000264" memaddr="0x000269" bit="6" />
                <dtcode id="D552" name="P0161 O2 SENSOR HEATER CIRCUIT MALFUNCTION B2 S2" desc="D552" tmpaddr="0x000264" memaddr="0x000269" bit="7" />
                <dtcode id="D553" name="P1468 OIL DILUTION" desc="D553" tmpaddr="0x000265" memaddr="0x00026A" bit="0" />
                <dtcode id="D554" name="P1467 DPF ASH OVERFILL" desc="D554" tmpaddr="0x000265" memaddr="0x00026A" bit="1" />
                <dtcode id="D555" name="P1466 DPF SUBSTRATE DAMAGED" desc="D555" tmpaddr="0x000265" memaddr="0x00026A" bit="2" />
                <dtcode id="D556" name="P1465 DPF PARTICULATE OVERFILL" desc="D556" tmpaddr="0x000265" memaddr="0x00026A" bit="3" />
                <dtcode id="D557" name="P1473 DPF INLET/OUTLET PRESSURE DEVIATION SENSOR (HIGH)" desc="D557" tmpaddr="0x000265" memaddr="0x00026A" bit="4" />
                <dtcode id="D558" name="P1472 DPF INLET/OUTLET PRESSURE DEVIATION SENSOR (LOW)" desc="D558" tmpaddr="0x000265" memaddr="0x00026A" bit="5" />
                <dtcode id="D559" name="P2033 EGT SENSOR 2 (HIGH)" desc="D559" tmpaddr="0x000265" memaddr="0x00026A" bit="6" />
                <dtcode id="D560" name="P2032 EGT SENSOR 2 (LOW)" desc="D560" tmpaddr="0x000265" memaddr="0x00026A" bit="7" />
                <dtcode id="D567" name="P1471 DPF DIFFERENTIAL PRESSURE SENSOR UPSTREAM PIPING TROUBLE" desc="D567" tmpaddr="0x000266" memaddr="0x00026B" bit="6" />
                <dtcode id="D568" name="P1469 DPF LIMP-HOME MODE" desc="D568" tmpaddr="0x000266" memaddr="0x00026B" bit="7" />
                <dtcode id="D569" name="P050B COLD START IGNITION TIMING PERFORMANCE" desc="D569" tmpaddr="0x000267" memaddr="0x00026C" bit="0" />
                <dtcode id="D570" name="P050A COLD START IDLE AIR CONTROL SYSTEM PERFORMANCE" desc="D570" tmpaddr="0x000267" memaddr="0x00026C" bit="1" />
                <dtcode id="D571" name="P2610 ECM/PCM INTERNAL ENGINE OFF TIMER PERFORMANCE" desc="D571" tmpaddr="0x000267" memaddr="0x00026C" bit="2" />
                <dtcode id="D572" name="P2420 EVAP SWITCHING VALVE HIGH" desc="D572" tmpaddr="0x000267" memaddr="0x00026C" bit="3" />
                <dtcode id="D573" name="P2419 EVAP SWITCHING VALVE LOW" desc="D573" tmpaddr="0x000267" memaddr="0x00026C" bit="4" />
                <dtcode id="D574" name="P2401 EVAP LEAK DETECTION PUMP CONTROL CIRCUIT LOW" desc="D574" tmpaddr="0x000267" memaddr="0x00026C" bit="5" />
                <dtcode id="D575" name="P0453 EVAP PRESSURE SENSOR HIGH INPUT" desc="D575" tmpaddr="0x000267" memaddr="0x00026C" bit="6" />
                <dtcode id="D576" name="P0452 EVAP PRESSURE SENSOR LOW INPUT" desc="D576" tmpaddr="0x000267" memaddr="0x00026C" bit="7" />
                <dtcode id="D577" name="P015D O2 SENSOR DELAYED RESPONSE LEAN TO RICH B2 S1" desc="D577" tmpaddr="0x0002A6" memaddr="0x0002AB" bit="0" />
                <dtcode id="D578" name="P015C O2 SENSOR DELAYED RESPONSE RICH TO LEAN B2 S1" desc="D578" tmpaddr="0x0002A6" memaddr="0x0002AB" bit="1" />
                <dtcode id="D579" name="P015B O2 SENSOR DELAYED RESPONSE LEAN TO RICH B1 S1" desc="D579" tmpaddr="0x0002A6" memaddr="0x0002AB" bit="2" />
                <dtcode id="D580" name="P015A O2 SENSOR DELAYED RESPONSE RICH TO LEAN B1 S1" desc="D580" tmpaddr="0x0002A6" memaddr="0x0002AB" bit="3" />
                <dtcode id="D581" name="P014F O2 SENSOR SLOW RESPONSE LEAN TO RICH B2 S1" desc="D581" tmpaddr="0x0002A6" memaddr="0x0002AB" bit="4" />
                <dtcode id="D582" name="P014E O2 SENSOR SLOW RESPONSE RICH TO LEAN B2 S1" desc="D582" tmpaddr="0x0002A6" memaddr="0x0002AB" bit="5" />
                <dtcode id="D583" name="P014D O2 SENSOR SLOW RESPONSE LEAN TO RICH B1 S1" desc="D583" tmpaddr="0x0002A6" memaddr="0x0002AB" bit="6" />
                <dtcode id="D584" name="P014C O2 SENSOR SLOW RESPONSE RICH TO LEAN B1 S1" desc="D584" tmpaddr="0x0002A6" memaddr="0x0002AB" bit="7" />
                <dtcode id="D585" name="P1458 CANISTER PURGE CONTROL SOLENOID VALVE 2 LOW" desc="D585" tmpaddr="0x0002A7" memaddr="0x0002AC" bit="0" />
                <dtcode id="D586" name="P1451 EVAPORATIVE EMISSION CONT. SYS." desc="D586" tmpaddr="0x0002A7" memaddr="0x0002AC" bit="1" />
                <dtcode id="D587" name="P1449 EVAPORATIVE EMISSION CONT. SYS. AIR FILTER CLOG" desc="D587" tmpaddr="0x0002A7" memaddr="0x0002AC" bit="2" />
                <dtcode id="D588" name="P0455 EVAP EMISSION CONTROL SYSTEM LEAK DETECTED (GROSS LEAK)" desc="D588" tmpaddr="0x0002A7" memaddr="0x0002AC" bit="3" />
                <dtcode id="D589" name="P0451 EVAP PRESSURE SENSOR RANGE/PERF" desc="D589" tmpaddr="0x0002A7" memaddr="0x0002AC" bit="4" />
                <dtcode id="D590" name="P0441 EVAP INCORRECT PURGE FLOW" desc="D590" tmpaddr="0x0002A7" memaddr="0x0002AC" bit="5" />
                <dtcode id="D591" name="P219B BANK 2 AFR IMBALANCE" desc="D591" tmpaddr="0x0002A7" memaddr="0x0002AC" bit="6" />
                <dtcode id="D592" name="P219A BANK 1 AFR IMBALANCE" desc="D592" tmpaddr="0x0002A7" memaddr="0x0002AC" bit="7" />
                <dtcode id="D598" name="P2404 EVAP LEAK DETECTION PUMP SENSE CIRCUIT RANGE/PERF" desc="D598" tmpaddr="0x0002A8" memaddr="0x0002AD" bit="5" />
                <dtcode id="D599" name="P2402 EVAP LEAK DETECTION PUMP CONTROL CIRCUIT HIGH" desc="D599" tmpaddr="0x0002A8" memaddr="0x0002AD" bit="6" />
                <dtcode id="D600" name="P1459 CANISTER PURGE CONTROL SOLENOID VALVE 2 HIGH" desc="D600" tmpaddr="0x0002A8" memaddr="0x0002AD" bit="7" />
                <dtcode id="D601" name="P014B O2 SENSOR DELAYED RESPONSE LEAN TO RICH B2 S2" desc="D601" tmpaddr="0x0002A9" memaddr="0x0002AE" bit="0" />
                <dtcode id="D602" name="P014A O2 SENSOR DELAYED RESPONSE RICH TO LEAN B2 S2" desc="D602" tmpaddr="0x0002A9" memaddr="0x0002AE" bit="1" />
                <dtcode id="D603" name="P013F O2 SENSOR DELAYED RESPONSE LEAN TO RICH B1 S2" desc="D603" tmpaddr="0x0002A9" memaddr="0x0002AE" bit="2" />
                <dtcode id="D604" name="P013E O2 SENSOR DELAYED RESPONSE RICH TO LEAN B1 S2" desc="D604" tmpaddr="0x0002A9" memaddr="0x0002AE" bit="3" />
                <dtcode id="D605" name="P013D O2 SENSOR SLOW RESPONSE LEAN TO RICH B2 S2" desc="D605" tmpaddr="0x0002A9" memaddr="0x0002AE" bit="4" />
                <dtcode id="D606" name="P013C O2 SENSOR SLOW RESPONSE RICH TO LEAN B2 S2" desc="D606" tmpaddr="0x0002A9" memaddr="0x0002AE" bit="5" />
                <dtcode id="D607" name="P013B O2 SENSOR SLOW RESPONSE LEAN TO RICH B1 S2" desc="D607" tmpaddr="0x0002A9" memaddr="0x0002AE" bit="6" />
                <dtcode id="D608" name="P013A O2 SENSOR SLOW RESPONSE RICH TO LEAN B1 S2" desc="D608" tmpaddr="0x0002A9" memaddr="0x0002AE" bit="7" />
                <dtcode id="D609" name="P0356 IGNITION COIL F PRIMARY/SECONDARY CIRCUIT MALFUNCTION" desc="D609" tmpaddr="0x0002B6" memaddr="0x0002B8" bit="0" />
                <dtcode id="D610" name="P0355 IGNITION COIL E PRIMARY/SECONDARY CIRCUIT MALFUNCTION" desc="D610" tmpaddr="0x0002B6" memaddr="0x0002B8" bit="1" />
                <dtcode id="D611" name="P0354 IGNITION COIL D PRIMARY/SECONDARY CIRCUIT MALFUNCTION" desc="D611" tmpaddr="0x0002B6" memaddr="0x0002B8" bit="2" />
                <dtcode id="D612" name="P0353 IGNITION COIL C PRIMARY/SECONDARY CIRCUIT MALFUNCTION" desc="D612" tmpaddr="0x0002B6" memaddr="0x0002B8" bit="3" />
                <dtcode id="D613" name="P0352 IGNITION COIL B PRIMARY/SECONDARY CIRCUIT MALFUNCTION" desc="D613" tmpaddr="0x0002B6" memaddr="0x0002B8" bit="4" />
                <dtcode id="D614" name="P0351 IGNITION COIL A PRIMARY/SECONDARY CIRCUIT MALFUNCTION" desc="D614" tmpaddr="0x0002B6" memaddr="0x0002B8" bit="5" />
                <dtcode id="D615" name="P0206 INJECTOR CIRCUIT MALFUNCTION CYLINDER 6" desc="D615" tmpaddr="0x0002B6" memaddr="0x0002B8" bit="6" />
                <dtcode id="D616" name="P0205 INJECTOR CIRCUIT MALFUNCTION CYLINDER 5" desc="D616" tmpaddr="0x0002B6" memaddr="0x0002B8" bit="7" />
                
*/



