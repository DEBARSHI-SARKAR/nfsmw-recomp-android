00416af0  PUSH ESI
00416af1  MOV ESI,ECX
00416af3  CALL 0x00414ce0
00416af8  XOR AL,AL
00416afa  MOV byte ptr [ESI + 0x760],AL
00416b00  MOV byte ptr [ESI + 0x761],AL
00416b06  MOV byte ptr [ESI + 0x762],AL
00416b0c  MOV byte ptr [ESI + 0x763],AL
00416b12  MOV byte ptr [ESI + 0x778],AL
00416b18  MOV byte ptr [ESI + 0x779],AL
00416b1e  MOV EDX,dword ptr [0x008a2fb4]
00416b24  LEA ECX,[ESI + 0x77c]
00416b2a  MOV dword ptr [ECX],EDX
00416b2c  MOV EDX,dword ptr [0x008a2fb8]
00416b32  MOV dword ptr [ECX + 0x4],EDX
00416b35  MOV EDX,dword ptr [0x008a2fbc]
00416b3b  MOV byte ptr [ESI + 0x77a],AL
00416b41  MOV dword ptr [ESI + 0x798],0x42c60000
00416b4b  MOV dword ptr [ESI + 0x79c],0x3e800000
00416b55  MOV dword ptr [ECX + 0x8],EDX
00416b58  MOV ECX,dword ptr [0x00925ae8]
00416b5e  MOV dword ptr [ESI + 0x774],ECX
00416b64  MOV dword ptr [ESI + 0x770],ECX
00416b6a  MOV dword ptr [ESI + 0x76c],ECX
00416b70  MOV dword ptr [ESI + 0x764],0xffffffff
00416b7a  MOV byte ptr [ESI + 0x768],AL
00416b80  POP ESI
00416b81  RET
