004e17f0  SUB ESP,0x250
004e17f6  PUSH EBX
004e17f7  PUSH ESI
004e17f8  MOV ESI,ECX
004e17fa  MOV ECX,dword ptr [ESI + 0x28]
004e17fd  TEST ECX,ECX
004e17ff  PUSH EDI
004e1800  JZ 0x004e180e
004e1802  MOV EAX,dword ptr [ESI + 0x30]
004e1805  PUSH EAX
004e1806  CALL 0x004e15e0
004e180b  FSTP float ptr [ESI + 0x40]
004e180e  MOV EDX,dword ptr [ESI + 0x30]
004e1811  MOV ECX,dword ptr [ESI + 0x34]
004e1814  SUB ECX,EDX
004e1816  MOV dword ptr [ESP + 0x2c],ECX
004e181a  FILD dword ptr [ESP + 0x2c]
004e181e  MOV EDX,dword ptr [ESI + 0x3c]
004e1821  MOV EAX,dword ptr [ESI + 0x14]
004e1824  XOR EDI,EDI
004e1826  CMP EDX,EAX
004e1828  FIDIV dword ptr [ESI + 0x38]
004e182b  MOV dword ptr [ESP + 0x24],EDI
004e182f  FSTP float ptr [ESP + 0x2c]
004e1833  JGE 0x004e19e0
004e1839  MOV ECX,dword ptr [ESI + 0x28]
004e183c  TEST ECX,ECX
004e183e  JZ 0x004e19e0
004e1844  MOV EAX,dword ptr [ESI + 0x2c]
004e1847  PUSH EAX
004e1848  CALL 0x004e15e0
004e184d  FSTP float ptr [ESP + 0x18]
004e1851  FILD dword ptr [ESI + 0x14]
004e1854  MOV ECX,dword ptr [ESP + 0x18]
004e1858  PUSH ECX
004e1859  MOV ECX,dword ptr [ESI + 0x28]
004e185c  FSTP float ptr [ESP + 0x18]
004e1860  CALL 0x004e14c0
004e1865  FDIVR float ptr [ESP + 0x14]
004e1869  MOV EDX,dword ptr [ESI + 0x40]
004e186c  MOV ECX,dword ptr [ESI + 0x28]
004e186f  PUSH EDX
004e1870  FSTP float ptr [ESP + 0x18]
004e1874  CALL 0x004e14c0
004e1879  FDIVR float ptr [ESP + 0x2c]
004e187d  FLD float ptr [ESI + 0x40]
004e1880  FSUB float ptr [ESP + 0x18]
004e1884  FSTP float ptr [ESP + 0x18]
004e1888  FSUB float ptr [ESP + 0x14]
004e188c  FSTP float ptr [ESP + 0x28]
004e1890  FILD dword ptr [ESI + 0x3c]
004e1893  FIDIV dword ptr [ESI + 0x14]
004e1896  FST float ptr [ESP + 0x14]
004e189a  FMUL float ptr [ESP + 0x28]
004e189e  FADD float ptr [ESP + 0x18]
004e18a2  FSTP float ptr [ESP + 0x20]
004e18a6  FLD float ptr [ESP + 0x28]
004e18aa  FADD float ptr [ESP + 0x18]
004e18ae  FSTP float ptr [ESP + 0x10]
004e18b2  FLD float ptr [ESP + 0x20]
004e18b6  FIST dword ptr [ESP + 0x30]
004e18ba  FISUB dword ptr [ESP + 0x30]
004e18be  FSTP float ptr [ESP + 0xc]
004e18c2  FLD float ptr [ESP + 0x10]
004e18c6  FIST dword ptr [ESP + 0x34]
004e18ca  FISUB dword ptr [ESP + 0x34]
004e18ce  FSTP float ptr [ESP + 0x1c]
004e18d2  MOV EAX,dword ptr [ESP + 0x1c]
004e18d6  MOV ECX,dword ptr [ESP + 0x34]
004e18da  MOV EBX,dword ptr [ESP + 0x30]
004e18de  SAR EAX,0x1f
004e18e1  ADD EAX,ECX
004e18e3  MOV ECX,dword ptr [ESP + 0xc]
004e18e7  SAR ECX,0x1f
004e18ea  ADD ECX,EBX
004e18ec  CMP ECX,EAX
004e18ee  JZ 0x004e1960
004e18f0  FLD float ptr [ESP + 0x20]
004e18f4  FCOMP float ptr [ESP + 0x10]
004e18f8  FNSTSW AX
004e18fa  TEST AH,0x5
004e18fd  JP 0x004e1931
004e18ff  FLD float ptr [ESP + 0x20]
004e1903  FIST dword ptr [ESP + 0x10]
004e1907  FISUBR dword ptr [ESP + 0x10]
004e190b  FSTP float ptr [ESP + 0xc]
004e190f  MOV EDX,dword ptr [ESP + 0xc]
004e1913  MOV EDI,dword ptr [ESP + 0x10]
004e1917  SAR EDX,0x1f
004e191a  SUB EDI,EDX
004e191c  MOV dword ptr [ESP + 0x24],EDI
004e1920  FILD dword ptr [ESP + 0x24]
004e1924  FSUB float ptr [ESP + 0x18]
004e1928  FDIV float ptr [ESP + 0x28]
004e192c  JMP 0x004e19da
004e1931  FLD float ptr [ESP + 0x20]
004e1935  FIST dword ptr [ESP + 0x10]
004e1939  FISUB dword ptr [ESP + 0x10]
004e193d  FSTP float ptr [ESP + 0xc]
004e1941  MOV EDI,dword ptr [ESP + 0xc]
004e1945  MOV EAX,dword ptr [ESP + 0x10]
004e1949  SAR EDI,0x1f
004e194c  ADD EDI,EAX
004e194e  MOV dword ptr [ESP + 0x24],EDI
004e1952  FILD dword ptr [ESP + 0x24]
004e1956  FSUB float ptr [ESP + 0x18]
004e195a  FDIV float ptr [ESP + 0x28]
004e195e  JMP 0x004e19da
004e1960  FLD float ptr [ESP + 0x28]
004e1964  FABS
004e1966  FSTP float ptr [ESP + 0xc]
004e196a  FLD float ptr [ESP + 0xc]
004e196e  FIST dword ptr [ESP + 0x10]
004e1972  FISUBR dword ptr [ESP + 0x10]
004e1976  FSTP float ptr [ESP + 0x1c]
004e197a  FLD float ptr [ESP + 0x20]
004e197e  MOV EAX,dword ptr [ESP + 0x1c]
004e1982  FABS
004e1984  MOV ECX,dword ptr [ESP + 0x10]
004e1988  SAR EAX,0x1f
004e198b  SUB ECX,EAX
004e198d  MOV dword ptr [ESP + 0xc],ECX
004e1991  FILD dword ptr [ESP + 0xc]
004e1995  FCOMPP
004e1997  FNSTSW AX
004e1999  TEST AH,0x5
004e199c  JP 0x004e19e0
004e199e  FLD float ptr [ESP + 0x20]
004e19a2  MOV EDX,dword ptr [ESP + 0x14]
004e19a6  FCOMP float ptr [0x00890968]
004e19ac  MOV dword ptr [ESP + 0x14],EDX
004e19b0  FNSTSW AX
004e19b2  TEST AH,0x5
004e19b5  JP 0x004e19c3
004e19b7  MOV EAX,dword ptr [ESP + 0x20]
004e19bb  PUSH EAX
004e19bc  CALL 0x004e0ff0
004e19c1  JMP 0x004e19cd
004e19c3  MOV ECX,dword ptr [ESP + 0x20]
004e19c7  PUSH ECX
004e19c8  CALL 0x004e1020
004e19cd  FLD float ptr [ESP + 0x18]
004e19d1  MOV EDI,EAX
004e19d3  ADD ESP,0x4
004e19d6  MOV dword ptr [ESP + 0x24],EDI
004e19da  TEST EDI,EDI
004e19dc  JNZ 0x004e19e6
004e19de  FSTP ST0
004e19e0  FLD float ptr [0x0089096c]
004e19e6  FILD dword ptr [ESI + 0x14]
004e19e9  PUSH EBP
004e19ea  FMUL ST1
004e19ec  FSTP float ptr [ESP + 0x10]
004e19f0  FSTP ST0
004e19f2  FLD float ptr [ESP + 0x10]
004e19f6  FISTP dword ptr [ESP + 0x20]
004e19fa  MOV ECX,dword ptr [ESI + 0x28]
004e19fd  TEST ECX,ECX
004e19ff  MOV EBP,dword ptr [ESP + 0x20]
004e1a03  MOV EBX,EBP
004e1a05  JZ 0x004e1a19
004e1a07  MOV EDX,dword ptr [ESP + 0x264]
004e1a0e  MOV EAX,dword ptr [ESI + 0x2c]
004e1a11  PUSH EDX
004e1a12  PUSH EBP
004e1a13  PUSH EAX
004e1a14  CALL 0x004e1740
004e1a19  MOV EDX,dword ptr [ESI + 0x2c]
004e1a1c  MOV ECX,dword ptr [ESI + 0x3c]
004e1a1f  ADD EDX,EBP
004e1a21  SUB ECX,EBP
004e1a23  MOV dword ptr [ESI + 0x2c],EDX
004e1a26  MOV EAX,EDX
004e1a28  MOV dword ptr [ESI + 0x3c],ECX
004e1a2b  JNS 0x004e1a34
004e1a2d  MOV dword ptr [ESI + 0x3c],0x0
004e1a34  TEST EDI,EDI
004e1a36  JZ 0x004e1b55
004e1a3c  MOV ECX,dword ptr [ESP + 0x264]
004e1a43  LEA EBX,[ECX + EBP*0x2]
004e1a46  MOV ECX,dword ptr [ESI + 0x28]
004e1a49  TEST ECX,ECX
004e1a4b  JZ 0x004e1a8d
004e1a4d  MOV EDX,dword ptr [ESI + 0x18]
004e1a50  PUSH EBX
004e1a51  PUSH EDX
004e1a52  PUSH EAX
004e1a53  CALL 0x004e1740
004e1a58  MOV EAX,dword ptr [ESI + 0x2c]
004e1a5b  MOV ECX,dword ptr [ESI + 0x28]
004e1a5e  PUSH EAX
004e1a5f  CALL 0x004e15e0
004e1a64  FILD dword ptr [ESP + 0x28]
004e1a68  PUSH ECX
004e1a69  MOV ECX,dword ptr [ESI + 0x28]
004e1a6c  FADD ST0,ST1
004e1a6e  FSTP float ptr [ESP]
004e1a71  FSTP ST0
004e1a73  CALL 0x004e1410
004e1a78  MOV EDX,dword ptr [ESI + 0x18]
004e1a7b  LEA ECX,[ESP + 0x60]
004e1a7f  PUSH ECX
004e1a80  MOV ECX,dword ptr [ESI + 0x28]
004e1a83  PUSH EDX
004e1a84  PUSH EAX
004e1a85  MOV dword ptr [ESI + 0x2c],EAX
004e1a88  CALL 0x004e1740
004e1a8d  MOV EAX,dword ptr [ESI + 0x18]
004e1a90  MOV dword ptr [ESP + 0x10],EAX
004e1a94  FILD dword ptr [ESP + 0x10]
004e1a98  XOR ECX,ECX
004e1a9a  TEST EAX,EAX
004e1a9c  FDIVR float ptr [0x0089096c]
004e1aa2  MOV dword ptr [ESP + 0x1c],0x0
004e1aaa  FSTP float ptr [ESP + 0x14]
004e1aae  JLE 0x004e1b08
004e1ab0  LEA EDI,[ESP + 0x60]
004e1ab4  MOV EAX,EBX
004e1ab6  SUB EDI,EBX
004e1ab8  JMP 0x004e1ac0
004e1ac0  MOVSX EDX,word ptr [EAX]
004e1ac3  MOVSX EBX,word ptr [EDI + EAX*0x1]
004e1ac7  SUB EBX,EDX
004e1ac9  MOV dword ptr [ESP + 0x10],EBX
004e1acd  MOV dword ptr [ESP + 0x20],EDX
004e1ad1  FILD dword ptr [ESP + 0x10]
004e1ad5  FMUL float ptr [ESP + 0x1c]
004e1ad9  FIADD dword ptr [ESP + 0x20]
004e1add  FSTP float ptr [ESP + 0x10]
004e1ae1  FLD float ptr [ESP + 0x10]
004e1ae5  FISTP dword ptr [ESP + 0x18]
004e1ae9  MOV DX,word ptr [ESP + 0x18]
004e1aee  FLD float ptr [ESP + 0x14]
004e1af2  FADD float ptr [ESP + 0x1c]
004e1af6  MOV word ptr [EAX],DX
004e1af9  MOV EDX,dword ptr [ESI + 0x18]
004e1afc  INC ECX
004e1afd  ADD EAX,0x2
004e1b00  FSTP float ptr [ESP + 0x1c]
004e1b04  CMP ECX,EDX
004e1b06  JL 0x004e1ac0
004e1b08  MOV EAX,dword ptr [ESI + 0x18]
004e1b0b  MOV EDI,dword ptr [ESI + 0x14]
004e1b0e  MOV ECX,dword ptr [ESI + 0x10]
004e1b11  LEA EBX,[EAX + EBP*0x1]
004e1b14  MOV EBP,dword ptr [ESI + 0x2c]
004e1b17  ADD EBP,EAX
004e1b19  SUB ECX,EAX
004e1b1b  SUB EDI,EBX
004e1b1d  TEST EDI,EDI
004e1b1f  MOV dword ptr [ESI + 0x2c],EBP
004e1b22  MOV EDX,EBP
004e1b24  MOV dword ptr [ESI + 0x3c],ECX
004e1b27  JLE 0x004e1b55
004e1b29  MOV ECX,dword ptr [ESI + 0x28]
004e1b2c  TEST ECX,ECX
004e1b2e  JZ 0x004e1b42
004e1b30  MOV EAX,dword ptr [ESP + 0x264]
004e1b37  LEA EAX,[EAX + EBX*0x2]
004e1b3a  PUSH EAX
004e1b3b  PUSH EDI
004e1b3c  PUSH EDX
004e1b3d  CALL 0x004e1740
004e1b42  MOV ECX,dword ptr [ESI + 0x2c]
004e1b45  MOV EAX,dword ptr [ESI + 0x3c]
004e1b48  MOV EBX,dword ptr [ESI + 0x14]
004e1b4b  ADD ECX,EDI
004e1b4d  SUB EAX,EDI
004e1b4f  MOV dword ptr [ESI + 0x2c],ECX
004e1b52  MOV dword ptr [ESI + 0x3c],EAX
004e1b55  FILD dword ptr [ESI + 0x30]
004e1b58  FADD float ptr [ESP + 0x30]
004e1b5c  FSTP float ptr [ESP + 0x10]
004e1b60  FLD float ptr [ESP + 0x10]
004e1b64  FISTP dword ptr [ESP + 0x20]
004e1b68  MOV EAX,dword ptr [ESI + 0x38]
004e1b6b  CMP EAX,0x1
004e1b6e  MOV ECX,dword ptr [ESP + 0x20]
004e1b72  MOV dword ptr [ESI + 0x30],ECX
004e1b75  POP EBP
004e1b76  JLE 0x004e1b7c
004e1b78  DEC EAX
004e1b79  MOV dword ptr [ESI + 0x38],EAX
004e1b7c  MOV EAX,dword ptr [ESP + 0x3c]
004e1b80  MOV EDX,EAX
004e1b82  XOR EDX,EBX
004e1b84  AND EDX,0x7fffffff
004e1b8a  XOR EAX,EDX
004e1b8c  MOV dword ptr [ESP + 0x3c],EAX
004e1b90  MOV EAX,dword ptr [ESP + 0x260]
004e1b97  MOV dword ptr [ESP + 0x44],EAX
004e1b9b  CALL 0x0081bccb
004e1ba0  MOV EDX,dword ptr [ESI + 0x1c]
004e1ba3  LEA ECX,[ESP + 0x38]
004e1ba7  PUSH ECX
004e1ba8  PUSH EDX
004e1ba9  CALL 0x0081deee
004e1bae  ADD ESP,0x8
004e1bb1  CALL 0x0081bcd9
004e1bb6  POP EDI
004e1bb7  POP ESI
004e1bb8  POP EBX
004e1bb9  ADD ESP,0x250
004e1bbf  RET 0x4
