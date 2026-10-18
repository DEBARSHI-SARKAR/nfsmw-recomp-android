004df110  PUSH ESI
004df111  MOV ESI,ECX
004df113  MOV EAX,dword ptr [ESI + 0x148]
004df119  PUSH 0xf000000
004df11e  MOV dword ptr [ESI + 0x14c],EAX
004df124  MOV dword ptr [ESI + 0x148],0x2
004df12e  CALL 0x0082c730
004df133  MOV dword ptr [ESI + 0x13c],0x0
004df13d  MOV byte ptr [ESI + 0x2c],0x1
004df141  MOV EAX,dword ptr [ESI + 0x13c]
004df147  MOV ECX,dword ptr [EAX*0x4 + 0x9121d8]
004df14e  ADD ESP,0x4
004df151  TEST ECX,ECX
004df153  JZ 0x004df16d
004df155  CMP dword ptr [ECX + 0x38],0x3
004df159  JNZ 0x004df16d
004df15b  IMUL EAX,EAX,0x74
004df15e  MOV ECX,dword ptr [EAX + ESI*0x1 + 0x4c]
004df162  PUSH 0x0
004df164  PUSH ECX
004df165  CALL 0x00829140
004df16a  ADD ESP,0x8
004df16d  MOV EDX,dword ptr [ESI + 0x128]
004df173  MOV EAX,dword ptr [ESP + 0x8]
004df177  MOV dword ptr [ESI + 0x12c],EDX
004df17d  MOV dword ptr [ESI + 0x128],EAX
004df183  MOV dword ptr [ESI + 0x34],0x1
004df18a  MOV byte ptr [ESI + 0x118],0x1
004df191  MOV byte ptr [ESI + 0x119],0x0
004df198  MOV ECX,dword ptr [0x00911fa8]
004df19e  MOV ECX,dword ptr [ECX + 0x80]
004df1a4  PUSH 0x1
004df1a6  CALL 0x004b1ec0
004df1ab  TEST EAX,EAX
004df1ad  POP ESI
004df1ae  JZ 0x004df1bc
004df1b0  PUSH 0x0
004df1b2  PUSH 0x0
004df1b4  LEA ECX,[EAX + 0x4]
004df1b7  CALL 0x004bad20
004df1bc  RET 0x4
