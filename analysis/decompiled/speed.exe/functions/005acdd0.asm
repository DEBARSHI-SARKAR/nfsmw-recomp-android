005acdd0  MOV EAX,dword ptr [ESP + 0xc]
005acdd4  TEST EAX,EAX
005acdd6  PUSH ESI
005acdd7  MOV ESI,ECX
005acdd9  MOV ECX,dword ptr [ESP + 0x8]
005acddd  JNZ 0x005acdf4
005acddf  PUSH EAX
005acde0  MOV EAX,dword ptr [ESP + 0x10]
005acde4  PUSH 0x1
005acde6  PUSH EAX
005acde7  PUSH ECX
005acde8  MOV ECX,dword ptr [ESI + 0x10]
005acdeb  CALL 0x005acb70
005acdf0  POP ESI
005acdf1  RET 0xc
005acdf4  MOV EDX,dword ptr [ESP + 0xc]
005acdf8  PUSH EAX
005acdf9  PUSH 0x0
005acdfb  PUSH EDX
005acdfc  PUSH ECX
005acdfd  MOV ECX,dword ptr [ESI + EAX*0x4 + 0x10]
005ace01  CALL 0x005acb70
005ace06  MOV EDX,dword ptr [ESI + 0x14]
005ace09  MOV ECX,dword ptr [ESI + 0x10]
005ace0c  ADD EDX,0x80
005ace12  MOV ESI,dword ptr [EDX]
005ace14  ADD ECX,0x94
005ace1a  MOV dword ptr [ECX],ESI
005ace1c  MOV ESI,dword ptr [EDX + 0x4]
005ace1f  MOV dword ptr [ECX + 0x4],ESI
005ace22  MOV ESI,dword ptr [EDX + 0x8]
005ace25  MOV dword ptr [ECX + 0x8],ESI
005ace28  MOV ESI,dword ptr [EDX + 0xc]
005ace2b  MOV dword ptr [ECX + 0xc],ESI
005ace2e  MOV EDX,dword ptr [EDX + 0x10]
005ace31  MOV dword ptr [ECX + 0x10],EDX
005ace34  POP ESI
005ace35  RET 0xc
