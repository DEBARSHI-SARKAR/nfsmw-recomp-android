005028a0  PUSH EBP
005028a1  MOV EBP,ESP
005028a3  AND ESP,0xfffffff0
005028a6  SUB ESP,0x60
005028a9  MOV ECX,dword ptr [ECX + 0x40]
005028ac  XOR EDX,EDX
005028ae  CMP ECX,EDX
005028b0  JZ 0x00502979
005028b6  MOV EAX,dword ptr [EBP + 0xc]
005028b9  MOV dword ptr [ESP + 0x20],EAX
005028bd  MOV dword ptr [ESP + 0x34],EAX
005028c1  MOV dword ptr [ESP + 0x48],EAX
005028c5  MOV EAX,dword ptr [EBP + 0x8]
005028c8  FLD float ptr [EAX + 0x30]
005028cb  MOV dword ptr [ESP + 0x50],EDX
005028cf  MOV dword ptr [ESP + 0x54],EDX
005028d3  MOV dword ptr [ESP + 0x58],EDX
005028d7  MOV dword ptr [ESP + 0x24],EDX
005028db  MOV dword ptr [ESP + 0x28],EDX
005028df  MOV dword ptr [ESP + 0x2c],EDX
005028e3  MOV dword ptr [ESP + 0x30],EDX
005028e7  MOV dword ptr [ESP + 0x38],EDX
005028eb  MOV dword ptr [ESP + 0x3c],EDX
005028ef  MOV dword ptr [ESP + 0x40],EDX
005028f3  MOV dword ptr [ESP + 0x44],EDX
005028f7  MOV dword ptr [ESP + 0x4c],EDX
005028fb  MOV dword ptr [ESP + 0x5c],0x3f800000
00502903  FSUB float ptr [ECX + 0x40]
00502906  FLD float ptr [EAX + 0x34]
00502909  FSUB float ptr [ECX + 0x44]
0050290c  FLD float ptr [EAX + 0x38]
0050290f  FSUB float ptr [ECX + 0x48]
00502912  FSTP float ptr [ESP + 0x18]
00502916  FXCH
00502918  FMUL float ptr [EBP + 0xc]
0050291b  FSTP float ptr [ESP]
0050291e  FMUL float ptr [EBP + 0xc]
00502921  FSTP float ptr [ESP + 0x4]
00502925  FLD float ptr [ESP + 0x18]
00502929  FMUL float ptr [EBP + 0xc]
0050292c  FLD float ptr [ESP]
0050292f  FADD float ptr [ECX + 0x40]
00502932  FLD float ptr [ESP + 0x4]
00502936  FADD float ptr [ECX + 0x44]
00502939  FXCH ST2
0050293b  FADD float ptr [ECX + 0x48]
0050293e  MOV dword ptr [EAX + 0x30],EDX
00502941  MOV dword ptr [EAX + 0x34],EDX
00502944  MOV dword ptr [EAX + 0x38],EDX
00502947  FSTP float ptr [ESP + 0x8]
0050294b  MOV ECX,dword ptr [ESP + 0x8]
0050294f  LEA EDX,[ESP + 0x20]
00502953  PUSH EDX
00502954  FSTP float ptr [ESP + 0x54]
00502958  PUSH EAX
00502959  PUSH EAX
0050295a  FSTP float ptr [ESP + 0x60]
0050295e  MOV dword ptr [ESP + 0x64],ECX
00502962  MOV dword ptr [ESP + 0x68],0x3f800000
0050296a  MOV dword ptr [EAX + 0x3c],0x3f800000
00502971  CALL 0x006bd900
00502976  ADD ESP,0xc
00502979  MOV ESP,EBP
0050297b  POP EBP
0050297c  RET 0x8
