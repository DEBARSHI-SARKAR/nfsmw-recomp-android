006ff9e0  PUSH ESI
006ff9e1  MOV ESI,ECX
006ff9e3  MOV ECX,dword ptr [ESI + 0x98]
006ff9e9  TEST ECX,ECX
006ff9eb  JZ 0x006ffa2a
006ff9ed  MOV AL,byte ptr [ECX + 0x20]
006ff9f0  TEST AL,AL
006ff9f2  JNZ 0x006ffa06
006ff9f4  MOV EAX,dword ptr [ECX]
006ff9f6  PUSH 0x1
006ff9f8  CALL dword ptr [EAX]
006ff9fa  MOV dword ptr [ESI + 0x98],0x0
006ffa04  POP ESI
006ffa05  RET
006ffa06  MOV ECX,dword ptr [ESI + 0x44]
006ffa09  PUSH 0x0
006ffa0b  PUSH 0xd
006ffa0d  CALL 0x004eb7d0
006ffa12  LEA ECX,[ESI + 0x9c]
006ffa18  PUSH ECX
006ffa19  MOV ECX,dword ptr [ESI + 0x98]
006ffa1f  MOV dword ptr [ESI + 0xa0],EAX
006ffa25  CALL 0x004cd570
006ffa2a  POP ESI
006ffa2b  RET
