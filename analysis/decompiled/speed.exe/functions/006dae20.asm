006dae20  MOV EDX,dword ptr [0x00982960]
006dae26  MOV EAX,[0x00982bdc]
006dae2b  MOV ECX,dword ptr [EAX]
006dae2d  SUB ESP,0x20
006dae30  PUSH EDI
006dae31  PUSH EDX
006dae32  XOR EDI,EDI
006dae34  PUSH EDI
006dae35  PUSH EAX
006dae36  CALL dword ptr [ECX + 0x94]
006dae3c  CMP dword ptr [0x00901808],EDI
006dae42  JLE 0x006dae53
006dae44  MOV EAX,[0x00982bdc]
006dae49  MOV ECX,dword ptr [EAX]
006dae4b  PUSH EDI
006dae4c  PUSH EAX
006dae4d  CALL dword ptr [ECX + 0x9c]
006dae53  PUSH ESI
006dae54  PUSH EDI
006dae55  PUSH 0x1
006dae57  PUSH 0x8ae868
006dae5c  CALL 0x00460bf0
006dae61  ADD ESP,0x4
006dae64  PUSH EAX
006dae65  CALL 0x00503400
006dae6a  MOV ESI,dword ptr [EAX]
006dae6c  MOV EAX,[0x00982bdc]
006dae71  MOV EDX,dword ptr [EAX]
006dae73  ADD ESP,0xc
006dae76  PUSH 0xff786482
006dae7b  PUSH 0xc1
006dae80  PUSH EAX
006dae81  CALL dword ptr [EDX + 0xe4]
006dae87  MOV EAX,dword ptr [ESI + 0x18]
006dae8a  PUSH -0x1
006dae8c  PUSH 0xe
006dae8e  PUSH 0x1
006dae90  PUSH 0x1
006dae92  LEA ECX,[ESP + 0x18]
006dae96  PUSH ECX
006dae97  LEA EDX,[ESP + 0x20]
006dae9b  PUSH EDX
006dae9c  MOV dword ptr [ESP + 0x24],EAX
006daea0  MOV EAX,[0x00982960]
006daea5  PUSH 0x1
006daea7  PUSH EAX
006daea8  MOV dword ptr [ESP + 0x28],0xffffffff
006daeb0  CALL 0x006d3b80
006daeb5  MOV EAX,[0x00901808]
006daeba  ADD ESP,0x20
006daebd  CMP EAX,EDI
006daebf  JLE 0x006daedf
006daec1  MOV ECX,dword ptr [0x0093e7bc]
006daec7  MOV EDX,dword ptr [0x0093e7b8]
006daecd  PUSH ECX
006daece  PUSH EDX
006daecf  CALL 0x006d40e0
006daed4  MOV EDX,dword ptr [0x0093e7b8]
006daeda  ADD ESP,0x8
006daedd  JMP 0x006daee5
006daedf  MOV EDX,dword ptr [0x00982960]
006daee5  MOV EAX,[0x00982bdc]
006daeea  MOV ECX,dword ptr [EAX]
006daeec  PUSH EDX
006daeed  PUSH EDI
006daeee  PUSH EAX
006daeef  CALL dword ptr [ECX + 0x94]
006daef5  MOV EDX,dword ptr [0x00982a2c]
006daefb  MOV EAX,[0x00982bdc]
006daf00  MOV ECX,dword ptr [EAX]
006daf02  PUSH EDX
006daf03  PUSH EAX
006daf04  CALL dword ptr [ECX + 0x9c]
006daf0a  MOV EAX,[0x00982bdc]
006daf0f  MOV ECX,dword ptr [EAX]
006daf11  PUSH 0x7
006daf13  PUSH 0xa8
006daf18  PUSH EAX
006daf19  CALL dword ptr [ECX + 0xe4]
006daf1f  MOV ECX,dword ptr [0x0093debc]
006daf25  MOV dword ptr [0x00982c80],ECX
006daf2b  MOV EDX,dword ptr [ECX]
006daf2d  MOV ESI,ECX
006daf2f  CALL dword ptr [EDX + 0x4]
006daf32  MOV EDX,dword ptr [ESI + 0x4c]
006daf35  MOV EAX,[0x00982bdc]
006daf3a  MOV ECX,dword ptr [EAX]
006daf3c  PUSH EDX
006daf3d  PUSH EAX
006daf3e  CALL dword ptr [ECX + 0x15c]
006daf44  MOV ESI,dword ptr [ESI + 0x48]
006daf47  MOV EAX,dword ptr [ESI]
006daf49  PUSH EDI
006daf4a  LEA ECX,[ESP + 0x10]
006daf4e  PUSH ECX
006daf4f  PUSH ESI
006daf50  CALL dword ptr [EAX + 0xfc]
006daf56  MOV EAX,[0x00982bdc]
006daf5b  MOV EDX,dword ptr [EAX]
006daf5d  PUSH 0x1
006daf5f  PUSH 0x7
006daf61  PUSH EAX
006daf62  CALL dword ptr [EDX + 0xe4]
006daf68  MOV EAX,[0x00982bdc]
006daf6d  MOV ECX,dword ptr [EAX]
006daf6f  PUSH EDI
006daf70  PUSH 0xe
006daf72  PUSH EAX
006daf73  CALL dword ptr [ECX + 0xe4]
006daf79  PUSH EDI
006daf7a  PUSH 0x919650
006daf7f  CALL 0x00505e80
006daf84  PUSH EDI
006daf85  PUSH EDI
006daf86  PUSH 0x919650
006daf8b  CALL 0x00750b00
006daf90  PUSH EDI
006daf91  PUSH 0x919650
006daf96  CALL 0x00744840
006daf9b  PUSH EDI
006daf9c  PUSH 0x919650
006dafa1  CALL 0x00738860
006dafa6  PUSH 0x919650
006dafab  CALL 0x00507770
006dafb0  MOV ECX,dword ptr [0x0093debc]
006dafb6  MOV EDX,dword ptr [ECX]
006dafb8  ADD ESP,0x28
006dafbb  MOV ESI,ECX
006dafbd  CALL dword ptr [EDX + 0x8]
006dafc0  MOV EAX,dword ptr [ESI + 0x48]
006dafc3  MOV ECX,dword ptr [EAX]
006dafc5  PUSH EAX
006dafc6  CALL dword ptr [ECX + 0x10c]
006dafcc  CMP dword ptr [0x00901808],EDI
006dafd2  MOV dword ptr [0x00982c80],EDI
006dafd8  POP ESI
006dafd9  JLE 0x006daffa
006dafdb  MOV ECX,dword ptr [0x00982960]
006dafe1  MOV EAX,[0x00982bdc]
006dafe6  MOV EDX,dword ptr [EAX]
006dafe8  PUSH EDI
006dafe9  PUSH EDI
006dafea  PUSH ECX
006dafeb  MOV ECX,dword ptr [0x0093e7b8]
006daff1  PUSH EDI
006daff2  PUSH ECX
006daff3  PUSH EAX
006daff4  CALL dword ptr [EDX + 0x88]
006daffa  MOV EAX,[0x00982bdc]
006dafff  MOV EDX,dword ptr [EAX]
006db001  PUSH 0x1
006db003  PUSH 0xe
006db005  PUSH EAX
006db006  CALL dword ptr [EDX + 0xe4]
006db00c  CALL 0x006e2f50
006db011  MOV EDX,dword ptr [0x0093dac0]
006db017  MOV EAX,[0x00982bdc]
006db01c  MOV ECX,dword ptr [EAX]
006db01e  PUSH EDX
006db01f  PUSH EDI
006db020  PUSH EAX
006db021  CALL dword ptr [ECX + 0x94]
006db027  MOV EDX,dword ptr [0x0093dac4]
006db02d  MOV EAX,[0x00982bdc]
006db032  MOV ECX,dword ptr [EAX]
006db034  PUSH EDX
006db035  PUSH EAX
006db036  CALL dword ptr [ECX + 0x9c]
006db03c  MOV ECX,dword ptr [0x0093dad0]
006db042  MOV EAX,[0x0093dacc]
006db047  MOV dword ptr [ESP + 0x18],ECX
006db04b  MOV dword ptr [ESP + 0x14],EAX
006db04f  MOV EAX,[0x00982bdc]
006db054  LEA ECX,[ESP + 0xc]
006db058  PUSH ECX
006db059  MOV dword ptr [ESP + 0x10],EDI
006db05d  MOV dword ptr [ESP + 0x14],EDI
006db061  MOV dword ptr [ESP + 0x20],0x0
006db069  MOV dword ptr [ESP + 0x24],0x3f800000
006db071  MOV EDX,dword ptr [EAX]
006db073  PUSH EAX
006db074  CALL dword ptr [EDX + 0xbc]
006db07a  MOV EAX,[0x009017fc]
006db07f  MOV dword ptr [0x00982c80],EDI
006db085  CMP EAX,EDI
006db087  MOV dword ptr [0x00982a20],0x93dab8
006db091  POP EDI
006db092  JNZ 0x006db0cc
006db094  MOV EAX,[0x00982bdc]
006db099  MOV EDX,dword ptr [EAX]
006db09b  PUSH 0x7
006db09d  PUSH 0xa8
006db0a2  PUSH EAX
006db0a3  CALL dword ptr [EDX + 0xe4]
006db0a9  MOV ECX,dword ptr [0x00982a28]
006db0af  PUSH -0x1
006db0b1  PUSH 0x2
006db0b3  PUSH 0x2
006db0b5  PUSH 0x1
006db0b7  LEA EAX,[ESP + 0x10]
006db0bb  PUSH EAX
006db0bc  PUSH 0x93e7bc
006db0c1  PUSH 0x1
006db0c3  PUSH ECX
006db0c4  CALL 0x006d3b80
006db0c9  ADD ESP,0x20
006db0cc  ADD ESP,0x20
006db0cf  RET
