004fb940  SUB ESP,0xc
004fb943  MOV EAX,dword ptr [ECX + 0x30]
004fb946  FLD float ptr [ECX + 0x24]
004fb949  MOV EDX,dword ptr [ECX + 0x34]
004fb94c  FLD float ptr [ECX + 0x28]
004fb94f  MOV dword ptr [ESP],EAX
004fb952  FXCH
004fb954  MOV EAX,dword ptr [ECX + 0x38]
004fb957  MOV ECX,dword ptr [ECX + 0x20]
004fb95a  MOV dword ptr [ESP + 0x8],EAX
004fb95e  MOV EAX,dword ptr [ESP + 0x10]
004fb962  FSTP float ptr [EAX + 0x4]
004fb965  MOV dword ptr [EAX],ECX
004fb967  MOV ECX,0x3f800000
004fb96c  FSTP float ptr [EAX + 0x8]
004fb96f  MOV dword ptr [EAX + 0xc],ECX
004fb972  MOV EAX,dword ptr [ESP + 0x14]
004fb976  FLD float ptr [ESP]
004fb979  MOV dword ptr [ESP + 0x4],EDX
004fb97d  FSTP float ptr [EAX]
004fb97f  MOV dword ptr [EAX + 0x4],EDX
004fb982  MOV EDX,dword ptr [ESP + 0x8]
004fb986  MOV dword ptr [EAX + 0x8],EDX
004fb989  MOV dword ptr [EAX + 0xc],ECX
004fb98c  ADD ESP,0xc
004fb98f  RET 0x8
