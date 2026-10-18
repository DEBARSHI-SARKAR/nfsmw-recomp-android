007a3db0  MOV EAX,dword ptr [ECX + 0x1a8]
007a3db6  TEST EAX,EAX
007a3db8  JL 0x007a3ddd
007a3dba  CMP EAX,0x2
007a3dbd  JGE 0x007a3ddd
007a3dbf  MOV EDX,dword ptr [0x0091cf90]
007a3dc5  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x10]
007a3dc9  MOV ECX,dword ptr [ECX + 0x34]
007a3dcc  MOV EDX,dword ptr [ECX + 0x8]
007a3dcf  ADD EAX,0x414
007a3dd4  PUSH EDX
007a3dd5  MOV ECX,EAX
007a3dd7  CALL 0x0056ecc0
007a3ddc  RET
007a3ddd  MOV ECX,dword ptr [ECX + 0x34]
007a3de0  MOV EDX,dword ptr [ECX + 0x8]
007a3de3  XOR EAX,EAX
007a3de5  PUSH EDX
007a3de6  MOV ECX,EAX
007a3de8  CALL 0x0056ecc0
007a3ded  RET
