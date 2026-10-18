004ddb60  PUSH ESI
004ddb61  MOV ESI,ECX
004ddb63  MOV EAX,dword ptr [ESI + 0x10]
004ddb66  TEST EAX,EAX
004ddb68  JZ 0x004ddb71
004ddb6a  MOV dword ptr [EAX + 0x3c],0x1
004ddb71  MOV ECX,dword ptr [ESI + 0x28]
004ddb74  MOV EAX,dword ptr [ECX]
004ddb76  LEA EDX,[ESI + 0x30]
004ddb79  PUSH EDX
004ddb7a  CALL dword ptr [EAX + 0x38]
004ddb7d  MOV ECX,dword ptr [0x00911fa8]
004ddb83  PUSH 0x0
004ddb85  PUSH 0x1
004ddb87  PUSH 0x0
004ddb89  PUSH ESI
004ddb8a  CALL 0x004b8f80
004ddb8f  POP ESI
004ddb90  RET
