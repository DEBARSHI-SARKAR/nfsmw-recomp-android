004ea810  PUSH ESI
004ea811  MOV ESI,ECX
004ea813  MOV EAX,dword ptr [ESI + 0xc]
004ea816  CMP EAX,dword ptr [ESI + 0x8]
004ea819  JC 0x004ea82c
004ea81b  MOV EDX,dword ptr [ESI]
004ea81d  INC EAX
004ea81e  PUSH EAX
004ea81f  MOV ECX,ESI
004ea821  CALL dword ptr [EDX + 0xc]
004ea824  PUSH EAX
004ea825  MOV ECX,ESI
004ea827  CALL 0x004ead20
004ea82c  MOV EAX,dword ptr [ESI + 0xc]
004ea82f  MOV ECX,dword ptr [ESI + 0x4]
004ea832  LEA EAX,[ECX + EAX*0x8]
004ea835  TEST EAX,EAX
004ea837  JZ 0x004ea847
004ea839  MOV ECX,dword ptr [ESP + 0x8]
004ea83d  MOV EDX,dword ptr [ECX]
004ea83f  MOV dword ptr [EAX],EDX
004ea841  MOV ECX,dword ptr [ECX + 0x4]
004ea844  MOV dword ptr [EAX + 0x4],ECX
004ea847  INC dword ptr [ESI + 0xc]
004ea84a  POP ESI
004ea84b  RET 0x4
