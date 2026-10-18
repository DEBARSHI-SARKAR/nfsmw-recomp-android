004fc470  PUSH ESI
004fc471  PUSH EDI
004fc472  MOV EDI,dword ptr [ESP + 0xc]
004fc476  MOV EAX,dword ptr [EDI]
004fc478  MOV ESI,ECX
004fc47a  LEA ECX,[EDI + 0x10]
004fc47d  PUSH ECX
004fc47e  LEA EDX,[ESI + 0x10]
004fc481  PUSH EDX
004fc482  MOV dword ptr [ESI],EAX
004fc484  CALL 0x00444fe0
004fc489  LEA EAX,[EDI + 0x50]
004fc48c  PUSH EAX
004fc48d  LEA ECX,[ESI + 0x50]
004fc490  PUSH ECX
004fc491  CALL 0x00444fe0
004fc496  LEA EDX,[EDI + 0x90]
004fc49c  PUSH EDX
004fc49d  LEA EAX,[ESI + 0x90]
004fc4a3  PUSH EAX
004fc4a4  CALL 0x00444fe0
004fc4a9  FLD float ptr [EDI + 0xd4]
004fc4af  FLD float ptr [EDI + 0xd8]
004fc4b5  MOV ECX,dword ptr [EDI + 0xdc]
004fc4bb  MOV EDX,dword ptr [EDI + 0xd0]
004fc4c1  FXCH
004fc4c3  FSTP float ptr [ESI + 0xd4]
004fc4c9  MOV dword ptr [ESI + 0xd0],EDX
004fc4cf  MOV EAX,ECX
004fc4d1  FSTP float ptr [ESI + 0xd8]
004fc4d7  MOV dword ptr [ESI + 0xdc],EAX
004fc4dd  MOV dword ptr [ESP + 0x24],ECX
004fc4e1  MOV ECX,dword ptr [EDI + 0xe0]
004fc4e7  MOV dword ptr [ESI + 0xe0],ECX
004fc4ed  MOV EDX,dword ptr [EDI + 0xe4]
004fc4f3  MOV dword ptr [ESI + 0xe4],EDX
004fc4f9  MOV EAX,dword ptr [EDI + 0xe8]
004fc4ff  MOV dword ptr [ESI + 0xe8],EAX
004fc505  MOV ECX,dword ptr [EDI + 0xec]
004fc50b  ADD EDI,0xf0
004fc511  LEA EDX,[ESI + 0xf0]
004fc517  PUSH EDI
004fc518  PUSH EDX
004fc519  MOV dword ptr [ESI + 0xec],ECX
004fc51f  CALL 0x00444fe0
004fc524  ADD ESP,0x20
004fc527  POP EDI
004fc528  MOV EAX,ESI
004fc52a  POP ESI
004fc52b  RET 0x4
