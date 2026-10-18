005cb5d0  PUSH ECX
005cb5d1  FLD float ptr [ESP + 0xc]
005cb5d5  FCOMP float ptr [0x00890968]
005cb5db  FLD float ptr [ESP + 0xc]
005cb5df  FNSTSW AX
005cb5e1  TEST AH,0x5
005cb5e4  JP 0x005cb5e8
005cb5e6  FCHS
005cb5e8  FCOMP float ptr [0x008a2f9c]
005cb5ee  FNSTSW AX
005cb5f0  TEST AH,0x41
005cb5f3  JNZ 0x005cb5fe
005cb5f5  MOV EAX,dword ptr [ESP + 0xc]
005cb5f9  MOV dword ptr [ESP],EAX
005cb5fc  JMP 0x005cb605
005cb5fe  MOV dword ptr [ESP],0x0
005cb605  FLD float ptr [ESP + 0x8]
005cb609  FCOMP float ptr [0x00890968]
005cb60f  FLD float ptr [ESP + 0x8]
005cb613  FNSTSW AX
005cb615  TEST AH,0x5
005cb618  JP 0x005cb61c
005cb61a  FCHS
005cb61c  FCOMP float ptr [0x008a2f9c]
005cb622  FNSTSW AX
005cb624  TEST AH,0x41
005cb627  JNZ 0x005cb633
005cb629  MOV ECX,dword ptr [ESP + 0x8]
005cb62d  MOV dword ptr [ESP + 0xc],ECX
005cb631  JMP 0x005cb63b
005cb633  MOV dword ptr [ESP + 0xc],0x0
005cb63b  MOV EDX,dword ptr [ESP + 0xc]
005cb63f  MOV EAX,dword ptr [ESP]
005cb642  PUSH EDX
005cb643  PUSH EAX
005cb644  CALL 0x0045ded0
005cb649  MOVSX ECX,AX
005cb64c  MOV dword ptr [ESP + 0x14],ECX
005cb650  FILD dword ptr [ESP + 0x14]
005cb654  FMUL float ptr [0x00890980]
005cb65a  ADD ESP,0xc
005cb65d  RET
