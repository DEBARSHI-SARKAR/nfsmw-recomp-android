00486fb0  SUB ESP,0xc
00486fb3  FLD float ptr [ECX + 0x80]
00486fb9  MOV EAX,dword ptr [ESP + 0x10]
00486fbd  FMUL float ptr [ECX + 0xbc]
00486fc3  PUSH EAX
00486fc4  PUSH ECX
00486fc5  FSTP float ptr [ESP + 0x8]
00486fc9  FLD float ptr [ECX + 0x84]
00486fcf  FMUL float ptr [ECX + 0xc0]
00486fd5  FSTP float ptr [ESP + 0xc]
00486fd9  FLD float ptr [ECX + 0x88]
00486fdf  FMUL float ptr [ECX + 0xc4]
00486fe5  LEA ECX,[ESP + 0x8]
00486fe9  FSTP float ptr [ESP + 0x10]
00486fed  CALL 0x00486bd0
00486ff2  ADD ESP,0xc
00486ff5  RET 0x4
