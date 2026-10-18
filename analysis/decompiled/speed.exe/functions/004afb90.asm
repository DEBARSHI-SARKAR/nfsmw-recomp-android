004afb90  PUSH ESI
004afb91  MOV ESI,ECX
004afb93  CALL 0x004eb610
004afb98  XOR EAX,EAX
004afb9a  MOV byte ptr [ESI + 0x128],AL
004afba0  MOV byte ptr [ESI + 0x130],AL
004afba6  MOV dword ptr [ESI + 0x134],EAX
004afbac  MOV byte ptr [ESI + 0x138],AL
004afbb2  MOV dword ptr [ESI],0x896a60
004afbb8  MOV byte ptr [ESI + 0x139],0x1
004afbbf  MOV EAX,ESI
004afbc1  POP ESI
004afbc2  RET
