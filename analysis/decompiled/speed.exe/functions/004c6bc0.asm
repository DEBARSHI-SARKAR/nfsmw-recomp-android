004c6bc0  PUSH ESI
004c6bc1  MOV ESI,ECX
004c6bc3  MOV EAX,dword ptr [ESI + 0xc]
004c6bc6  TEST EAX,EAX
004c6bc8  JLE 0x004c6bd7
004c6bca  MOV ECX,EAX
004c6bcc  LEA ESP,[ESP]
004c6bd0  DEC ECX
004c6bd1  DEC EAX
004c6bd2  JNZ 0x004c6bd0
004c6bd4  MOV dword ptr [ESI + 0xc],ECX
004c6bd7  MOV EAX,dword ptr [ESI + 0x4]
004c6bda  TEST EAX,EAX
004c6bdc  JZ 0x004c6bff
004c6bde  MOV ECX,dword ptr [ESI + 0x8]
004c6be1  MOV EDX,dword ptr [ESI]
004c6be3  PUSH ECX
004c6be4  PUSH EAX
004c6be5  MOV ECX,ESI
004c6be7  CALL dword ptr [EDX + 0x8]
004c6bea  MOV dword ptr [ESI + 0x4],0x0
004c6bf1  MOV dword ptr [ESI + 0x8],0x0
004c6bf8  MOV dword ptr [ESI + 0xc],0x0
004c6bff  POP ESI
004c6c00  RET
