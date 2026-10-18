005e7bb0  MOV ECX,dword ptr [ESP + 0x4]
005e7bb4  MOV EDX,dword ptr [ESP + 0x8]
005e7bb8  CMP ECX,EDX
005e7bba  MOV EAX,dword ptr [ESP + 0xc]
005e7bbe  JZ 0x005e7bd4
005e7bc0  PUSH ESI
005e7bc1  TEST EAX,EAX
005e7bc3  JZ 0x005e7bc9
005e7bc5  MOV ESI,dword ptr [ECX]
005e7bc7  MOV dword ptr [EAX],ESI
005e7bc9  ADD ECX,0x4
005e7bcc  ADD EAX,0x4
005e7bcf  CMP ECX,EDX
005e7bd1  JNZ 0x005e7bc1
005e7bd3  POP ESI
005e7bd4  RET
