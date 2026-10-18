004bfc60  PUSH EDI
004bfc61  MOV EDI,ECX
004bfc63  MOV ECX,dword ptr [EDI + 0x4]
004bfc66  MOV EAX,dword ptr [ECX]
004bfc68  MOV dword ptr [ECX],ECX
004bfc6a  MOV ECX,dword ptr [EDI + 0x4]
004bfc6d  MOV dword ptr [ECX + 0x4],ECX
004bfc70  CMP EAX,dword ptr [EDI + 0x4]
004bfc73  MOV dword ptr [EDI + 0x8],0x0
004bfc7a  JZ 0x004bfc99
004bfc7c  PUSH ESI
004bfc7d  LEA ECX,[ECX]
004bfc80  MOV ESI,dword ptr [EAX]
004bfc82  PUSH 0x0
004bfc84  PUSH 0x30
004bfc86  PUSH EAX
004bfc87  MOV ECX,0x925b30
004bfc8c  CALL 0x005d0370
004bfc91  CMP ESI,dword ptr [EDI + 0x4]
004bfc94  MOV EAX,ESI
004bfc96  JNZ 0x004bfc80
004bfc98  POP ESI
004bfc99  POP EDI
004bfc9a  RET
