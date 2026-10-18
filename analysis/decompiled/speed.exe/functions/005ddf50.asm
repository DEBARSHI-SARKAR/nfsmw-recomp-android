005ddf50  SUB ESP,0x14
005ddf53  PUSH ESI
005ddf54  MOV ESI,ECX
005ddf56  MOV AL,byte ptr [ESI + 0x4]
005ddf59  TEST AL,AL
005ddf5b  JZ 0x005ddf99
005ddf5d  FLD float ptr [ESP + 0x1c]
005ddf61  FADD float ptr [ESI + 0x8]
005ddf64  FST float ptr [ESI + 0x8]
005ddf67  FCOMP float ptr [ESI]
005ddf69  FNSTSW AX
005ddf6b  TEST AH,0x1
005ddf6e  JNZ 0x005ddf99
005ddf70  PUSH ECX
005ddf71  MOV EAX,ESP
005ddf73  MOV dword ptr [EAX],0x20d60dbf
005ddf79  LEA EAX,[ESI + 0x10]
005ddf7c  MOV dword ptr [ESP + 0x20],ESP
005ddf80  PUSH EAX
005ddf81  LEA ECX,[ESP + 0xc]
005ddf85  CALL 0x005dde40
005ddf8a  MOV ECX,EAX
005ddf8c  CALL 0x00654af0
005ddf91  FLD float ptr [ESI + 0x8]
005ddf94  FSUB float ptr [ESI]
005ddf96  FSTP float ptr [ESI + 0x8]
005ddf99  POP ESI
005ddf9a  ADD ESP,0x14
005ddf9d  RET 0x4
