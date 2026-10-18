005af2b0  PUSH ESI
005af2b1  MOV ESI,dword ptr [ESP + 0x8]
005af2b5  TEST ESI,ESI
005af2b7  PUSH EDI
005af2b8  MOV EDI,ECX
005af2ba  JZ 0x005af32d
005af2bc  CMP ESI,dword ptr [EDI + 0x14]
005af2bf  JNZ 0x005af2c7
005af2c1  MOV EAX,dword ptr [ESI + 0x4]
005af2c4  MOV dword ptr [EDI + 0x14],EAX
005af2c7  CMP ESI,dword ptr [EDI + 0x18]
005af2ca  JNZ 0x005af2d2
005af2cc  MOV ECX,dword ptr [ESI + 0x8]
005af2cf  MOV dword ptr [EDI + 0x18],ECX
005af2d2  MOV EAX,dword ptr [ESI + 0x8]
005af2d5  TEST EAX,EAX
005af2d7  JZ 0x005af2df
005af2d9  MOV EDX,dword ptr [ESI + 0x4]
005af2dc  MOV dword ptr [EAX + 0x4],EDX
005af2df  MOV EAX,dword ptr [ESI + 0x4]
005af2e2  TEST EAX,EAX
005af2e4  JZ 0x005af2ec
005af2e6  MOV ECX,dword ptr [ESI + 0x8]
005af2e9  MOV dword ptr [EAX + 0x8],ECX
005af2ec  MOV EAX,0xabadcafe
005af2f1  MOV dword ptr [ESI + 0x4],EAX
005af2f4  MOV dword ptr [ESI + 0x8],EAX
005af2f7  DEC dword ptr [EDI + 0x10]
005af2fa  MOV EAX,dword ptr [ESI + 0x14]
005af2fd  TEST EAX,EAX
005af2ff  JZ 0x005af32d
005af301  PUSH EAX
005af302  MOV EAX,dword ptr [ESI + 0x10]
005af305  XOR EDX,EDX
005af307  DIV dword ptr [EDI + 0x4]
005af30a  MOV ECX,EDX
005af30c  MOV EDX,dword ptr [EDI + 0x8]
005af30f  SHL ECX,0x4
005af312  ADD ECX,EDX
005af314  CALL 0x005aef40
005af319  MOV ECX,dword ptr [ESI + 0x14]
005af31c  TEST ECX,ECX
005af31e  JZ 0x005af326
005af320  MOV EDX,dword ptr [ECX]
005af322  PUSH 0x1
005af324  CALL dword ptr [EDX]
005af326  MOV dword ptr [ESI + 0x14],0x0
005af32d  POP EDI
005af32e  POP ESI
005af32f  RET 0x4
