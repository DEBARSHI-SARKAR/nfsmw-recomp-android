004b4f90  PUSH -0x1
004b4f92  PUSH 0x86b5c8
004b4f97  MOV EAX,FS:[0x0]
004b4f9d  PUSH EAX
004b4f9e  MOV dword ptr FS:[0x0],ESP
004b4fa5  PUSH ECX
004b4fa6  PUSH ESI
004b4fa7  MOV ESI,ECX
004b4fa9  MOV dword ptr [ESP + 0x4],ESI
004b4fad  MOV dword ptr [ESI],0x896d2c
004b4fb3  LEA ECX,[ESI + 0xd4]
004b4fb9  MOV dword ptr [ESP + 0x10],0x0
004b4fc1  CALL 0x004b12b0
004b4fc6  MOV ECX,ESI
004b4fc8  MOV dword ptr [ESP + 0x10],0xffffffff
004b4fd0  CALL 0x004b4e40
004b4fd5  MOV ECX,dword ptr [ESP + 0x8]
004b4fd9  POP ESI
004b4fda  MOV dword ptr FS:[0x0],ECX
004b4fe1  ADD ESP,0x10
004b4fe4  RET
