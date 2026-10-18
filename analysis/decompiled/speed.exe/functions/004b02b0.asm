004b02b0  FILD dword ptr [ESP + 0xc]
004b02b4  FMUL float ptr [0x00890d60]
004b02ba  FST float ptr [ECX + 0x4]
004b02bd  FCOMP float ptr [0x00890968]
004b02c3  FNSTSW AX
004b02c5  TEST AH,0x41
004b02c8  JP 0x004b02d1
004b02ca  MOV dword ptr [ECX + 0x4],0x3c23d70a
004b02d1  MOV EAX,dword ptr [ESP + 0x8]
004b02d5  MOV EDX,dword ptr [ESP + 0x4]
004b02d9  MOV dword ptr [ECX + 0xc],EAX
004b02dc  MOV EAX,dword ptr [ESP + 0x10]
004b02e0  MOV dword ptr [ECX + 0x8],EDX
004b02e3  MOV dword ptr [ECX + 0x10],EAX
004b02e6  MOV byte ptr [ECX + 0x18],0x0
004b02ea  MOV dword ptr [ECX + 0x14],EDX
004b02ed  MOV dword ptr [ECX],0x0
004b02f3  RET 0x10
