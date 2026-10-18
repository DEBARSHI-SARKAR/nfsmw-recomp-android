004b15e0  PUSH EBP
004b15e1  MOV EBP,ESP
004b15e3  AND ESP,0xfffffff0
004b15e6  PUSH -0x1
004b15e8  PUSH 0x86b42b
004b15ed  MOV EAX,FS:[0x0]
004b15f3  PUSH EAX
004b15f4  MOV dword ptr FS:[0x0],ESP
004b15fb  SUB ESP,0x108
004b1601  MOV EAX,[0x00911fa8]
004b1606  PUSH EBX
004b1607  PUSH ESI
004b1608  PUSH EDI
004b1609  XOR EDI,EDI
004b160b  CMP EAX,EDI
004b160d  MOV ESI,ECX
004b160f  JZ 0x004b19ee
004b1615  CMP dword ptr [ESI + 0x1c],EDI
004b1618  JZ 0x004b19ee
004b161e  MOV AL,byte ptr [ESI + 0x11]
004b1621  TEST AL,AL
004b1623  JZ 0x004b19ee
004b1629  MOV EAX,dword ptr [ESI + 0x14]
004b162c  CMP EAX,EDI
004b162e  JZ 0x004b19ee
004b1634  MOV CL,byte ptr [EAX + 0x22d]
004b163a  TEST CL,CL
004b163c  JZ 0x004b19ee
004b1642  MOV EAX,dword ptr [EAX + 0x248]
004b1648  PUSH EAX
004b1649  LEA ECX,[ESP + 0x14]
004b164d  CALL 0x004ae3f0
004b1652  MOV EAX,dword ptr [ESI + 0x1c]
004b1655  MOV ECX,dword ptr [ESI + 0x14]
004b1658  PUSH EAX
004b1659  ADD ECX,0x10
004b165c  MOV dword ptr [ESP + 0x120],EDI
004b1663  CALL 0x00445090
004b1668  LEA ECX,[ESP + 0x10]
004b166c  PUSH ECX
004b166d  MOV ECX,ESI
004b166f  CALL 0x006e9e40
004b1674  TEST AL,AL
004b1676  JNZ 0x004b171e
004b167c  MOV EDX,dword ptr [ESI + 0x14]
004b167f  MOV byte ptr [EDX + 0x22c],AL
004b1685  MOV EAX,dword ptr [ESI + 0x14]
004b1688  MOV dword ptr [EAX + 0x90],EDI
004b168e  MOV dword ptr [EAX + 0x94],EDI
004b1694  MOV dword ptr [EAX + 0x98],EDI
004b169a  ADD EAX,0x90
004b169f  MOV EAX,dword ptr [ESI + 0x14]
004b16a2  ADD EAX,0x70
004b16a5  MOV dword ptr [EAX],EDI
004b16a7  MOV dword ptr [EAX + 0x4],EDI
004b16aa  MOV dword ptr [EAX + 0x8],EDI
004b16ad  MOV EAX,dword ptr [ESI + 0x14]
004b16b0  ADD EAX,0x50
004b16b3  MOV dword ptr [EAX],EDI
004b16b5  MOV dword ptr [EAX + 0x4],EDI
004b16b8  MOV dword ptr [EAX + 0x8],EDI
004b16bb  MOV EAX,dword ptr [ESI + 0x14]
004b16be  MOV dword ptr [EAX + 0xa4],EDI
004b16c4  MOV ECX,dword ptr [ESI + 0x14]
004b16c7  ADD ECX,0xbc
004b16cd  CALL 0x004ab150
004b16d2  MOV ECX,dword ptr [ESI + 0x14]
004b16d5  ADD ECX,0x100
004b16db  CALL 0x004ab150
004b16e0  MOV ECX,dword ptr [ESI + 0x14]
004b16e3  ADD ECX,0x144
004b16e9  CALL 0x004ab150
004b16ee  MOV ECX,dword ptr [ESI + 0x14]
004b16f1  ADD ECX,0x188
004b16f7  CALL 0x004ab150
004b16fc  MOV ESI,dword ptr [ESI + 0x14]
004b16ff  ADD ESI,0x1d0
004b1705  MOV dword ptr [ESI],EDI
004b1707  MOV dword ptr [ESI + 0x4],EDI
004b170a  MOV dword ptr [ESI + 0x8],EDI
004b170d  MOV dword ptr [ESI + 0xc],EDI
004b1710  MOV dword ptr [ESI + 0x10],EDI
004b1713  MOV dword ptr [ESI + 0x14],EDI
004b1716  MOV dword ptr [ESI + 0x18],EDI
004b1719  JMP 0x004b19da
004b171e  MOV ECX,dword ptr [ESI + 0x14]
004b1721  MOV byte ptr [ECX + 0x22c],0x1
004b1728  MOV EAX,dword ptr [ESI + 0x14]
004b172b  FLD float ptr [EAX + 0x50]
004b172e  MOV EDX,dword ptr [EAX + 0x58]
004b1731  FLD float ptr [EAX + 0x54]
004b1734  MOV ECX,EDX
004b1736  MOV dword ptr [EAX + 0x78],ECX
004b1739  FXCH
004b173b  FSTP float ptr [EAX + 0x70]
004b173e  MOV dword ptr [ESP + 0xc],EDX
004b1742  FSTP float ptr [EAX + 0x74]
004b1745  MOV ECX,dword ptr [ESI + 0x20]
004b1748  FLD float ptr [ECX]
004b174a  MOV EAX,dword ptr [ESI + 0x14]
004b174d  FLD float ptr [ECX + 0x4]
004b1750  MOV EDX,dword ptr [ECX + 0x8]
004b1753  ADD EAX,0x50
004b1756  FXCH
004b1758  FSTP float ptr [EAX]
004b175a  MOV ECX,EDX
004b175c  MOV dword ptr [EAX + 0x8],ECX
004b175f  FSTP float ptr [EAX + 0x4]
004b1762  MOV EAX,dword ptr [ESI + 0x14]
004b1765  MOV dword ptr [ESP + 0xc],EDX
004b1769  LEA EDX,[EAX + 0x70]
004b176c  PUSH EDX
004b176d  LEA ECX,[EAX + 0x50]
004b1770  PUSH ECX
004b1771  ADD EAX,0x90
004b1776  PUSH EAX
004b1777  CALL 0x004021e0
004b177c  FLD float ptr [0x0089096c]
004b1782  FDIV float ptr [EBP + 0x8]
004b1785  MOV EAX,dword ptr [ESI + 0x14]
004b1788  ADD ESP,0x8
004b178b  ADD EAX,0x90
004b1790  FSTP float ptr [ESP]
004b1793  PUSH EAX
004b1794  PUSH EAX
004b1795  CALL 0x00402270
004b179a  MOV EDX,dword ptr [ESI + 0x14]
004b179d  MOV EAX,dword ptr [ESP + 0x20]
004b17a1  MOV dword ptr [EDX + 0x1dc],EAX
004b17a7  MOVZX ECX,byte ptr [ESP + 0xfc]
004b17af  MOV EDX,dword ptr [ESI + 0x14]
004b17b2  MOV dword ptr [EDX + 0x1d4],ECX
004b17b8  MOV EAX,dword ptr [ESI + 0x14]
004b17bb  MOV ECX,dword ptr [ESP + 0x100]
004b17c2  MOV dword ptr [EAX + 0x1d8],ECX
004b17c8  MOV EDX,dword ptr [ESI + 0x14]
004b17cb  MOV EAX,dword ptr [ESP + 0x24]
004b17cf  MOV dword ptr [EDX + 0x1e0],EAX
004b17d5  MOV ECX,dword ptr [ESI + 0x14]
004b17d8  MOV EDX,dword ptr [ESP + 0xf8]
004b17df  MOV dword ptr [ECX + 0x1e8],EDX
004b17e5  MOV EAX,dword ptr [ESI + 0x14]
004b17e8  MOV ECX,dword ptr [ESP + 0x28]
004b17ec  MOV dword ptr [EAX + 0x80],ECX
004b17f2  MOV EDX,dword ptr [ESI + 0x14]
004b17f5  MOV EAX,dword ptr [ESP + 0x2c]
004b17f9  MOV dword ptr [EDX + 0xa0],EAX
004b17ff  FLD float ptr [ESP + 0x30]
004b1803  FMUL float ptr [0x008941f0]
004b1809  CALL 0x007c4b80
004b180e  MOV ECX,dword ptr [ESI + 0x14]
004b1811  MOV word ptr [ECX + 0x1cc],AX
004b1818  MOV EDX,dword ptr [ESI + 0x14]
004b181b  MOV EAX,dword ptr [ESP + 0x48]
004b181f  MOV dword ptr [EDX + 0x1f4],EAX
004b1825  MOV ECX,dword ptr [ESI + 0x14]
004b1828  MOV DL,byte ptr [ESP + 0x4c]
004b182c  MOV byte ptr [ECX + 0x1f8],DL
004b1832  MOV EAX,dword ptr [ESI + 0x14]
004b1835  MOV ECX,dword ptr [ESP + 0x50]
004b1839  MOV dword ptr [EAX + 0x23c],ECX
004b183f  MOV EDX,dword ptr [ESI + 0x14]
004b1842  MOV EAX,dword ptr [ESP + 0x54]
004b1846  MOV dword ptr [EDX + 0x240],EAX
004b184c  FLD float ptr [ESP + 0x58]
004b1850  FCHS
004b1852  MOV ECX,dword ptr [ESI + 0x14]
004b1855  FSTP float ptr [ECX + 0x244]
004b185b  MOV EDX,dword ptr [ESI + 0x14]
004b185e  MOV EAX,dword ptr [ESP + 0x5c]
004b1862  MOV dword ptr [EDX + 0xac],EAX
004b1868  MOV EAX,dword ptr [ESI + 0x20]
004b186b  PUSH EAX
004b186c  CALL 0x00402240
004b1871  MOV ECX,dword ptr [ESI + 0x14]
004b1874  FSTP float ptr [ECX + 0xa4]
004b187a  MOV EDX,dword ptr [ESI + 0x14]
004b187d  MOV EAX,dword ptr [ESP + 0x108]
004b1884  MOV dword ptr [EDX + 0x238],EAX
004b188a  MOV ECX,dword ptr [ESI + 0x14]
004b188d  MOV EDX,dword ptr [ESP + 0x110]
004b1894  MOV dword ptr [ECX + 0x24c],EDX
004b189a  MOV EAX,dword ptr [ESI + 0x14]
004b189d  MOV ECX,dword ptr [ESP + 0x114]
004b18a4  MOV dword ptr [EAX + 0x254],ECX
004b18aa  MOV EDX,dword ptr [ESI + 0x14]
004b18ad  MOV EAX,dword ptr [ESP + 0x118]
004b18b4  LEA ECX,[ESP + 0x68]
004b18b8  ADD ESP,0x10
004b18bb  MOV dword ptr [EDX + 0x258],EAX
004b18c1  XOR EBX,EBX
004b18c3  MOV dword ptr [ESP + 0xc],ECX
004b18c7  JMP 0x004b18d0
004b18d0  MOV AL,byte ptr [ESP + EBX*0x1 + 0xe8]
004b18d7  XOR EDX,EDX
004b18d9  TEST AL,AL
004b18db  MOV EAX,dword ptr [ESI + 0x14]
004b18de  SETNZ DL
004b18e1  MOV dword ptr [EDI + EAX*0x1 + 0xcc],EDX
004b18e8  FLD float ptr [ESP + EBX*0x8 + 0xac]
004b18ef  MOV ECX,dword ptr [ESI + 0x14]
004b18f2  FLD float ptr [ESP + EBX*0x8 + 0xa8]
004b18f9  FSTP float ptr [EDI + ECX*0x1 + 0xbc]
004b1900  LEA EAX,[EDI + ECX*0x1 + 0xbc]
004b1907  FSTP float ptr [EAX + 0x4]
004b190a  MOV EDX,dword ptr [ESI + 0x14]
004b190d  FLD float ptr [0x0089096c]
004b1913  FSUB float ptr [ESP + EBX*0x4 + 0x2c]
004b1917  FSTP float ptr [EDI + EDX*0x1 + 0xc8]
004b191e  MOV EAX,dword ptr [ESI + 0x14]
004b1921  ADD EAX,EDI
004b1923  LEA ECX,[EAX + 0xe4]
004b1929  MOV EAX,dword ptr [EAX + 0xd4]
004b192f  PUSH EAX
004b1930  CALL 0x0045a760
004b1935  MOV EDX,dword ptr [ESP + 0xc]
004b1939  MOV ECX,dword ptr [ESI + 0x14]
004b193c  MOV EAX,dword ptr [EDX]
004b193e  LEA ECX,[EDI + ECX*0x1 + 0xd0]
004b1945  PUSH EAX
004b1946  CALL 0x0045a760
004b194b  MOV ECX,dword ptr [ESP + EBX*0x4 + 0xc8]
004b1952  MOV EAX,dword ptr [ESI + 0x14]
004b1955  MOV dword ptr [EDI + EAX*0x1 + 0xf8],ECX
004b195c  MOV EDX,dword ptr [ESI + 0x14]
004b195f  MOV CL,byte ptr [EDI + EDX*0x1 + 0xfc]
004b1966  LEA EAX,[EDI + EDX*0x1]
004b1969  MOV byte ptr [EAX + 0xfd],CL
004b196f  MOV EDX,dword ptr [ESI + 0x14]
004b1972  MOV AL,byte ptr [ESP + EBX*0x1 + 0xfc]
004b1979  MOV byte ptr [EDI + EDX*0x1 + 0xfc],AL
004b1980  MOV EDX,dword ptr [ESP + EBX*0x4 + 0xd8]
004b1987  MOV ECX,dword ptr [ESI + 0x14]
004b198a  MOV dword ptr [EDI + ECX*0x1 + 0xc4],EDX
004b1991  MOV EDX,dword ptr [ESP + 0xc]
004b1995  ADD EDX,0x14
004b1998  ADD EDI,0x44
004b199b  INC EBX
004b199c  CMP EDI,0x110
004b19a2  MOV dword ptr [ESP + 0xc],EDX
004b19a6  JL 0x004b18d0
004b19ac  MOV EAX,dword ptr [ESI + 0x14]
004b19af  MOV ECX,dword ptr [ESP + 0x28]
004b19b3  CMP dword ptr [EAX + 0x1f0],ECX
004b19b9  JZ 0x004b19d0
004b19bb  MOV dword ptr [EAX + 0x1f0],ECX
004b19c1  MOV ECX,dword ptr [ESI + 0x14]
004b19c4  MOV dword ptr [ECX + 0x1ec],0x1
004b19ce  JMP 0x004b19da
004b19d0  MOV dword ptr [EAX + 0x1ec],0x0
004b19da  LEA ECX,[ESP + 0x10]
004b19de  MOV dword ptr [ESP + 0x11c],0xffffffff
004b19e9  CALL 0x004ae660
004b19ee  MOV ECX,dword ptr [ESP + 0x114]
004b19f5  POP EDI
004b19f6  POP ESI
004b19f7  MOV dword ptr FS:[0x0],ECX
004b19fe  POP EBX
004b19ff  MOV ESP,EBP
004b1a01  POP EBP
004b1a02  RET 0x4
