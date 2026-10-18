004b0e60  MOV EAX,FS:[0x0]
004b0e66  MOV CL,byte ptr [0x00913c20]
004b0e6c  PUSH -0x1
004b0e6e  PUSH 0x86b36e
004b0e73  PUSH EAX
004b0e74  MOV EAX,0x1
004b0e79  TEST AL,CL
004b0e7b  MOV dword ptr FS:[0x0],ESP
004b0e82  JNZ 0x004b0eba
004b0e84  OR dword ptr [0x00913c20],EAX
004b0e8a  PUSH 0x896ad4
004b0e8f  MOV dword ptr [ESP + 0xc],0x0
004b0e97  CALL 0x005cc240
004b0e9c  MOV ECX,dword ptr [ESP + 0x14]
004b0ea0  MOV [0x00913c1c],EAX
004b0ea5  MOV dword ptr [ECX],EAX
004b0ea7  ADD ESP,0x4
004b0eaa  MOV EAX,ECX
004b0eac  MOV ECX,dword ptr [ESP]
004b0eaf  MOV dword ptr FS:[0x0],ECX
004b0eb6  ADD ESP,0xc
004b0eb9  RET
004b0eba  MOV ECX,dword ptr [0x00913c1c]
004b0ec0  MOV EAX,dword ptr [ESP + 0x10]
004b0ec4  MOV dword ptr [EAX],ECX
004b0ec6  MOV ECX,dword ptr [ESP]
004b0ec9  MOV dword ptr FS:[0x0],ECX
004b0ed0  ADD ESP,0xc
004b0ed3  RET
