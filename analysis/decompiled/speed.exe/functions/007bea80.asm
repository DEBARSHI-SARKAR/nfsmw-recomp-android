007bea80  SUB ESP,0x8
007bea83  MOV EAX,[0x0091cf90]
007bea88  PUSH ESI
007bea89  PUSH EDI
007bea8a  MOV EDI,ECX
007bea8c  MOV ECX,dword ptr [EAX + 0x10]
007bea8f  MOV EDX,dword ptr [EDI + 0x34]
007bea92  MOV EAX,dword ptr [EDX + 0x8]
007bea95  ADD ECX,0x414
007bea9b  PUSH EAX
007bea9c  MOV dword ptr [ESP + 0xc],EDI
007beaa0  CALL 0x0056ecc0
007beaa5  MOV ESI,EAX
007beaa7  CMP byte ptr [ESI + 0x10],0xff
007beaab  JZ 0x007bebfd
007beab1  MOV EAX,dword ptr [EDI + 0x68]
007beab4  PUSH EBP
007beab5  LEA EBP,[EDI + 0x68]
007beab8  CMP EAX,EBP
007beaba  JZ 0x007beadd
007beabc  LEA ESP,[ESP]
007beac0  MOV EAX,dword ptr [EBP]
007beac3  MOV ECX,dword ptr [EAX]
007beac5  MOV EDX,dword ptr [EAX + 0x4]
007beac8  MOV dword ptr [EDX],ECX
007beaca  PUSH EAX
007beacb  MOV dword ptr [ECX + 0x4],EDX
007beace  CALL 0x00466440
007bead3  MOV EAX,dword ptr [EBP]
007bead6  ADD ESP,0x4
007bead9  CMP EAX,EBP
007beadb  JNZ 0x007beac0
007beadd  MOV ECX,dword ptr [EDI + 0x4c]
007beae0  MOV EDI,dword ptr [ECX + 0x48]
007beae3  PUSH EBX
007beae4  PUSH EDI
007beae5  CALL 0x00739680
007beaea  PUSH 0x8b7ab8
007beaef  CALL 0x00460bf0
007beaf4  ADD ESP,0x8
007beaf7  MOV ECX,ESI
007beaf9  CALL 0x005816b0
007beafe  PUSH -0x1
007beb00  PUSH 0x0
007beb02  MOV EBX,EAX
007beb04  PUSH EDI
007beb05  PUSH EBX
007beb06  MOV ECX,0x9b26a8
007beb0b  CALL 0x00747e10
007beb10  MOV ESI,EAX
007beb12  TEST ESI,ESI
007beb14  JZ 0x007beb35
007beb16  PUSH ESI
007beb17  MOV ECX,EBP
007beb19  CALL 0x007b4020
007beb1e  PUSH -0x1
007beb20  PUSH 0x0
007beb22  PUSH EDI
007beb23  PUSH EBX
007beb24  PUSH ESI
007beb25  MOV ECX,0x9b26a8
007beb2a  CALL 0x00747e30
007beb2f  MOV ESI,EAX
007beb31  TEST ESI,ESI
007beb33  JNZ 0x007beb16
007beb35  MOV ESI,dword ptr [EBP]
007beb38  CMP ESI,EBP
007beb3a  MOV EBX,dword ptr [ESP + 0x10]
007beb3e  MOV dword ptr [EBX + 0x70],ESI
007beb41  JZ 0x007beba3
007beb43  JMP 0x007beb50
007beb50  MOV EDX,dword ptr [0x0091cf90]
007beb56  MOV ECX,dword ptr [EDX + 0x10]
007beb59  MOV EAX,[0x009b9ec4]
007beb5e  MOV EBX,dword ptr [ESI + 0x8]
007beb61  XOR EDX,EDX
007beb63  MOV DL,byte ptr [EAX + 0x10]
007beb66  ADD ECX,0x414
007beb6c  PUSH EDX
007beb6d  CALL 0x0056f100
007beb72  MOV ECX,dword ptr [0x009b9ec4]
007beb78  PUSH EDI
007beb79  MOV dword ptr [ESP + 0x18],EAX
007beb7d  CALL 0x005816b0
007beb82  MOV ECX,dword ptr [ESP + 0x18]
007beb86  PUSH EAX
007beb87  CALL 0x0056f250
007beb8c  CMP EBX,EAX
007beb8e  JZ 0x007beb98
007beb90  MOV ESI,dword ptr [ESI]
007beb92  CMP ESI,EBP
007beb94  JNZ 0x007beb50
007beb96  JMP 0x007beb9f
007beb98  MOV EAX,dword ptr [ESP + 0x10]
007beb9c  MOV dword ptr [EAX + 0x70],ESI
007beb9f  MOV EBX,dword ptr [ESP + 0x10]
007beba3  MOV ECX,0x9b9ec0
007beba8  CALL 0x007b5a50
007bebad  MOV ECX,dword ptr [0x0091cf90]
007bebb3  MOV EDX,dword ptr [EBX + 0x34]
007bebb6  MOV ECX,dword ptr [ECX + 0x10]
007bebb9  MOV EAX,dword ptr [EDX + 0x8]
007bebbc  ADD ECX,0x414
007bebc2  PUSH EAX
007bebc3  CALL 0x0056ecc0
007bebc8  CMP byte ptr [EAX + 0x10],0xff
007bebcc  JZ 0x007bebfb
007bebce  CMP dword ptr [EBP],EBP
007bebd1  JZ 0x007bebfb
007bebd3  MOV ECX,dword ptr [EBX + 0x70]
007bebd6  MOV ESI,dword ptr [ECX + 0x8]
007bebd9  MOV ECX,ESI
007bebdb  CALL 0x00739860
007bebe0  PUSH EAX
007bebe1  CALL 0x00739940
007bebe6  MOV EDX,dword ptr [EBX + 0x4c]
007bebe9  MOV EAX,dword ptr [EDX + 0x48]
007bebec  ADD ESP,0x4
007bebef  PUSH ESI
007bebf0  PUSH EAX
007bebf1  MOV ECX,0x9b9ec0
007bebf6  CALL 0x007af110
007bebfb  POP EBX
007bebfc  POP EBP
007bebfd  POP EDI
007bebfe  POP ESI
007bebff  ADD ESP,0x8
007bec02  RET
