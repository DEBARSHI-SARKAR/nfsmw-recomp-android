007afb60  SUB ESP,0x38
007afb63  PUSH EBX
007afb64  MOV EBX,ECX
007afb66  MOV EAX,dword ptr [EBX + 0x4]
007afb69  TEST EAX,EAX
007afb6b  JNZ 0x007afb7a
007afb6d  FLD float ptr [0x00890968]
007afb73  POP EBX
007afb74  ADD ESP,0x38
007afb77  RET 0x4
007afb7a  XOR ECX,ECX
007afb7c  XOR EDX,EDX
007afb7e  MOV dword ptr [ESP + 0x1c],ECX
007afb82  MOV dword ptr [ESP + 0x2c],EDX
007afb86  MOV dword ptr [ESP + 0x20],ECX
007afb8a  MOV dword ptr [ESP + 0x30],EDX
007afb8e  MOV dword ptr [ESP + 0x24],ECX
007afb92  MOV dword ptr [ESP + 0x34],EDX
007afb96  MOV dword ptr [ESP + 0x28],ECX
007afb9a  MOV ECX,dword ptr [0x0091cf90]
007afba0  MOV dword ptr [ESP + 0x38],EDX
007afba4  MOV ECX,dword ptr [ECX + 0x10]
007afba7  XOR EDX,EDX
007afba9  MOV DL,byte ptr [EAX + 0x11]
007afbac  ADD ECX,0x414
007afbb2  PUSH EDX
007afbb3  CALL 0x0056f120
007afbb8  TEST EAX,EAX
007afbba  JNZ 0x007afbc9
007afbbc  FLD float ptr [0x00890da8]
007afbc2  POP EBX
007afbc3  ADD ESP,0x38
007afbc6  RET 0x4
007afbc9  PUSH EBP
007afbca  PUSH ESI
007afbcb  PUSH EDI
007afbcc  MOV ECX,EAX
007afbce  CALL 0x0056f7b0
007afbd3  PUSH ECX
007afbd4  LEA ECX,[ESP + 0x14]
007afbd8  FSTP float ptr [ESP]
007afbdb  CALL 0x0056f7a0
007afbe0  MOV EDI,dword ptr [ESP + 0x4c]
007afbe4  TEST EDI,EDI
007afbe6  JZ 0x007afc07
007afbe8  MOV EAX,dword ptr [EDI + 0x10]
007afbeb  MOV ESI,dword ptr [EDI + 0xc]
007afbee  PUSH EAX
007afbef  MOV ECX,EBX
007afbf1  CALL 0x007a4b80
007afbf6  CMP ESI,EAX
007afbf8  JZ 0x007afc07
007afbfa  LEA EAX,[ESP + 0x10]
007afbfe  PUSH EAX
007afbff  PUSH EDI
007afc00  MOV ECX,EBX
007afc02  CALL 0x007af330
007afc07  MOV EAX,dword ptr [EBX + 0x1b4]
007afc0d  TEST EAX,EAX
007afc0f  LEA EBP,[EBX + 0x1b4]
007afc15  JZ 0x007afc1c
007afc17  LEA ESI,[EAX + -0x4]
007afc1a  JMP 0x007afc20
007afc1c  XOR ESI,ESI
007afc1e  MOV EDI,EDI
007afc20  TEST EBP,EBP
007afc22  JZ 0x007afc29
007afc24  LEA EAX,[EBP + -0x4]
007afc27  JMP 0x007afc2b
007afc29  XOR EAX,EAX
007afc2b  CMP ESI,EAX
007afc2d  JZ 0x007afc70
007afc2f  TEST EDI,EDI
007afc31  JZ 0x007afc4d
007afc33  MOV EAX,dword ptr [ESI + 0xc]
007afc36  MOV ECX,dword ptr [EDI + 0x10]
007afc39  CMP ECX,dword ptr [EAX + 0x10]
007afc3c  JZ 0x007afc64
007afc3e  MOV CL,byte ptr [ESI + 0x14]
007afc41  TEST CL,CL
007afc43  JZ 0x007afc64
007afc45  LEA EDX,[ESP + 0x10]
007afc49  PUSH EDX
007afc4a  PUSH EAX
007afc4b  JMP 0x007afc5d
007afc4d  MOV AL,byte ptr [ESI + 0x14]
007afc50  TEST AL,AL
007afc52  JZ 0x007afc64
007afc54  MOV ECX,dword ptr [ESI + 0xc]
007afc57  LEA EAX,[ESP + 0x10]
007afc5b  PUSH EAX
007afc5c  PUSH ECX
007afc5d  MOV ECX,EBX
007afc5f  CALL 0x007af330
007afc64  MOV ESI,dword ptr [ESI + 0x4]
007afc67  TEST ESI,ESI
007afc69  JZ 0x007afc1c
007afc6b  ADD ESI,-0x4
007afc6e  JMP 0x007afc20
007afc70  LEA ECX,[ESP + 0x10]
007afc74  CALL 0x0056f7b0
007afc79  POP EDI
007afc7a  POP ESI
007afc7b  POP EBP
007afc7c  POP EBX
007afc7d  ADD ESP,0x38
007afc80  RET 0x4
