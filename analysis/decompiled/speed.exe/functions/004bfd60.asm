004bfd60  PUSH ESI
004bfd61  MOV ESI,ECX
004bfd63  MOV EAX,dword ptr [ESI + 0xc]
004bfd66  TEST EAX,EAX
004bfd68  JLE 0x004bfd77
004bfd6a  MOV ECX,EAX
004bfd6c  LEA ESP,[ESP]
004bfd70  DEC ECX
004bfd71  DEC EAX
004bfd72  JNZ 0x004bfd70
004bfd74  MOV dword ptr [ESI + 0xc],ECX
004bfd77  MOV EAX,dword ptr [ESI + 0x4]
004bfd7a  TEST EAX,EAX
004bfd7c  JZ 0x004bfd9f
004bfd7e  MOV ECX,dword ptr [ESI + 0x8]
004bfd81  MOV EDX,dword ptr [ESI]
004bfd83  PUSH ECX
004bfd84  PUSH EAX
004bfd85  MOV ECX,ESI
004bfd87  CALL dword ptr [EDX + 0x8]
004bfd8a  MOV dword ptr [ESI + 0x4],0x0
004bfd91  MOV dword ptr [ESI + 0x8],0x0
004bfd98  MOV dword ptr [ESI + 0xc],0x0
004bfd9f  POP ESI
004bfda0  RET
