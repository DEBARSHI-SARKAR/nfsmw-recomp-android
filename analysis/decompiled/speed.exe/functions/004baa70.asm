004baa70  MOV EAX,dword ptr [ESP + 0x4]
004baa74  PUSH ESI
004baa75  MOV ESI,ECX
004baa77  PUSH EAX
004baa78  LEA ECX,[ESI + 0x12c]
004baa7e  PUSH ECX
004baa7f  MOV dword ptr [ESI + 0x124],0x0
004baa89  CALL 0x00460c70
004baa8e  MOV EAX,dword ptr [ESP + 0x14]
004baa92  MOV ECX,dword ptr [ESI + 0x16c]
004baa98  MOV EDX,dword ptr [ESP + 0x18]
004baa9c  PUSH EAX
004baa9d  PUSH ECX
004baa9e  MOV dword ptr [ESI + 0x128],EAX
004baaa4  MOV EAX,dword ptr [ESI + 0x18]
004baaa7  PUSH EDX
004baaa8  PUSH EAX
004baaa9  CALL 0x0081c4b0
004baaae  ADD ESP,0x18
004baab1  POP ESI
004baab2  RET 0xc
