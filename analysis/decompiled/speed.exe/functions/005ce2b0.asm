005ce2b0  SUB ESP,0x50
005ce2b3  FLD float ptr [ESP + 0x58]
005ce2b7  MOV EDX,dword ptr [ESP + 0x54]
005ce2bb  FMUL float ptr [ESP + 0x58]
005ce2bf  MOV EAX,dword ptr [ESP + 0x58]
005ce2c3  PUSH ESI
005ce2c4  LEA ECX,[ESP + 0x14]
005ce2c8  PUSH ECX
005ce2c9  FST float ptr [ESP + 0xc]
005ce2cd  FMUL float ptr [ESP + 0x60]
005ce2d1  PUSH EDX
005ce2d2  PUSH 0x8a3180
005ce2d7  MOV dword ptr [ESP + 0x1c],0x3f800000
005ce2df  FSTP float ptr [ESP + 0x10]
005ce2e3  MOV dword ptr [ESP + 0x18],EAX
005ce2e7  CALL 0x005cab00
005ce2ec  MOV ESI,dword ptr [ESP + 0x6c]
005ce2f0  PUSH ESI
005ce2f1  LEA EAX,[ESP + 0x24]
005ce2f5  PUSH EAX
005ce2f6  LEA ECX,[ESP + 0x18]
005ce2fa  PUSH ECX
005ce2fb  CALL 0x004fa510
005ce300  ADD ESP,0x18
005ce303  MOV dword ptr [ESI + 0xc],0x3f800000
005ce30a  POP ESI
005ce30b  ADD ESP,0x50
005ce30e  RET
