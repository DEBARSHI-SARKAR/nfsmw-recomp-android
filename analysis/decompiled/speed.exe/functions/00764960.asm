00764960  SUB ESP,0x10
00764963  MOVSX EAX,byte ptr [ECX + 0x10]
00764967  MOVSX EDX,byte ptr [ECX + 0x11]
0076496b  MOV dword ptr [ESP],EAX
0076496e  MOVSX EAX,byte ptr [ECX + 0x12]
00764972  FILD dword ptr [ESP]
00764975  MOV ECX,dword ptr [ESP + 0x14]
00764979  FMUL float ptr [0x008b5b30]
0076497f  MOV dword ptr [ESP],EDX
00764982  FSTP float ptr [ESP + 0x4]
00764986  MOV EDX,dword ptr [ESP + 0x4]
0076498a  FILD dword ptr [ESP]
0076498d  MOV dword ptr [ESP],EAX
00764990  MOV dword ptr [ECX],EDX
00764992  FMUL float ptr [0x008b5b30]
00764998  FSTP float ptr [ESP + 0x8]
0076499c  MOV EAX,dword ptr [ESP + 0x8]
007649a0  FILD dword ptr [ESP]
007649a3  MOV dword ptr [ECX + 0x4],EAX
007649a6  FMUL float ptr [0x008b5b30]
007649ac  FSTP float ptr [ESP + 0xc]
007649b0  MOV EDX,dword ptr [ESP + 0xc]
007649b4  MOV dword ptr [ECX + 0x8],EDX
007649b7  ADD ESP,0x10
007649ba  RET 0x4
