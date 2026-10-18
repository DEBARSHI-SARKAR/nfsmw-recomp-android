007ebf50  PUSH EBP
007ebf51  MOV EBP,ESP
007ebf53  MOV ECX,dword ptr [EBP + 0x8]
007ebf56  MOV EAX,dword ptr [EBP + 0xc]
007ebf59  MOV EDX,0x1
007ebf5e  ADD ECX,-0x8
007ebf61  CMP ECX,0x7
007ebf64  MOV dword ptr [EAX],EDX
007ebf66  MOV dword ptr [EAX + 0x4],EDX
007ebf69  MOV dword ptr [EAX + 0x8],0x0
007ebf70  JA 0x007ec000
007ebf76  JMP dword ptr [ECX*0x4 + 0x7ec004]
007ebf7d  MOV dword ptr [EAX],EDX
007ebf7f  MOV dword ptr [EAX + 0x4],0x2
007ebf86  MOV dword ptr [EAX + 0x8],EDX
007ebf89  POP EBP
007ebf8a  RET
007ebf8b  MOV ECX,0x2
007ebf90  MOV dword ptr [EAX],ECX
007ebf92  MOV dword ptr [EAX + 0x8],EDX
007ebf95  MOV dword ptr [EAX + 0x4],ECX
007ebf98  POP EBP
007ebf99  RET
007ebf9a  MOV dword ptr [EAX],0x4
007ebfa0  MOV dword ptr [EAX + 0x4],0x2
007ebfa7  MOV dword ptr [EAX + 0x8],EDX
007ebfaa  POP EBP
007ebfab  RET
007ebfac  MOV dword ptr [EAX],0x8
007ebfb2  MOV dword ptr [EAX + 0x4],0x2
007ebfb9  MOV dword ptr [EAX + 0x8],EDX
007ebfbc  POP EBP
007ebfbd  RET
007ebfbe  MOV ECX,0x2
007ebfc3  MOV dword ptr [EAX],EDX
007ebfc5  MOV dword ptr [EAX + 0x8],ECX
007ebfc8  MOV dword ptr [EAX + 0x4],ECX
007ebfcb  POP EBP
007ebfcc  RET
007ebfcd  MOV ECX,0x2
007ebfd2  MOV dword ptr [EAX],ECX
007ebfd4  MOV dword ptr [EAX + 0x8],ECX
007ebfd7  MOV dword ptr [EAX + 0x4],ECX
007ebfda  POP EBP
007ebfdb  RET
007ebfdc  MOV ECX,0x2
007ebfe1  MOV dword ptr [EAX],0x4
007ebfe7  MOV dword ptr [EAX + 0x8],ECX
007ebfea  MOV dword ptr [EAX + 0x4],ECX
007ebfed  POP EBP
007ebfee  RET
007ebfef  MOV ECX,0x2
007ebff4  MOV dword ptr [EAX],0x8
007ebffa  MOV dword ptr [EAX + 0x8],ECX
007ebffd  MOV dword ptr [EAX + 0x4],ECX
007ec000  POP EBP
007ec001  RET
