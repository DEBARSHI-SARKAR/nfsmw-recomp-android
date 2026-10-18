007d1390  PUSH EBP
007d1391  MOV EBP,ESP
007d1393  SUB ESP,0x2bc
007d1399  MOV EAX,[0x00906980]
007d139e  MOV dword ptr [EBP + -0x34],EAX
007d13a1  MOV dword ptr [EBP + -0x24],0x0
007d13a8  MOV dword ptr [EBP + 0xfffffdc4],0x0
007d13b2  MOV dword ptr [EBP + 0xfffffdb4],0x0
007d13bc  MOV dword ptr [EBP + -0x20],0x0
007d13c3  MOV EAX,dword ptr [EBP + 0xc]
007d13c6  MOV CL,byte ptr [EAX]
007d13c8  MOV byte ptr [EBP + 0xfffffdbf],CL
007d13ce  MOVSX EDX,byte ptr [EBP + 0xfffffdbf]
007d13d5  MOV EAX,dword ptr [EBP + 0xc]
007d13d8  ADD EAX,0x1
007d13db  MOV dword ptr [EBP + 0xc],EAX
007d13de  TEST EDX,EDX
007d13e0  JZ 0x007d2046
007d13e6  CMP dword ptr [EBP + 0xfffffdc4],0x0
007d13ed  JL 0x007d2046
007d13f3  MOVSX ECX,byte ptr [EBP + 0xfffffdbf]
007d13fa  CMP ECX,0x20
007d13fd  JL 0x007d1424
007d13ff  MOVSX EDX,byte ptr [EBP + 0xfffffdbf]
007d1406  CMP EDX,0x78
007d1409  JG 0x007d1424
007d140b  MOVSX EAX,byte ptr [EBP + 0xfffffdbf]
007d1412  MOVSX ECX,byte ptr [EAX + 0x8bcc30]
007d1419  AND ECX,0xf
007d141c  MOV dword ptr [EBP + 0xfffffd5c],ECX
007d1422  JMP 0x007d142e
007d1424  MOV dword ptr [EBP + 0xfffffd5c],0x0
007d142e  MOV EDX,dword ptr [EBP + 0xfffffd5c]
007d1434  MOV dword ptr [EBP + 0xfffffdc0],EDX
007d143a  MOV EAX,dword ptr [EBP + 0xfffffdc0]
007d1440  MOV ECX,dword ptr [EBP + 0xfffffdb4]
007d1446  MOVSX EDX,byte ptr [ECX + EAX*0x8 + 0x8bcc50]
007d144e  SAR EDX,0x4
007d1451  MOV dword ptr [EBP + 0xfffffdb4],EDX
007d1457  MOV EAX,dword ptr [EBP + 0xfffffdb4]
007d145d  MOV dword ptr [EBP + 0xfffffd58],EAX
007d1463  CMP dword ptr [EBP + 0xfffffd58],0x7
007d146a  JA 0x007d2041
007d1470  MOV ECX,dword ptr [EBP + 0xfffffd58]
007d1476  JMP dword ptr [ECX*0x4 + 0x7d2058]
007d147d  MOV dword ptr [EBP + -0xc],0x0
007d1484  MOVZX EDX,byte ptr [EBP + 0xfffffdbf]
007d148b  MOV EAX,[0x00907294]
007d1490  MOVZX ECX,word ptr [EAX + EDX*0x2]
007d1494  AND ECX,0x8000
007d149a  JZ 0x007d14f6
007d149c  LEA EDX,[EBP + 0xfffffdc4]
007d14a2  PUSH EDX
007d14a3  MOV EAX,dword ptr [EBP + 0x8]
007d14a6  PUSH EAX
007d14a7  MOV CL,byte ptr [EBP + 0xfffffdbf]
007d14ad  PUSH ECX
007d14ae  CALL 0x007d2160
007d14b3  ADD ESP,0xc
007d14b6  MOV EDX,dword ptr [EBP + 0xc]
007d14b9  MOV AL,byte ptr [EDX]
007d14bb  MOV byte ptr [EBP + 0xfffffdbf],AL
007d14c1  MOV ECX,dword ptr [EBP + 0xc]
007d14c4  ADD ECX,0x1
007d14c7  MOV dword ptr [EBP + 0xc],ECX
007d14ca  MOVSX EDX,byte ptr [EBP + 0xfffffdbf]
007d14d1  TEST EDX,EDX
007d14d3  JNZ 0x007d14f6
007d14d5  PUSH 0x8bccc8
007d14da  PUSH 0x0
007d14dc  PUSH 0x192
007d14e1  PUSH 0x8bccbc
007d14e6  PUSH 0x2
007d14e8  CALL 0x007d2670
007d14ed  ADD ESP,0x14
007d14f0  CMP EAX,0x1
007d14f3  JNZ 0x007d14f6
007d14f5  INT3
007d14f6  LEA ECX,[EBP + 0xfffffdc4]
007d14fc  PUSH ECX
007d14fd  MOV EDX,dword ptr [EBP + 0x8]
007d1500  PUSH EDX
007d1501  MOV AL,byte ptr [EBP + 0xfffffdbf]
007d1507  PUSH EAX
007d1508  CALL 0x007d2160
007d150d  ADD ESP,0xc
007d1510  JMP 0x007d2041
007d1515  MOV dword ptr [EBP + -0x2c],0x0
007d151c  MOV ECX,dword ptr [EBP + -0x2c]
007d151f  MOV dword ptr [EBP + -0x28],ECX
007d1522  MOV EDX,dword ptr [EBP + -0x28]
007d1525  MOV dword ptr [EBP + -0x18],EDX
007d1528  MOV EAX,dword ptr [EBP + -0x18]
007d152b  MOV dword ptr [EBP + -0x1c],EAX
007d152e  MOV dword ptr [EBP + -0x10],0x0
007d1535  MOV dword ptr [EBP + -0x30],0xffffffff
007d153c  MOV dword ptr [EBP + -0xc],0x0
007d1543  JMP 0x007d2041
007d1548  MOVSX ECX,byte ptr [EBP + 0xfffffdbf]
007d154f  MOV dword ptr [EBP + 0xfffffd54],ECX
007d1555  MOV EDX,dword ptr [EBP + 0xfffffd54]
007d155b  SUB EDX,0x20
007d155e  MOV dword ptr [EBP + 0xfffffd54],EDX
007d1564  CMP dword ptr [EBP + 0xfffffd54],0x10
007d156b  JA 0x007d15b9
007d156d  MOV EAX,dword ptr [EBP + 0xfffffd54]
007d1573  MOVZX ECX,byte ptr [EAX + 0x7d2090]
007d157a  JMP dword ptr [ECX*0x4 + 0x7d2078]
007d1581  MOV EDX,dword ptr [EBP + -0x10]
007d1584  OR EDX,0x4
007d1587  MOV dword ptr [EBP + -0x10],EDX
007d158a  JMP 0x007d15b9
007d158c  MOV EAX,dword ptr [EBP + -0x10]
007d158f  OR EAX,0x1
007d1592  MOV dword ptr [EBP + -0x10],EAX
007d1595  JMP 0x007d15b9
007d1597  MOV ECX,dword ptr [EBP + -0x10]
007d159a  OR ECX,0x2
007d159d  MOV dword ptr [EBP + -0x10],ECX
007d15a0  JMP 0x007d15b9
007d15a2  MOV EDX,dword ptr [EBP + -0x10]
007d15a5  OR EDX,0x80
007d15ab  MOV dword ptr [EBP + -0x10],EDX
007d15ae  JMP 0x007d15b9
007d15b0  MOV EAX,dword ptr [EBP + -0x10]
007d15b3  OR EAX,0x8
007d15b6  MOV dword ptr [EBP + -0x10],EAX
007d15b9  JMP 0x007d2041
007d15be  MOVSX ECX,byte ptr [EBP + 0xfffffdbf]
007d15c5  CMP ECX,0x2a
007d15c8  JNZ 0x007d15f2
007d15ca  LEA EDX,[EBP + 0x10]
007d15cd  PUSH EDX
007d15ce  CALL 0x007d22b0
007d15d3  ADD ESP,0x4
007d15d6  MOV dword ptr [EBP + -0x18],EAX
007d15d9  CMP dword ptr [EBP + -0x18],0x0
007d15dd  JGE 0x007d15f0
007d15df  MOV EAX,dword ptr [EBP + -0x10]
007d15e2  OR EAX,0x4
007d15e5  MOV dword ptr [EBP + -0x10],EAX
007d15e8  MOV ECX,dword ptr [EBP + -0x18]
007d15eb  NEG ECX
007d15ed  MOV dword ptr [EBP + -0x18],ECX
007d15f0  JMP 0x007d1606
007d15f2  MOV EDX,dword ptr [EBP + -0x18]
007d15f5  IMUL EDX,EDX,0xa
007d15f8  MOVSX EAX,byte ptr [EBP + 0xfffffdbf]
007d15ff  LEA ECX,[EDX + EAX*0x1 + -0x30]
007d1603  MOV dword ptr [EBP + -0x18],ECX
007d1606  JMP 0x007d2041
007d160b  MOV dword ptr [EBP + -0x30],0x0
007d1612  JMP 0x007d2041
007d1617  MOVSX EDX,byte ptr [EBP + 0xfffffdbf]
007d161e  CMP EDX,0x2a
007d1621  JNZ 0x007d1641
007d1623  LEA EAX,[EBP + 0x10]
007d1626  PUSH EAX
007d1627  CALL 0x007d22b0
007d162c  ADD ESP,0x4
007d162f  MOV dword ptr [EBP + -0x30],EAX
007d1632  CMP dword ptr [EBP + -0x30],0x0
007d1636  JGE 0x007d163f
007d1638  MOV dword ptr [EBP + -0x30],0xffffffff
007d163f  JMP 0x007d1655
007d1641  MOV ECX,dword ptr [EBP + -0x30]
007d1644  IMUL ECX,ECX,0xa
007d1647  MOVSX EDX,byte ptr [EBP + 0xfffffdbf]
007d164e  LEA EAX,[ECX + EDX*0x1 + -0x30]
007d1652  MOV dword ptr [EBP + -0x30],EAX
007d1655  JMP 0x007d2041
007d165a  MOVSX ECX,byte ptr [EBP + 0xfffffdbf]
007d1661  MOV dword ptr [EBP + 0xfffffd50],ECX
007d1667  MOV EDX,dword ptr [EBP + 0xfffffd50]
007d166d  SUB EDX,0x49
007d1670  MOV dword ptr [EBP + 0xfffffd50],EDX
007d1676  CMP dword ptr [EBP + 0xfffffd50],0x2e
007d167d  JA 0x007d1770
007d1683  MOV EAX,dword ptr [EBP + 0xfffffd50]
007d1689  MOVZX ECX,byte ptr [EAX + 0x7d20b5]
007d1690  JMP dword ptr [ECX*0x4 + 0x7d20a1]
007d1697  MOV EDX,dword ptr [EBP + -0x10]
007d169a  OR EDX,0x10
007d169d  MOV dword ptr [EBP + -0x10],EDX
007d16a0  JMP 0x007d1770
007d16a5  MOV EAX,dword ptr [EBP + 0xc]
007d16a8  MOVSX ECX,byte ptr [EAX]
007d16ab  CMP ECX,0x36
007d16ae  JNZ 0x007d16d6
007d16b0  MOV EDX,dword ptr [EBP + 0xc]
007d16b3  MOVSX EAX,byte ptr [EDX + 0x1]
007d16b7  CMP EAX,0x34
007d16ba  JNZ 0x007d16d6
007d16bc  MOV ECX,dword ptr [EBP + 0xc]
007d16bf  ADD ECX,0x2
007d16c2  MOV dword ptr [EBP + 0xc],ECX
007d16c5  MOV EDX,dword ptr [EBP + -0x10]
007d16c8  OR EDX,0x8000
007d16ce  MOV dword ptr [EBP + -0x10],EDX
007d16d1  JMP 0x007d1757
007d16d6  MOV EAX,dword ptr [EBP + 0xc]
007d16d9  MOVSX ECX,byte ptr [EAX]
007d16dc  CMP ECX,0x33
007d16df  JNZ 0x007d1704
007d16e1  MOV EDX,dword ptr [EBP + 0xc]
007d16e4  MOVSX EAX,byte ptr [EDX + 0x1]
007d16e8  CMP EAX,0x32
007d16eb  JNZ 0x007d1704
007d16ed  MOV ECX,dword ptr [EBP + 0xc]
007d16f0  ADD ECX,0x2
007d16f3  MOV dword ptr [EBP + 0xc],ECX
007d16f6  MOV EDX,dword ptr [EBP + -0x10]
007d16f9  AND EDX,0xffff7fff
007d16ff  MOV dword ptr [EBP + -0x10],EDX
007d1702  JMP 0x007d1757
007d1704  MOV EAX,dword ptr [EBP + 0xc]
007d1707  MOVSX ECX,byte ptr [EAX]
007d170a  CMP ECX,0x64
007d170d  JZ 0x007d1746
007d170f  MOV EDX,dword ptr [EBP + 0xc]
007d1712  MOVSX EAX,byte ptr [EDX]
007d1715  CMP EAX,0x69
007d1718  JZ 0x007d1746
007d171a  MOV ECX,dword ptr [EBP + 0xc]
007d171d  MOVSX EDX,byte ptr [ECX]
007d1720  CMP EDX,0x6f
007d1723  JZ 0x007d1746
007d1725  MOV EAX,dword ptr [EBP + 0xc]
007d1728  MOVSX ECX,byte ptr [EAX]
007d172b  CMP ECX,0x75
007d172e  JZ 0x007d1746
007d1730  MOV EDX,dword ptr [EBP + 0xc]
007d1733  MOVSX EAX,byte ptr [EDX]
007d1736  CMP EAX,0x78
007d1739  JZ 0x007d1746
007d173b  MOV ECX,dword ptr [EBP + 0xc]
007d173e  MOVSX EDX,byte ptr [ECX]
007d1741  CMP EDX,0x58
007d1744  JNZ 0x007d1748
007d1746  JMP 0x007d1757
007d1748  MOV dword ptr [EBP + 0xfffffdb4],0x0
007d1752  JMP 0x007d147d
007d1757  JMP 0x007d1770
007d1759  MOV EAX,dword ptr [EBP + -0x10]
007d175c  OR EAX,0x20
007d175f  MOV dword ptr [EBP + -0x10],EAX
007d1762  JMP 0x007d1770
007d1764  MOV ECX,dword ptr [EBP + -0x10]
007d1767  OR ECX,0x800
007d176d  MOV dword ptr [EBP + -0x10],ECX
007d1770  JMP 0x007d2041
007d1775  MOVSX EDX,byte ptr [EBP + 0xfffffdbf]
007d177c  MOV dword ptr [EBP + 0xfffffd4c],EDX
007d1782  MOV EAX,dword ptr [EBP + 0xfffffd4c]
007d1788  SUB EAX,0x43
007d178b  MOV dword ptr [EBP + 0xfffffd4c],EAX
007d1791  CMP dword ptr [EBP + 0xfffffd4c],0x35
007d1798  JA 0x007d1e6d
007d179e  MOV ECX,dword ptr [EBP + 0xfffffd4c]
007d17a4  MOVZX EDX,byte ptr [ECX + 0x7d2120]
007d17ab  JMP dword ptr [EDX*0x4 + 0x7d20e4]
007d17b2  MOV EAX,dword ptr [EBP + -0x10]
007d17b5  AND EAX,0x830
007d17ba  JNZ 0x007d17c8
007d17bc  MOV ECX,dword ptr [EBP + -0x10]
007d17bf  OR ECX,0x800
007d17c5  MOV dword ptr [EBP + -0x10],ECX
007d17c8  MOV EDX,dword ptr [EBP + -0x10]
007d17cb  AND EDX,0x810
007d17d1  JZ 0x007d180f
007d17d3  LEA EAX,[EBP + 0x10]
007d17d6  PUSH EAX
007d17d7  CALL 0x007d22f0
007d17dc  ADD ESP,0x4
007d17df  MOV word ptr [EBP + 0xfffffdb8],AX
007d17e6  MOV CX,word ptr [EBP + 0xfffffdb8]
007d17ed  PUSH ECX
007d17ee  LEA EDX,[EBP + 0xfffffdc8]
007d17f4  PUSH EDX
007d17f5  CALL 0x007df050
007d17fa  ADD ESP,0x8
007d17fd  MOV dword ptr [EBP + -0x24],EAX
007d1800  CMP dword ptr [EBP + -0x24],0x0
007d1804  JGE 0x007d180d
007d1806  MOV dword ptr [EBP + -0x28],0x1
007d180d  JMP 0x007d1835
007d180f  LEA EAX,[EBP + 0x10]
007d1812  PUSH EAX
007d1813  CALL 0x007d22b0
007d1818  ADD ESP,0x4
007d181b  MOV word ptr [EBP + 0xfffffdac],AX
007d1822  MOV CL,byte ptr [EBP + 0xfffffdac]
007d1828  MOV byte ptr [EBP + 0xfffffdc8],CL
007d182e  MOV dword ptr [EBP + -0x24],0x1
007d1835  LEA EDX,[EBP + 0xfffffdc8]
007d183b  MOV dword ptr [EBP + -0x4],EDX
007d183e  JMP 0x007d1e6d
007d1843  LEA EAX,[EBP + 0x10]
007d1846  PUSH EAX
007d1847  CALL 0x007d22b0
007d184c  ADD ESP,0x4
007d184f  MOV dword ptr [EBP + 0xfffffda8],EAX
007d1855  CMP dword ptr [EBP + 0xfffffda8],0x0
007d185c  JZ 0x007d186a
007d185e  MOV ECX,dword ptr [EBP + 0xfffffda8]
007d1864  CMP dword ptr [ECX + 0x4],0x0
007d1868  JNZ 0x007d1884
007d186a  MOV EDX,dword ptr [0x00906ab0]
007d1870  MOV dword ptr [EBP + -0x4],EDX
007d1873  MOV EAX,dword ptr [EBP + -0x4]
007d1876  PUSH EAX
007d1877  CALL 0x007d0cd0
007d187c  ADD ESP,0x4
007d187f  MOV dword ptr [EBP + -0x24],EAX
007d1882  JMP 0x007d18d4
007d1884  MOV ECX,dword ptr [EBP + -0x10]
007d1887  AND ECX,0x800
007d188d  JZ 0x007d18b5
007d188f  MOV EDX,dword ptr [EBP + 0xfffffda8]
007d1895  MOV EAX,dword ptr [EDX + 0x4]
007d1898  MOV dword ptr [EBP + -0x4],EAX
007d189b  MOV ECX,dword ptr [EBP + 0xfffffda8]
007d18a1  MOVSX EAX,word ptr [ECX]
007d18a4  CDQ
007d18a5  SUB EAX,EDX
007d18a7  SAR EAX,0x1
007d18a9  MOV dword ptr [EBP + -0x24],EAX
007d18ac  MOV dword ptr [EBP + -0xc],0x1
007d18b3  JMP 0x007d18d4
007d18b5  MOV dword ptr [EBP + -0xc],0x0
007d18bc  MOV EDX,dword ptr [EBP + 0xfffffda8]
007d18c2  MOV EAX,dword ptr [EDX + 0x4]
007d18c5  MOV dword ptr [EBP + -0x4],EAX
007d18c8  MOV ECX,dword ptr [EBP + 0xfffffda8]
007d18ce  MOVSX EDX,word ptr [ECX]
007d18d1  MOV dword ptr [EBP + -0x24],EDX
007d18d4  JMP 0x007d1e6d
007d18d9  MOV EAX,dword ptr [EBP + -0x10]
007d18dc  AND EAX,0x830
007d18e1  JNZ 0x007d18ef
007d18e3  MOV ECX,dword ptr [EBP + -0x10]
007d18e6  OR ECX,0x800
007d18ec  MOV dword ptr [EBP + -0x10],ECX
007d18ef  CMP dword ptr [EBP + -0x30],-0x1
007d18f3  JNZ 0x007d1901
007d18f5  MOV dword ptr [EBP + 0xfffffd48],0x7fffffff
007d18ff  JMP 0x007d190a
007d1901  MOV EDX,dword ptr [EBP + -0x30]
007d1904  MOV dword ptr [EBP + 0xfffffd48],EDX
007d190a  MOV EAX,dword ptr [EBP + 0xfffffd48]
007d1910  MOV dword ptr [EBP + 0xfffffda0],EAX
007d1916  LEA ECX,[EBP + 0x10]
007d1919  PUSH ECX
007d191a  CALL 0x007d22b0
007d191f  ADD ESP,0x4
007d1922  MOV dword ptr [EBP + -0x4],EAX
007d1925  MOV EDX,dword ptr [EBP + -0x10]
007d1928  AND EDX,0x810
007d192e  JZ 0x007d1995
007d1930  CMP dword ptr [EBP + -0x4],0x0
007d1934  JNZ 0x007d193e
007d1936  MOV EAX,[0x00906ab4]
007d193b  MOV dword ptr [EBP + -0x4],EAX
007d193e  MOV dword ptr [EBP + -0xc],0x1
007d1945  MOV ECX,dword ptr [EBP + -0x4]
007d1948  MOV dword ptr [EBP + 0xfffffd9c],ECX
007d194e  MOV EDX,dword ptr [EBP + 0xfffffda0]
007d1954  MOV EAX,dword ptr [EBP + 0xfffffda0]
007d195a  SUB EAX,0x1
007d195d  MOV dword ptr [EBP + 0xfffffda0],EAX
007d1963  TEST EDX,EDX
007d1965  JZ 0x007d1985
007d1967  MOV ECX,dword ptr [EBP + 0xfffffd9c]
007d196d  MOVZX EDX,word ptr [ECX]
007d1970  TEST EDX,EDX
007d1972  JZ 0x007d1985
007d1974  MOV EAX,dword ptr [EBP + 0xfffffd9c]
007d197a  ADD EAX,0x2
007d197d  MOV dword ptr [EBP + 0xfffffd9c],EAX
007d1983  JMP 0x007d194e
007d1985  MOV ECX,dword ptr [EBP + 0xfffffd9c]
007d198b  SUB ECX,dword ptr [EBP + -0x4]
007d198e  SAR ECX,0x1
007d1990  MOV dword ptr [EBP + -0x24],ECX
007d1993  JMP 0x007d19f0
007d1995  CMP dword ptr [EBP + -0x4],0x0
007d1999  JNZ 0x007d19a4
007d199b  MOV EDX,dword ptr [0x00906ab0]
007d19a1  MOV dword ptr [EBP + -0x4],EDX
007d19a4  MOV EAX,dword ptr [EBP + -0x4]
007d19a7  MOV dword ptr [EBP + 0xfffffda4],EAX
007d19ad  MOV ECX,dword ptr [EBP + 0xfffffda0]
007d19b3  MOV EDX,dword ptr [EBP + 0xfffffda0]
007d19b9  SUB EDX,0x1
007d19bc  MOV dword ptr [EBP + 0xfffffda0],EDX
007d19c2  TEST ECX,ECX
007d19c4  JZ 0x007d19e4
007d19c6  MOV EAX,dword ptr [EBP + 0xfffffda4]
007d19cc  MOVSX ECX,byte ptr [EAX]
007d19cf  TEST ECX,ECX
007d19d1  JZ 0x007d19e4
007d19d3  MOV EDX,dword ptr [EBP + 0xfffffda4]
007d19d9  ADD EDX,0x1
007d19dc  MOV dword ptr [EBP + 0xfffffda4],EDX
007d19e2  JMP 0x007d19ad
007d19e4  MOV EAX,dword ptr [EBP + 0xfffffda4]
007d19ea  SUB EAX,dword ptr [EBP + -0x4]
007d19ed  MOV dword ptr [EBP + -0x24],EAX
007d19f0  JMP 0x007d1e6d
007d19f5  LEA ECX,[EBP + 0x10]
007d19f8  PUSH ECX
007d19f9  CALL 0x007d22b0
007d19fe  ADD ESP,0x4
007d1a01  MOV dword ptr [EBP + 0xfffffd98],EAX
007d1a07  MOV EDX,dword ptr [EBP + -0x10]
007d1a0a  AND EDX,0x20
007d1a0d  JZ 0x007d1a21
007d1a0f  MOV EAX,dword ptr [EBP + 0xfffffd98]
007d1a15  MOV CX,word ptr [EBP + 0xfffffdc4]
007d1a1c  MOV word ptr [EAX],CX
007d1a1f  JMP 0x007d1a2f
007d1a21  MOV EDX,dword ptr [EBP + 0xfffffd98]
007d1a27  MOV EAX,dword ptr [EBP + 0xfffffdc4]
007d1a2d  MOV dword ptr [EDX],EAX
007d1a2f  MOV dword ptr [EBP + -0x28],0x1
007d1a36  JMP 0x007d1e6d
007d1a3b  MOV dword ptr [EBP + -0x2c],0x1
007d1a42  MOVSX ECX,byte ptr [EBP + 0xfffffdbf]
007d1a49  ADD ECX,0x20
007d1a4c  MOV byte ptr [EBP + 0xfffffdbf],CL
007d1a52  MOV EDX,dword ptr [EBP + -0x10]
007d1a55  OR EDX,0x40
007d1a58  MOV dword ptr [EBP + -0x10],EDX
007d1a5b  LEA EAX,[EBP + 0xfffffdc8]
007d1a61  MOV dword ptr [EBP + -0x4],EAX
007d1a64  CMP dword ptr [EBP + -0x30],0x0
007d1a68  JGE 0x007d1a73
007d1a6a  MOV dword ptr [EBP + -0x30],0x6
007d1a71  JMP 0x007d1a9e
007d1a73  CMP dword ptr [EBP + -0x30],0x0
007d1a77  JNZ 0x007d1a8e
007d1a79  MOVSX ECX,byte ptr [EBP + 0xfffffdbf]
007d1a80  CMP ECX,0x67
007d1a83  JNZ 0x007d1a8e
007d1a85  MOV dword ptr [EBP + -0x30],0x1
007d1a8c  JMP 0x007d1a9e
007d1a8e  CMP dword ptr [EBP + -0x30],0x200
007d1a95  JLE 0x007d1a9e
007d1a97  MOV dword ptr [EBP + -0x30],0x200
007d1a9e  CMP dword ptr [EBP + -0x30],0xa3
007d1aa5  JLE 0x007d1add
007d1aa7  PUSH 0x300
007d1aac  PUSH 0x8bccbc
007d1ab1  PUSH 0x2
007d1ab3  MOV EDX,dword ptr [EBP + -0x30]
007d1ab6  ADD EDX,0x15d
007d1abc  PUSH EDX
007d1abd  CALL 0x007c6700
007d1ac2  ADD ESP,0x10
007d1ac5  MOV dword ptr [EBP + -0x20],EAX
007d1ac8  CMP dword ptr [EBP + -0x20],0x0
007d1acc  JZ 0x007d1ad6
007d1ace  MOV EAX,dword ptr [EBP + -0x20]
007d1ad1  MOV dword ptr [EBP + -0x4],EAX
007d1ad4  JMP 0x007d1add
007d1ad6  MOV dword ptr [EBP + -0x30],0xa3
007d1add  MOV ECX,dword ptr [EBP + 0x10]
007d1ae0  ADD ECX,0x8
007d1ae3  MOV dword ptr [EBP + 0x10],ECX
007d1ae6  MOV EDX,dword ptr [EBP + 0x10]
007d1ae9  MOV EAX,dword ptr [EDX + -0x8]
007d1aec  MOV ECX,dword ptr [EDX + -0x4]
007d1aef  MOV dword ptr [EBP + 0xfffffd90],EAX
007d1af5  MOV dword ptr [EBP + 0xfffffd94],ECX
007d1afb  MOV EDX,dword ptr [EBP + -0x2c]
007d1afe  PUSH EDX
007d1aff  MOV EAX,dword ptr [EBP + -0x30]
007d1b02  PUSH EAX
007d1b03  MOVSX ECX,byte ptr [EBP + 0xfffffdbf]
007d1b0a  PUSH ECX
007d1b0b  MOV EDX,dword ptr [EBP + -0x4]
007d1b0e  PUSH EDX
007d1b0f  LEA EAX,[EBP + 0xfffffd90]
007d1b15  PUSH EAX
007d1b16  CALL dword ptr [0x009068d0]
007d1b1c  ADD ESP,0x14
007d1b1f  MOV ECX,dword ptr [EBP + -0x10]
007d1b22  AND ECX,0x80
007d1b28  JZ 0x007d1b3d
007d1b2a  CMP dword ptr [EBP + -0x30],0x0
007d1b2e  JNZ 0x007d1b3d
007d1b30  MOV EDX,dword ptr [EBP + -0x4]
007d1b33  PUSH EDX
007d1b34  CALL dword ptr [0x009068dc]
007d1b3a  ADD ESP,0x4
007d1b3d  MOVSX EAX,byte ptr [EBP + 0xfffffdbf]
007d1b44  CMP EAX,0x67
007d1b47  JNZ 0x007d1b61
007d1b49  MOV ECX,dword ptr [EBP + -0x10]
007d1b4c  AND ECX,0x80
007d1b52  JNZ 0x007d1b61
007d1b54  MOV EDX,dword ptr [EBP + -0x4]
007d1b57  PUSH EDX
007d1b58  CALL dword ptr [0x009068d4]
007d1b5e  ADD ESP,0x4
007d1b61  MOV EAX,dword ptr [EBP + -0x4]
007d1b64  MOVSX ECX,byte ptr [EAX]
007d1b67  CMP ECX,0x2d
007d1b6a  JNZ 0x007d1b81
007d1b6c  MOV EDX,dword ptr [EBP + -0x10]
007d1b6f  OR EDX,0x100
007d1b75  MOV dword ptr [EBP + -0x10],EDX
007d1b78  MOV EAX,dword ptr [EBP + -0x4]
007d1b7b  ADD EAX,0x1
007d1b7e  MOV dword ptr [EBP + -0x4],EAX
007d1b81  MOV ECX,dword ptr [EBP + -0x4]
007d1b84  PUSH ECX
007d1b85  CALL 0x007d0cd0
007d1b8a  ADD ESP,0x4
007d1b8d  MOV dword ptr [EBP + -0x24],EAX
007d1b90  JMP 0x007d1e6d
007d1b95  MOV EDX,dword ptr [EBP + -0x10]
007d1b98  OR EDX,0x40
007d1b9b  MOV dword ptr [EBP + -0x10],EDX
007d1b9e  MOV dword ptr [EBP + -0x8],0xa
007d1ba5  JMP 0x007d1c14
007d1ba7  MOV dword ptr [EBP + -0x8],0xa
007d1bae  JMP 0x007d1c14
007d1bb0  MOV dword ptr [EBP + -0x30],0x8
007d1bb7  MOV dword ptr [EBP + 0xfffffdb0],0x7
007d1bc1  JMP 0x007d1bcd
007d1bc3  MOV dword ptr [EBP + 0xfffffdb0],0x27
007d1bcd  MOV dword ptr [EBP + -0x8],0x10
007d1bd4  MOV EAX,dword ptr [EBP + -0x10]
007d1bd7  AND EAX,0x80
007d1bdc  JZ 0x007d1bf5
007d1bde  MOV byte ptr [EBP + -0x14],0x30
007d1be2  MOV ECX,dword ptr [EBP + 0xfffffdb0]
007d1be8  ADD ECX,0x51
007d1beb  MOV byte ptr [EBP + -0x13],CL
007d1bee  MOV dword ptr [EBP + -0x1c],0x2
007d1bf5  JMP 0x007d1c14
007d1bf7  MOV dword ptr [EBP + -0x8],0x8
007d1bfe  MOV EDX,dword ptr [EBP + -0x10]
007d1c01  AND EDX,0x80
007d1c07  JZ 0x007d1c14
007d1c09  MOV EAX,dword ptr [EBP + -0x10]
007d1c0c  OR EAX,0x200
007d1c11  MOV dword ptr [EBP + -0x10],EAX
007d1c14  MOV ECX,dword ptr [EBP + -0x10]
007d1c17  AND ECX,0x8000
007d1c1d  JZ 0x007d1c3c
007d1c1f  LEA EDX,[EBP + 0x10]
007d1c22  PUSH EDX
007d1c23  CALL 0x007d22d0
007d1c28  ADD ESP,0x4
007d1c2b  MOV dword ptr [EBP + 0xfffffd80],EAX
007d1c31  MOV dword ptr [EBP + 0xfffffd84],EDX
007d1c37  JMP 0x007d1cc5
007d1c3c  MOV EAX,dword ptr [EBP + -0x10]
007d1c3f  AND EAX,0x20
007d1c42  JZ 0x007d1c88
007d1c44  MOV ECX,dword ptr [EBP + -0x10]
007d1c47  AND ECX,0x40
007d1c4a  JZ 0x007d1c6a
007d1c4c  LEA EDX,[EBP + 0x10]
007d1c4f  PUSH EDX
007d1c50  CALL 0x007d22b0
007d1c55  ADD ESP,0x4
007d1c58  MOVSX EAX,AX
007d1c5b  CDQ
007d1c5c  MOV dword ptr [EBP + 0xfffffd80],EAX
007d1c62  MOV dword ptr [EBP + 0xfffffd84],EDX
007d1c68  JMP 0x007d1c86
007d1c6a  LEA EAX,[EBP + 0x10]
007d1c6d  PUSH EAX
007d1c6e  CALL 0x007d22b0
007d1c73  ADD ESP,0x4
007d1c76  MOVZX EAX,AX
007d1c79  CDQ
007d1c7a  MOV dword ptr [EBP + 0xfffffd80],EAX
007d1c80  MOV dword ptr [EBP + 0xfffffd84],EDX
007d1c86  JMP 0x007d1cc5
007d1c88  MOV ECX,dword ptr [EBP + -0x10]
007d1c8b  AND ECX,0x40
007d1c8e  JZ 0x007d1cab
007d1c90  LEA EDX,[EBP + 0x10]
007d1c93  PUSH EDX
007d1c94  CALL 0x007d22b0
007d1c99  ADD ESP,0x4
007d1c9c  CDQ
007d1c9d  MOV dword ptr [EBP + 0xfffffd80],EAX
007d1ca3  MOV dword ptr [EBP + 0xfffffd84],EDX
007d1ca9  JMP 0x007d1cc5
007d1cab  LEA EAX,[EBP + 0x10]
007d1cae  PUSH EAX
007d1caf  CALL 0x007d22b0
007d1cb4  ADD ESP,0x4
007d1cb7  XOR ECX,ECX
007d1cb9  MOV dword ptr [EBP + 0xfffffd80],EAX
007d1cbf  MOV dword ptr [EBP + 0xfffffd84],ECX
007d1cc5  MOV EDX,dword ptr [EBP + -0x10]
007d1cc8  AND EDX,0x40
007d1ccb  JZ 0x007d1d0e
007d1ccd  CMP dword ptr [EBP + 0xfffffd84],0x0
007d1cd4  JG 0x007d1d0e
007d1cd6  JL 0x007d1ce1
007d1cd8  CMP dword ptr [EBP + 0xfffffd80],0x0
007d1cdf  JNC 0x007d1d0e
007d1ce1  MOV EAX,dword ptr [EBP + 0xfffffd80]
007d1ce7  NEG EAX
007d1ce9  MOV ECX,dword ptr [EBP + 0xfffffd84]
007d1cef  ADC ECX,0x0
007d1cf2  NEG ECX
007d1cf4  MOV dword ptr [EBP + 0xfffffd78],EAX
007d1cfa  MOV dword ptr [EBP + 0xfffffd7c],ECX
007d1d00  MOV EDX,dword ptr [EBP + -0x10]
007d1d03  OR EDX,0x100
007d1d09  MOV dword ptr [EBP + -0x10],EDX
007d1d0c  JMP 0x007d1d26
007d1d0e  MOV EAX,dword ptr [EBP + 0xfffffd80]
007d1d14  MOV dword ptr [EBP + 0xfffffd78],EAX
007d1d1a  MOV ECX,dword ptr [EBP + 0xfffffd84]
007d1d20  MOV dword ptr [EBP + 0xfffffd7c],ECX
007d1d26  MOV EDX,dword ptr [EBP + -0x10]
007d1d29  AND EDX,0x8000
007d1d2f  JNZ 0x007d1d4c
007d1d31  MOV EAX,dword ptr [EBP + 0xfffffd78]
007d1d37  MOV ECX,dword ptr [EBP + 0xfffffd7c]
007d1d3d  AND ECX,0x0
007d1d40  MOV dword ptr [EBP + 0xfffffd78],EAX
007d1d46  MOV dword ptr [EBP + 0xfffffd7c],ECX
007d1d4c  CMP dword ptr [EBP + -0x30],0x0
007d1d50  JGE 0x007d1d5b
007d1d52  MOV dword ptr [EBP + -0x30],0x1
007d1d59  JMP 0x007d1d74
007d1d5b  MOV EDX,dword ptr [EBP + -0x10]
007d1d5e  AND EDX,0xfffffff7
007d1d61  MOV dword ptr [EBP + -0x10],EDX
007d1d64  CMP dword ptr [EBP + -0x30],0x200
007d1d6b  JLE 0x007d1d74
007d1d6d  MOV dword ptr [EBP + -0x30],0x200
007d1d74  MOV EAX,dword ptr [EBP + 0xfffffd78]
007d1d7a  OR EAX,dword ptr [EBP + 0xfffffd7c]
007d1d80  JNZ 0x007d1d89
007d1d82  MOV dword ptr [EBP + -0x1c],0x0
007d1d89  LEA ECX,[EBP + -0x39]
007d1d8c  MOV dword ptr [EBP + -0x4],ECX
007d1d8f  MOV EDX,dword ptr [EBP + -0x30]
007d1d92  MOV EAX,dword ptr [EBP + -0x30]
007d1d95  SUB EAX,0x1
007d1d98  MOV dword ptr [EBP + -0x30],EAX
007d1d9b  TEST EDX,EDX
007d1d9d  JG 0x007d1dad
007d1d9f  MOV ECX,dword ptr [EBP + 0xfffffd78]
007d1da5  OR ECX,dword ptr [EBP + 0xfffffd7c]
007d1dab  JZ 0x007d1e28
007d1dad  MOV EAX,dword ptr [EBP + -0x8]
007d1db0  CDQ
007d1db1  PUSH EDX
007d1db2  PUSH EAX
007d1db3  MOV EDX,dword ptr [EBP + 0xfffffd7c]
007d1db9  PUSH EDX
007d1dba  MOV EAX,dword ptr [EBP + 0xfffffd78]
007d1dc0  PUSH EAX
007d1dc1  CALL 0x007dcac0
007d1dc6  ADD EAX,0x30
007d1dc9  MOV dword ptr [EBP + 0xfffffd8c],EAX
007d1dcf  MOV EAX,dword ptr [EBP + -0x8]
007d1dd2  CDQ
007d1dd3  PUSH EDX
007d1dd4  PUSH EAX
007d1dd5  MOV ECX,dword ptr [EBP + 0xfffffd7c]
007d1ddb  PUSH ECX
007d1ddc  MOV EDX,dword ptr [EBP + 0xfffffd78]
007d1de2  PUSH EDX
007d1de3  CALL 0x007dcb40
007d1de8  MOV dword ptr [EBP + 0xfffffd78],EAX
007d1dee  MOV dword ptr [EBP + 0xfffffd7c],EDX
007d1df4  CMP dword ptr [EBP + 0xfffffd8c],0x39
007d1dfb  JLE 0x007d1e0f
007d1dfd  MOV EAX,dword ptr [EBP + 0xfffffd8c]
007d1e03  ADD EAX,dword ptr [EBP + 0xfffffdb0]
007d1e09  MOV dword ptr [EBP + 0xfffffd8c],EAX
007d1e0f  MOV ECX,dword ptr [EBP + -0x4]
007d1e12  MOV DL,byte ptr [EBP + 0xfffffd8c]
007d1e18  MOV byte ptr [ECX],DL
007d1e1a  MOV EAX,dword ptr [EBP + -0x4]
007d1e1d  SUB EAX,0x1
007d1e20  MOV dword ptr [EBP + -0x4],EAX
007d1e23  JMP 0x007d1d8f
007d1e28  LEA ECX,[EBP + -0x39]
007d1e2b  SUB ECX,dword ptr [EBP + -0x4]
007d1e2e  MOV dword ptr [EBP + -0x24],ECX
007d1e31  MOV EDX,dword ptr [EBP + -0x4]
007d1e34  ADD EDX,0x1
007d1e37  MOV dword ptr [EBP + -0x4],EDX
007d1e3a  MOV EAX,dword ptr [EBP + -0x10]
007d1e3d  AND EAX,0x200
007d1e42  JZ 0x007d1e6d
007d1e44  MOV ECX,dword ptr [EBP + -0x4]
007d1e47  MOVSX EDX,byte ptr [ECX]
007d1e4a  CMP EDX,0x30
007d1e4d  JNZ 0x007d1e55
007d1e4f  CMP dword ptr [EBP + -0x24],0x0
007d1e53  JNZ 0x007d1e6d
007d1e55  MOV EAX,dword ptr [EBP + -0x4]
007d1e58  SUB EAX,0x1
007d1e5b  MOV dword ptr [EBP + -0x4],EAX
007d1e5e  MOV ECX,dword ptr [EBP + -0x4]
007d1e61  MOV byte ptr [ECX],0x30
007d1e64  MOV EDX,dword ptr [EBP + -0x24]
007d1e67  ADD EDX,0x1
007d1e6a  MOV dword ptr [EBP + -0x24],EDX
007d1e6d  CMP dword ptr [EBP + -0x28],0x0
007d1e71  JNZ 0x007d2026
007d1e77  MOV EAX,dword ptr [EBP + -0x10]
007d1e7a  AND EAX,0x40
007d1e7d  JZ 0x007d1ebf
007d1e7f  MOV ECX,dword ptr [EBP + -0x10]
007d1e82  AND ECX,0x100
007d1e88  JZ 0x007d1e97
007d1e8a  MOV byte ptr [EBP + -0x14],0x2d
007d1e8e  MOV dword ptr [EBP + -0x1c],0x1
007d1e95  JMP 0x007d1ebf
007d1e97  MOV EDX,dword ptr [EBP + -0x10]
007d1e9a  AND EDX,0x1
007d1e9d  JZ 0x007d1eac
007d1e9f  MOV byte ptr [EBP + -0x14],0x2b
007d1ea3  MOV dword ptr [EBP + -0x1c],0x1
007d1eaa  JMP 0x007d1ebf
007d1eac  MOV EAX,dword ptr [EBP + -0x10]
007d1eaf  AND EAX,0x2
007d1eb2  JZ 0x007d1ebf
007d1eb4  MOV byte ptr [EBP + -0x14],0x20
007d1eb8  MOV dword ptr [EBP + -0x1c],0x1
007d1ebf  MOV ECX,dword ptr [EBP + -0x18]
007d1ec2  SUB ECX,dword ptr [EBP + -0x24]
007d1ec5  SUB ECX,dword ptr [EBP + -0x1c]
007d1ec8  MOV dword ptr [EBP + 0xfffffd74],ECX
007d1ece  MOV EDX,dword ptr [EBP + -0x10]
007d1ed1  AND EDX,0xc
007d1ed4  JNZ 0x007d1ef2
007d1ed6  LEA EAX,[EBP + 0xfffffdc4]
007d1edc  PUSH EAX
007d1edd  MOV ECX,dword ptr [EBP + 0x8]
007d1ee0  PUSH ECX
007d1ee1  MOV EDX,dword ptr [EBP + 0xfffffd74]
007d1ee7  PUSH EDX
007d1ee8  PUSH 0x20
007d1eea  CALL 0x007d2200
007d1eef  ADD ESP,0x10
007d1ef2  LEA EAX,[EBP + 0xfffffdc4]
007d1ef8  PUSH EAX
007d1ef9  MOV ECX,dword ptr [EBP + 0x8]
007d1efc  PUSH ECX
007d1efd  MOV EDX,dword ptr [EBP + -0x1c]
007d1f00  PUSH EDX
007d1f01  LEA EAX,[EBP + -0x14]
007d1f04  PUSH EAX
007d1f05  CALL 0x007d2240
007d1f0a  ADD ESP,0x10
007d1f0d  MOV ECX,dword ptr [EBP + -0x10]
007d1f10  AND ECX,0x8
007d1f13  JZ 0x007d1f39
007d1f15  MOV EDX,dword ptr [EBP + -0x10]
007d1f18  AND EDX,0x4
007d1f1b  JNZ 0x007d1f39
007d1f1d  LEA EAX,[EBP + 0xfffffdc4]
007d1f23  PUSH EAX
007d1f24  MOV ECX,dword ptr [EBP + 0x8]
007d1f27  PUSH ECX
007d1f28  MOV EDX,dword ptr [EBP + 0xfffffd74]
007d1f2e  PUSH EDX
007d1f2f  PUSH 0x30
007d1f31  CALL 0x007d2200
007d1f36  ADD ESP,0x10
007d1f39  CMP dword ptr [EBP + -0xc],0x0
007d1f3d  JZ 0x007d1fe7
007d1f43  CMP dword ptr [EBP + -0x24],0x0
007d1f47  JLE 0x007d1fe7
007d1f4d  MOV EAX,dword ptr [EBP + -0x4]
007d1f50  MOV dword ptr [EBP + 0xfffffd70],EAX
007d1f56  MOV ECX,dword ptr [EBP + -0x24]
007d1f59  MOV dword ptr [EBP + 0xfffffd6c],ECX
007d1f5f  MOV EDX,dword ptr [EBP + 0xfffffd6c]
007d1f65  MOV EAX,dword ptr [EBP + 0xfffffd6c]
007d1f6b  SUB EAX,0x1
007d1f6e  MOV dword ptr [EBP + 0xfffffd6c],EAX
007d1f74  TEST EDX,EDX
007d1f76  JZ 0x007d1fe5
007d1f78  MOV ECX,dword ptr [EBP + 0xfffffd70]
007d1f7e  MOV DX,word ptr [ECX]
007d1f81  MOV word ptr [EBP + 0xfffffd46],DX
007d1f88  MOV AX,word ptr [EBP + 0xfffffd46]
007d1f8f  PUSH EAX
007d1f90  LEA ECX,[EBP + 0xfffffd60]
007d1f96  PUSH ECX
007d1f97  CALL 0x007df050
007d1f9c  ADD ESP,0x8
007d1f9f  MOV dword ptr [EBP + 0xfffffd68],EAX
007d1fa5  MOV EDX,dword ptr [EBP + 0xfffffd70]
007d1fab  ADD EDX,0x2
007d1fae  MOV dword ptr [EBP + 0xfffffd70],EDX
007d1fb4  CMP dword ptr [EBP + 0xfffffd68],0x0
007d1fbb  JG 0x007d1fbf
007d1fbd  JMP 0x007d1fe5
007d1fbf  LEA EAX,[EBP + 0xfffffdc4]
007d1fc5  PUSH EAX
007d1fc6  MOV ECX,dword ptr [EBP + 0x8]
007d1fc9  PUSH ECX
007d1fca  MOV EDX,dword ptr [EBP + 0xfffffd68]
007d1fd0  PUSH EDX
007d1fd1  LEA EAX,[EBP + 0xfffffd60]
007d1fd7  PUSH EAX
007d1fd8  CALL 0x007d2240
007d1fdd  ADD ESP,0x10
007d1fe0  JMP 0x007d1f5f
007d1fe5  JMP 0x007d2002
007d1fe7  LEA ECX,[EBP + 0xfffffdc4]
007d1fed  PUSH ECX
007d1fee  MOV EDX,dword ptr [EBP + 0x8]
007d1ff1  PUSH EDX
007d1ff2  MOV EAX,dword ptr [EBP + -0x24]
007d1ff5  PUSH EAX
007d1ff6  MOV ECX,dword ptr [EBP + -0x4]
007d1ff9  PUSH ECX
007d1ffa  CALL 0x007d2240
007d1fff  ADD ESP,0x10
007d2002  MOV EDX,dword ptr [EBP + -0x10]
007d2005  AND EDX,0x4
007d2008  JZ 0x007d2026
007d200a  LEA EAX,[EBP + 0xfffffdc4]
007d2010  PUSH EAX
007d2011  MOV ECX,dword ptr [EBP + 0x8]
007d2014  PUSH ECX
007d2015  MOV EDX,dword ptr [EBP + 0xfffffd74]
007d201b  PUSH EDX
007d201c  PUSH 0x20
007d201e  CALL 0x007d2200
007d2023  ADD ESP,0x10
007d2026  CMP dword ptr [EBP + -0x20],0x0
007d202a  JZ 0x007d2041
007d202c  PUSH 0x2
007d202e  MOV EAX,dword ptr [EBP + -0x20]
007d2031  PUSH EAX
007d2032  CALL 0x007c7290
007d2037  ADD ESP,0x8
007d203a  MOV dword ptr [EBP + -0x20],0x0
007d2041  JMP 0x007d13c3
007d2046  MOV EAX,dword ptr [EBP + 0xfffffdc4]
007d204c  MOV ECX,dword ptr [EBP + -0x34]
007d204f  CALL 0x007d6cb0
007d2054  MOV ESP,EBP
007d2056  POP EBP
007d2057  RET
