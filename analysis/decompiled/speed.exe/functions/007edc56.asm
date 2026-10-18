007edc56  PUSH EBP
007edc57  MOV EBP,ESP
007edc59  PUSH EBX
007edc5a  PUSH ESI
007edc5b  MOV ESI,dword ptr [EBP + 0xc]
007edc5e  CMP dword ptr [ESI + 0x4],0x0
007edc62  PUSH EDI
007edc63  JNZ 0x007edc6a
007edc65  CALL 0x007ed751
007edc6a  LEA EBX,[ESI + 0x4c]
007edc6d  MOV ECX,EBX
007edc6f  CALL 0x007ec1bd
007edc74  MOV EAX,dword ptr [EBP + 0x10]
007edc77  PUSH dword ptr [EBP + 0x14]
007edc7a  MOV EDI,dword ptr [ESI + 0x7c]
007edc7d  PUSH EAX
007edc7e  MOV dword ptr [ESI + 0x7c],EAX
007edc81  CALL dword ptr [EBP + 0x8]
007edc84  MOV dword ptr [ESI + 0x7c],EDI
007edc87  ADD ESI,0x44
007edc8a  PUSH ESI
007edc8b  MOV dword ptr [EBP + 0xc],EAX
007edc8e  CALL 0x007ecc6d
007edc93  ADD ESP,0xc
007edc96  MOV ECX,EBX
007edc98  CALL 0x007ec1c8
007edc9d  MOV EAX,dword ptr [EBP + 0xc]
007edca0  POP EDI
007edca1  POP ESI
007edca2  POP EBX
007edca3  POP EBP
007edca4  RET
