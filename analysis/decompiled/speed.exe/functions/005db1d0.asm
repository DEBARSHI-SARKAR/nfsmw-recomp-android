005db1d0  MOV EAX,FS:[0x0]
005db1d6  MOV CL,byte ptr [0x0091e030]
005db1dc  PUSH -0x1
005db1de  PUSH 0x874d7e
005db1e3  PUSH EAX
005db1e4  MOV EAX,0x1
005db1e9  TEST AL,CL
005db1eb  MOV dword ptr FS:[0x0],ESP
005db1f2  JNZ 0x005db22a
005db1f4  OR dword ptr [0x0091e030],EAX
005db1fa  PUSH 0x8a3864
005db1ff  MOV dword ptr [ESP + 0xc],0x0
005db207  CALL 0x005cc240
005db20c  MOV ECX,dword ptr [ESP + 0x14]
005db210  MOV [0x0091e02c],EAX
005db215  MOV dword ptr [ECX],EAX
005db217  ADD ESP,0x4
005db21a  MOV EAX,ECX
005db21c  MOV ECX,dword ptr [ESP]
005db21f  MOV dword ptr FS:[0x0],ECX
005db226  ADD ESP,0xc
005db229  RET
005db22a  MOV ECX,dword ptr [0x0091e02c]
005db230  MOV EAX,dword ptr [ESP + 0x10]
005db234  MOV dword ptr [EAX],ECX
005db236  MOV ECX,dword ptr [ESP]
005db239  MOV dword ptr FS:[0x0],ECX
005db240  ADD ESP,0xc
005db243  RET
