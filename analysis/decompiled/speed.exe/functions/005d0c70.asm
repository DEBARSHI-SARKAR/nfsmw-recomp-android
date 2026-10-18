005d0c70  SUB ESP,0x50
005d0c73  FLD float ptr [ESP + 0x54]
005d0c77  MOV EAX,dword ptr [ESP + 0x54]
005d0c7b  FMUL float ptr [ESP + 0x54]
005d0c7f  PUSH ESI
005d0c80  PUSH EDI
005d0c81  MOV dword ptr [ESP + 0x10],EAX
005d0c85  FST float ptr [ESP + 0xc]
005d0c89  MOV EDI,ECX
005d0c8b  FMUL float ptr [ESP + 0x5c]
005d0c8f  MOV EAX,dword ptr [EDI + 0x60]
005d0c92  DEC EAX
005d0c93  MOV dword ptr [ESP + 0x14],0x3f800000
005d0c9b  FSTP float ptr [ESP + 0x8]
005d0c9f  MOV EAX,0x8a3180
005d0ca4  JNZ 0x005d0cab
005d0ca6  MOV EAX,0x8a31c0
005d0cab  LEA ECX,[ESP + 0x18]
005d0caf  PUSH ECX
005d0cb0  PUSH EDI
005d0cb1  PUSH EAX
005d0cb2  CALL 0x005cab00
005d0cb7  MOV ESI,dword ptr [ESP + 0x6c]
005d0cbb  PUSH ESI
005d0cbc  LEA EDX,[ESP + 0x28]
005d0cc0  PUSH EDX
005d0cc1  LEA EAX,[ESP + 0x1c]
005d0cc5  PUSH EAX
005d0cc6  CALL 0x004fa510
005d0ccb  MOV dword ptr [ESI + 0xc],0x3f800000
005d0cd2  MOV EAX,dword ptr [EDI + 0x60]
005d0cd5  ADD ESP,0x18
005d0cd8  CMP EAX,0x1
005d0cdb  JNZ 0x005d0cff
005d0cdd  FLD float ptr [ESI]
005d0cdf  FMUL float ptr [0x008933d4]
005d0ce5  FSTP float ptr [ESI]
005d0ce7  FLD float ptr [ESI + 0x4]
005d0cea  FMUL float ptr [0x008933d4]
005d0cf0  FSTP float ptr [ESI + 0x4]
005d0cf3  FLD float ptr [ESI + 0x8]
005d0cf6  FMUL float ptr [0x008933d4]
005d0cfc  FSTP float ptr [ESI + 0x8]
005d0cff  POP EDI
005d0d00  POP ESI
005d0d01  ADD ESP,0x50
005d0d04  RET 0x8
