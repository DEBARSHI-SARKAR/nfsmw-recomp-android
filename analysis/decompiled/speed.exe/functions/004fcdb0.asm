004fcdb0  SUB ESP,0xc
004fcdb3  PUSH EBX
004fcdb4  XOR EAX,EAX
004fcdb6  MOV EBX,ECX
004fcdb8  CMP dword ptr [EBX + 0x18],EAX
004fcdbb  MOV dword ptr [ESP + 0x4],EAX
004fcdbf  MOV dword ptr [ESP + 0xc],EAX
004fcdc3  MOV dword ptr [ESP + 0x8],EAX
004fcdc7  JLE 0x004fce66
004fcdcd  PUSH EBP
004fcdce  MOV EBP,dword ptr [ESP + 0x18]
004fcdd2  PUSH ESI
004fcdd3  PUSH EDI
004fcdd4  MOV EDI,dword ptr [ESP + 0x24]
004fcdd8  JMP 0x004fcde0
004fcde0  MOV ECX,dword ptr [EBX + 0x14]
004fcde3  MOV EDX,dword ptr [ECX + 0x74]
004fcde6  MOV ESI,dword ptr [EDX + EAX*0x8 + 0x4]
004fcdea  TEST ESI,ESI
004fcdec  JZ 0x004fce4c
004fcdee  MOV EAX,dword ptr [ESI + 0x38]
004fcdf1  XOR CL,CL
004fcdf3  TEST EAX,EAX
004fcdf5  JZ 0x004fce11
004fcdf7  MOV EAX,dword ptr [ESI + 0x30]
004fcdfa  CMP EAX,EDI
004fcdfc  JL 0x004fce11
004fcdfe  MOV EDX,dword ptr [ESP + 0x28]
004fce02  ADD EDX,EDI
004fce04  CMP EAX,EDX
004fce06  JGE 0x004fce11
004fce08  SUB EAX,EDI
004fce0a  ADD EAX,EBP
004fce0c  MOV dword ptr [ESI + 0x70],EAX
004fce0f  MOV CL,0x1
004fce11  MOV EAX,dword ptr [ESI + 0x3c]
004fce14  TEST EAX,EAX
004fce16  JZ 0x004fce32
004fce18  MOV EAX,dword ptr [ESI + 0x34]
004fce1b  CMP EAX,EDI
004fce1d  JL 0x004fce32
004fce1f  MOV EDX,dword ptr [ESP + 0x28]
004fce23  ADD EDX,EDI
004fce25  CMP EAX,EDX
004fce27  JGE 0x004fce32
004fce29  SUB EAX,EDI
004fce2b  ADD EAX,EBP
004fce2d  MOV dword ptr [ESI + 0x74],EAX
004fce30  JMP 0x004fce36
004fce32  TEST CL,CL
004fce34  JZ 0x004fce4c
004fce36  MOV EAX,dword ptr [ESI + 0x70]
004fce39  TEST EAX,EAX
004fce3b  JZ 0x004fce4c
004fce3d  MOV ECX,ESI
004fce3f  CALL 0x006ddd90
004fce44  INC dword ptr [ESP + 0x10]
004fce48  MOV dword ptr [ESP + 0x18],ESI
004fce4c  MOV EAX,dword ptr [ESP + 0x14]
004fce50  MOV ECX,dword ptr [EBX + 0x18]
004fce53  INC EAX
004fce54  CMP EAX,ECX
004fce56  MOV dword ptr [ESP + 0x14],EAX
004fce5a  JL 0x004fcde0
004fce5c  CMP dword ptr [ESP + 0x10],0x1
004fce61  POP EDI
004fce62  POP ESI
004fce63  POP EBP
004fce64  JZ 0x004fce6a
004fce66  XOR EAX,EAX
004fce68  JMP 0x004fce6e
004fce6a  MOV EAX,dword ptr [ESP + 0xc]
004fce6e  PUSH 0x1
004fce70  PUSH EAX
004fce71  PUSH EBX
004fce72  CALL 0x00506ef0
004fce77  PUSH 0x1
004fce79  PUSH EBX
004fce7a  CALL 0x00585d10
004fce7f  ADD ESP,0x14
004fce82  MOV dword ptr [0x00915fe4],0x1
004fce8c  POP EBX
004fce8d  ADD ESP,0xc
004fce90  RET 0xc
