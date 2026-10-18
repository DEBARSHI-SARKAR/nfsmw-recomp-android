005ebf30  PUSH ECX
005ebf31  PUSH ESI
005ebf32  MOV ESI,ECX
005ebf34  MOV ECX,dword ptr [ESI + 0x90]
005ebf3a  MOV EAX,dword ptr [ECX]
005ebf3c  CMP EAX,ECX
005ebf3e  MOV dword ptr [ESP + 0x4],EAX
005ebf42  JZ 0x005ebf78
005ebf44  MOV EAX,dword ptr [EAX + 0x10]
005ebf47  MOV ECX,dword ptr [EAX + 0x4]
005ebf4a  PUSH 0x4040e0
005ebf4f  CALL 0x005d59f0
005ebf54  TEST EAX,EAX
005ebf56  JZ 0x005ebf63
005ebf58  MOV EDX,dword ptr [EAX]
005ebf5a  MOV ECX,EAX
005ebf5c  CALL dword ptr [EDX + 0x5c]
005ebf5f  TEST AL,AL
005ebf61  JNZ 0x005ebf7d
005ebf63  LEA ECX,[ESP + 0x4]
005ebf67  CALL 0x005dfad0
005ebf6c  MOV EAX,dword ptr [ESP + 0x4]
005ebf70  CMP EAX,dword ptr [ESI + 0x90]
005ebf76  JNZ 0x005ebf44
005ebf78  MOV AL,0x1
005ebf7a  POP ESI
005ebf7b  POP ECX
005ebf7c  RET
005ebf7d  XOR AL,AL
005ebf7f  POP ESI
005ebf80  POP ECX
005ebf81  RET
