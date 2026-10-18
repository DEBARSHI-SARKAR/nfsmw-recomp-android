007bdae0  MOV EDX,dword ptr [ESP + 0x4]
007bdae4  CMP EDX,-0x1
007bdae7  PUSH ESI
007bdae8  MOV ESI,ECX
007bdaea  MOV ECX,dword ptr [ESI + 0x1bc]
007bdaf0  MOV EAX,ECX
007bdaf2  JNZ 0x007bdb07
007bdaf4  MOV EDX,dword ptr [ESI + 0x1c0]
007bdafa  DEC EAX
007bdafb  CMP EAX,EDX
007bdafd  JGE 0x007bdb1d
007bdaff  MOV EAX,dword ptr [ESI + 0x1c4]
007bdb05  JMP 0x007bdb1d
007bdb07  CMP EDX,0x1
007bdb0a  JNZ 0x007bdb1d
007bdb0c  MOV EDX,dword ptr [ESI + 0x1c4]
007bdb12  INC EAX
007bdb13  CMP EAX,EDX
007bdb15  JLE 0x007bdb1d
007bdb17  MOV EAX,dword ptr [ESI + 0x1c0]
007bdb1d  CMP EAX,ECX
007bdb1f  JZ 0x007bdb5b
007bdb21  LEA ECX,[ESI + 0x2c]
007bdb24  MOV dword ptr [ESI + 0x1bc],EAX
007bdb2a  MOV EAX,dword ptr [ECX + 0xc]
007bdb2d  TEST EAX,EAX
007bdb2f  JZ 0x007bdb4a
007bdb31  MOV EDX,dword ptr [ECX]
007bdb33  PUSH EAX
007bdb34  CALL dword ptr [EDX + 0x24]
007bdb37  PUSH EAX
007bdb38  MOV ECX,ESI
007bdb3a  CALL 0x007b7dd0
007bdb3f  MOV EAX,dword ptr [ESI]
007bdb41  MOV ECX,ESI
007bdb43  CALL dword ptr [EAX + 0xc]
007bdb46  POP ESI
007bdb47  RET 0x4
007bdb4a  XOR EAX,EAX
007bdb4c  PUSH EAX
007bdb4d  MOV ECX,ESI
007bdb4f  CALL 0x007b7dd0
007bdb54  MOV EAX,dword ptr [ESI]
007bdb56  MOV ECX,ESI
007bdb58  CALL dword ptr [EAX + 0xc]
007bdb5b  POP ESI
007bdb5c  RET 0x4
