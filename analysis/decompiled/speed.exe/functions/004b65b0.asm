004b65b0  PUSH ESI
004b65b1  MOV ESI,dword ptr [ESP + 0x8]
004b65b5  MOV EAX,dword ptr [ESI]
004b65b7  MOV ECX,dword ptr [EAX*0x4 + 0x9121d8]
004b65be  MOV EDX,dword ptr [ECX + 0x24]
004b65c1  PUSH EDX
004b65c2  CALL 0x008298d0
004b65c7  MOV ECX,dword ptr [0x009120e4]
004b65cd  MOV EDX,dword ptr [ECX + 0x18]
004b65d0  MOV ECX,dword ptr [EDX + 0x10]
004b65d3  MOV dword ptr [ESP + 0xc],ECX
004b65d7  MOV EDX,dword ptr [EAX]
004b65d9  ADD ESP,0x4
004b65dc  LEA ECX,[ESP + 0x8]
004b65e0  PUSH ECX
004b65e1  MOV ECX,EAX
004b65e3  CALL dword ptr [EDX + 0x90]
004b65e9  MOV byte ptr [ESI + 0x4],0x0
004b65ed  POP ESI
004b65ee  RET 0x4
