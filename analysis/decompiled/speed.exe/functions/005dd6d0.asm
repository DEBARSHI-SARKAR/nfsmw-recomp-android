005dd6d0  MOV EAX,FS:[0x0]
005dd6d6  MOV CL,byte ptr [0x0091e088]
005dd6dc  PUSH -0x1
005dd6de  PUSH 0x874e7e
005dd6e3  PUSH EAX
005dd6e4  MOV EAX,0x1
005dd6e9  TEST AL,CL
005dd6eb  MOV dword ptr FS:[0x0],ESP
005dd6f2  JNZ 0x005dd72a
005dd6f4  OR dword ptr [0x0091e088],EAX
005dd6fa  PUSH 0x8a3958
005dd6ff  MOV dword ptr [ESP + 0xc],0x0
005dd707  CALL 0x005cc240
005dd70c  MOV ECX,dword ptr [ESP + 0x14]
005dd710  MOV [0x0091e084],EAX
005dd715  MOV dword ptr [ECX],EAX
005dd717  ADD ESP,0x4
005dd71a  MOV EAX,ECX
005dd71c  MOV ECX,dword ptr [ESP]
005dd71f  MOV dword ptr FS:[0x0],ECX
005dd726  ADD ESP,0xc
005dd729  RET
005dd72a  MOV ECX,dword ptr [0x0091e084]
005dd730  MOV EAX,dword ptr [ESP + 0x10]
005dd734  MOV dword ptr [EAX],ECX
005dd736  MOV ECX,dword ptr [ESP]
005dd739  MOV dword ptr FS:[0x0],ECX
005dd740  ADD ESP,0xc
005dd743  RET
