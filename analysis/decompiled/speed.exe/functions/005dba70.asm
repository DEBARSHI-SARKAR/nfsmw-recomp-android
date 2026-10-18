005dba70  MOV EAX,FS:[0x0]
005dba76  MOV CL,byte ptr [0x0091e05c]
005dba7c  PUSH -0x1
005dba7e  PUSH 0x874e1e
005dba83  PUSH EAX
005dba84  MOV EAX,0x1
005dba89  TEST AL,CL
005dba8b  MOV dword ptr FS:[0x0],ESP
005dba92  JNZ 0x005dbaca
005dba94  OR dword ptr [0x0091e05c],EAX
005dba9a  PUSH 0x8a38c0
005dba9f  MOV dword ptr [ESP + 0xc],0x0
005dbaa7  CALL 0x005cc240
005dbaac  MOV ECX,dword ptr [ESP + 0x14]
005dbab0  MOV [0x0091e058],EAX
005dbab5  MOV dword ptr [ECX],EAX
005dbab7  ADD ESP,0x4
005dbaba  MOV EAX,ECX
005dbabc  MOV ECX,dword ptr [ESP]
005dbabf  MOV dword ptr FS:[0x0],ECX
005dbac6  ADD ESP,0xc
005dbac9  RET
005dbaca  MOV ECX,dword ptr [0x0091e058]
005dbad0  MOV EAX,dword ptr [ESP + 0x10]
005dbad4  MOV dword ptr [EAX],ECX
005dbad6  MOV ECX,dword ptr [ESP]
005dbad9  MOV dword ptr FS:[0x0],ECX
005dbae0  ADD ESP,0xc
005dbae3  RET
