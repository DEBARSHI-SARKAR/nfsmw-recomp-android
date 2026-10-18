005db8a0  MOV EAX,FS:[0x0]
005db8a6  MOV CL,byte ptr [0x0091e04c]
005db8ac  PUSH -0x1
005db8ae  PUSH 0x874dde
005db8b3  PUSH EAX
005db8b4  MOV EAX,0x1
005db8b9  TEST AL,CL
005db8bb  MOV dword ptr FS:[0x0],ESP
005db8c2  JNZ 0x005db8fa
005db8c4  OR dword ptr [0x0091e04c],EAX
005db8ca  PUSH 0x8a3898
005db8cf  MOV dword ptr [ESP + 0xc],0x0
005db8d7  CALL 0x005cc240
005db8dc  MOV ECX,dword ptr [ESP + 0x14]
005db8e0  MOV [0x0091e048],EAX
005db8e5  MOV dword ptr [ECX],EAX
005db8e7  ADD ESP,0x4
005db8ea  MOV EAX,ECX
005db8ec  MOV ECX,dword ptr [ESP]
005db8ef  MOV dword ptr FS:[0x0],ECX
005db8f6  ADD ESP,0xc
005db8f9  RET
005db8fa  MOV ECX,dword ptr [0x0091e048]
005db900  MOV EAX,dword ptr [ESP + 0x10]
005db904  MOV dword ptr [EAX],ECX
005db906  MOV ECX,dword ptr [ESP]
005db909  MOV dword ptr FS:[0x0],ECX
005db910  ADD ESP,0xc
005db913  RET
