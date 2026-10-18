007bb3e0  PUSH -0x1
007bb3e2  PUSH 0x883636
007bb3e7  MOV EAX,FS:[0x0]
007bb3ed  PUSH EAX
007bb3ee  MOV dword ptr FS:[0x0],ESP
007bb3f5  PUSH ECX
007bb3f6  PUSH EBX
007bb3f7  PUSH EBP
007bb3f8  MOV EBP,dword ptr [ESP + 0x1c]
007bb3fc  PUSH ESI
007bb3fd  PUSH EDI
007bb3fe  MOV EDI,ECX
007bb400  PUSH EBP
007bb401  MOV dword ptr [ESP + 0x14],EDI
007bb405  CALL 0x0059bc40
007bb40a  XOR EBX,EBX
007bb40c  LEA ESI,[EDI + 0x158]
007bb412  MOV dword ptr [EDI],0x8b7e48
007bb418  MOV byte ptr [EDI + 0x148],BL
007bb41e  MOV dword ptr [EDI + 0x14c],EBX
007bb424  MOV dword ptr [ESI],0x8b7244
007bb42a  MOV dword ptr [ESI + 0x4],EBX
007bb42d  MOV dword ptr [ESI + 0x8],0x3f800000
007bb434  MOV dword ptr [ESI + 0xc],EBX
007bb437  MOV dword ptr [ESI + 0x10],EBX
007bb43a  MOV dword ptr [ESI + 0x14],EBX
007bb43d  MOV dword ptr [ESI + 0x18],0x5
007bb444  MOV dword ptr [ESI + 0x1c],EBX
007bb447  MOV dword ptr [ESI + 0x4c],EBX
007bb44a  MOV dword ptr [ESP + 0x1c],EBX
007bb44e  MOV dword ptr [ESI + 0x24],EBX
007bb451  MOV dword ptr [ESI + 0x28],EBX
007bb454  MOV dword ptr [ESI + 0x2c],EBX
007bb457  MOV dword ptr [ESI + 0x30],EBX
007bb45a  MOV dword ptr [ESI + 0x34],EBX
007bb45d  MOV dword ptr [ESI + 0x38],EBX
007bb460  MOV dword ptr [ESI + 0x3c],EBX
007bb463  MOV dword ptr [ESI + 0x40],EBX
007bb466  MOV dword ptr [ESI + 0x44],EBX
007bb469  MOV dword ptr [ESI + 0x48],EBX
007bb46c  MOV EAX,dword ptr [EBP + 0x8]
007bb46f  AND EAX,0xffff
007bb474  CMP EAX,EBX
007bb476  MOV dword ptr [EDI + 0x150],EAX
007bb47c  MOVSX ECX,word ptr [EBP + 0xa]
007bb480  MOV byte ptr [ESP + 0x1c],0x1
007bb485  MOV dword ptr [EDI + 0x154],ECX
007bb48b  JNZ 0x007bb496
007bb48d  CALL 0x00575b00
007bb492  TEST AL,AL
007bb494  JNZ 0x007bb4af
007bb496  PUSH 0x89b2c8
007bb49b  CALL 0x00591e90
007bb4a0  MOV EDX,dword ptr [EDI + 0x150]
007bb4a6  ADD ESP,0x4
007bb4a9  MOV dword ptr [EAX + 0x88],EDX
007bb4af  MOV EBP,dword ptr [0x009b9ec4]
007bb4b5  CMP EBP,EBX
007bb4b7  JZ 0x007bb4e3
007bb4b9  MOV EAX,[0x0091cf90]
007bb4be  MOV ECX,dword ptr [EAX + 0x10]
007bb4c1  XOR EDX,EDX
007bb4c3  MOV DL,byte ptr [EBP + 0x11]
007bb4c6  ADD ECX,0x414
007bb4cc  PUSH EDX
007bb4cd  CALL 0x0056f120
007bb4d2  CMP EAX,EBX
007bb4d4  JZ 0x007bb4e3
007bb4d6  MOV ECX,EAX
007bb4d8  CALL 0x0056f7b0
007bb4dd  FSTP float ptr [ESP + 0x24]
007bb4e1  JMP 0x007bb4eb
007bb4e3  MOV dword ptr [ESP + 0x24],0xbf800000
007bb4eb  MOV EBX,dword ptr [EDI + 0x10]
007bb4ee  MOV ECX,0x9b9ec0
007bb4f3  CALL 0x007afc90
007bb4f8  MOV EAX,dword ptr [ESP + 0x24]
007bb4fc  PUSH ECX
007bb4fd  FSTP float ptr [ESP]
007bb500  PUSH EAX
007bb501  PUSH 0x40a00000
007bb506  PUSH 0x3f800000
007bb50b  PUSH 0x8b7a40
007bb510  PUSH EBX
007bb511  MOV ECX,ESI
007bb513  CALL 0x007aff10
007bb518  MOV ECX,dword ptr [ESP + 0x14]
007bb51c  MOV EAX,EDI
007bb51e  POP EDI
007bb51f  POP ESI
007bb520  POP EBP
007bb521  POP EBX
007bb522  MOV dword ptr FS:[0x0],ECX
007bb529  ADD ESP,0x10
007bb52c  RET 0x4
