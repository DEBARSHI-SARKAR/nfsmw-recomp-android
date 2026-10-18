004b00c0  MOV EAX,dword ptr [ECX + 0x6c]
004b00c3  TEST EAX,EAX
004b00c5  JNZ 0x004b00cd
004b00c7  OR EAX,0xffffffff
004b00ca  RET 0xc
004b00cd  MOV EAX,dword ptr [ESP + 0xc]
004b00d1  MOV EDX,dword ptr [ESP + 0x8]
004b00d5  PUSH EAX
004b00d6  MOV EAX,dword ptr [ESP + 0x8]
004b00da  PUSH EDX
004b00db  PUSH EAX
004b00dc  PUSH 0x0
004b00de  CALL 0x004b0040
004b00e3  MOV EDX,dword ptr [ECX + 0x6c]
004b00e6  MOV byte ptr [ECX + EDX*0x1 + 0x4b],0x1
004b00eb  MOV EAX,dword ptr [ECX + 0x6c]
004b00ee  RET 0xc
