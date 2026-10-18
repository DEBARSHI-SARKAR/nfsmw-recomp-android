00764850  SUB ESP,0x10
00764853  MOVSX EAX,byte ptr [ECX + 0x12]
00764857  MOVSX ECX,byte ptr [ECX + 0x10]
0076485b  MOV EDX,dword ptr [ESP + 0x14]
0076485f  MOV dword ptr [ESP],EAX
00764862  MOV dword ptr [ESP + 0x8],0x0
0076486a  FILD dword ptr [ESP]
0076486d  MOV dword ptr [ESP],ECX
00764870  MOV ECX,dword ptr [ESP + 0x8]
00764874  FMUL float ptr [0x008b5b30]
0076487a  FSTP float ptr [ESP + 0x4]
0076487e  MOV EAX,dword ptr [ESP + 0x4]
00764882  FILD dword ptr [ESP]
00764885  MOV dword ptr [EDX],EAX
00764887  MOV dword ptr [EDX + 0x4],ECX
0076488a  FMUL float ptr [0x00890bf0]
00764890  FSTP float ptr [ESP + 0xc]
00764894  MOV EAX,dword ptr [ESP + 0xc]
00764898  MOV dword ptr [EDX + 0x8],EAX
0076489b  ADD ESP,0x10
0076489e  RET 0x4
