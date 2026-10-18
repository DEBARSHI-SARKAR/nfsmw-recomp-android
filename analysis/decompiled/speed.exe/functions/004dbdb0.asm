004dbdb0  PUSH -0x1
004dbdb2  PUSH 0x86cb1b
004dbdb7  MOV EAX,FS:[0x0]
004dbdbd  PUSH EAX
004dbdbe  MOV dword ptr FS:[0x0],ESP
004dbdc5  PUSH ECX
004dbdc6  PUSH EBX
004dbdc7  PUSH EBP
004dbdc8  MOV EBP,ECX
004dbdca  MOV EAX,dword ptr [EBP + 0x14]
004dbdcd  MOV EAX,dword ptr [EAX + 0x34]
004dbdd0  XOR EBX,EBX
004dbdd2  CMP EAX,EBX
004dbdd4  JZ 0x004dbf0b
004dbdda  MOV EAX,dword ptr [EBP + 0x10]
004dbddd  CMP EAX,EBX
004dbddf  JZ 0x004dbde8
004dbde1  MOV dword ptr [EAX + 0x3c],0x1
004dbde8  CMP byte ptr [0x00904ff9],BL
004dbdee  JNZ 0x004dbdfc
004dbdf0  CMP dword ptr [0x009b0894],EBX
004dbdf6  JNZ 0x004dbdfc
004dbdf8  XOR EAX,EAX
004dbdfa  JMP 0x004dbe01
004dbdfc  MOV EAX,0x1
004dbe01  XOR ECX,ECX
004dbe03  CMP AL,BL
004dbe05  SETNZ CL
004dbe08  PUSH ESI
004dbe09  MOV ESI,dword ptr [EBP + 0x28]
004dbe0c  CMP ESI,EBX
004dbe0e  MOV dword ptr [EBP + 0x2c],ECX
004dbe11  JZ 0x004dbe27
004dbe13  MOV ECX,dword ptr [ESI]
004dbe15  CMP ECX,EBX
004dbe17  JZ 0x004dbe1e
004dbe19  CALL 0x00831782
004dbe1e  PUSH ESI
004dbe1f  CALL 0x00831682
004dbe24  ADD ESP,0x4
004dbe27  MOV ECX,dword ptr [0x00911fa8]
004dbe2d  PUSH EBP
004dbe2e  CALL 0x004b8db0
004dbe33  PUSH 0x5c
004dbe35  CALL 0x00831667
004dbe3a  MOV ESI,EAX
004dbe3c  ADD ESP,0x4
004dbe3f  MOV dword ptr [ESP + 0xc],ESI
004dbe43  CMP ESI,EBX
004dbe45  MOV dword ptr [ESP + 0x18],EBX
004dbe49  JZ 0x004dbee5
004dbe4f  MOV EAX,dword ptr [EBP + 0x2c]
004dbe52  CMP EAX,EBX
004dbe54  PUSH EDI
004dbe55  LEA EDI,[ESI + 0x4]
004dbe58  MOV dword ptr [EDI],EBX
004dbe5a  MOV dword ptr [ESI + 0x8],EBX
004dbe5d  MOV dword ptr [ESI + 0xc],EBX
004dbe60  MOV dword ptr [ESI + 0x10],EBX
004dbe63  JGE 0x004dbe69
004dbe65  XOR EAX,EAX
004dbe67  JMP 0x004dbe73
004dbe69  CMP EAX,0x3
004dbe6c  JLE 0x004dbe73
004dbe6e  MOV EAX,0x3
004dbe73  PUSH ESI
004dbe74  PUSH EDI
004dbe75  PUSH 0x9147dc
004dbe7a  MOV dword ptr [ESI + 0x14],EAX
004dbe7d  MOV dword ptr [ESI + 0x18],EBX
004dbe80  MOV dword ptr [ESI + 0x1c],EBX
004dbe83  MOV dword ptr [ESI + 0x20],EBX
004dbe86  MOV dword ptr [ESI + 0x24],EBX
004dbe89  MOV dword ptr [ESI + 0x28],EBX
004dbe8c  MOV dword ptr [ESI + 0x2c],EBX
004dbe8f  MOV dword ptr [ESI + 0x30],EBX
004dbe92  MOV dword ptr [ESI + 0x34],EBX
004dbe95  MOV dword ptr [ESI + 0x38],EBX
004dbe98  MOV dword ptr [ESI + 0x3c],EBX
004dbe9b  MOV dword ptr [ESI + 0x40],EBX
004dbe9e  MOV dword ptr [ESI + 0x44],EBX
004dbea1  MOV dword ptr [ESI + 0x48],EBX
004dbea4  MOV dword ptr [ESI + 0x4c],0x61a8
004dbeab  MOV dword ptr [ESI + 0x50],EBX
004dbeae  MOV dword ptr [ESI + 0x54],0x7fff
004dbeb5  MOV dword ptr [ESI + 0x58],EBX
004dbeb8  CALL 0x00831a8a
004dbebd  ADD ESP,0xc
004dbec0  CMP EAX,EBX
004dbec2  JGE 0x004dbee2
004dbec4  PUSH 0x8f02f8
004dbec9  MOV ECX,0x9147dc
004dbece  CALL 0x0083198b
004dbed3  PUSH ESI
004dbed4  PUSH EDI
004dbed5  PUSH 0x9147dc
004dbeda  CALL 0x00831a8a
004dbedf  ADD ESP,0xc
004dbee2  POP EDI
004dbee3  JMP 0x004dbee7
004dbee5  XOR ESI,ESI
004dbee7  MOV dword ptr [EBP + 0x28],ESI
004dbeea  MOV ECX,dword ptr [ESI]
004dbeec  CMP ECX,EBX
004dbeee  MOV dword ptr [ESP + 0x18],0xffffffff
004dbef6  MOV dword ptr [ESP + 0xc],EBX
004dbefa  POP ESI
004dbefb  JZ 0x004dbf07
004dbefd  LEA EDX,[ESP + 0x8]
004dbf01  PUSH EDX
004dbf02  CALL 0x008311aa
004dbf07  MOV byte ptr [EBP + 0x8],0x1
004dbf0b  MOV ECX,dword ptr [ESP + 0xc]
004dbf0f  POP EBP
004dbf10  POP EBX
004dbf11  MOV dword ptr FS:[0x0],ECX
004dbf18  ADD ESP,0x10
004dbf1b  RET
