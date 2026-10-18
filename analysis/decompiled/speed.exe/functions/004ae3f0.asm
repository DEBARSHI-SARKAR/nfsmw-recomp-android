004ae3f0  PUSH -0x1
004ae3f2  PUSH 0x86b1d8
004ae3f7  MOV EAX,FS:[0x0]
004ae3fd  PUSH EAX
004ae3fe  MOV dword ptr FS:[0x0],ESP
004ae405  PUSH ECX
004ae406  PUSH EBX
004ae407  PUSH ESI
004ae408  MOV ESI,ECX
004ae40a  PUSH EDI
004ae40b  MOV dword ptr [ESP + 0xc],ESI
004ae40f  PUSH 0x4690b0
004ae414  XOR EBX,EBX
004ae416  PUSH 0x4aaa60
004ae41b  PUSH 0x4
004ae41d  PUSH 0x14
004ae41f  LEA EAX,[ESI + 0x44]
004ae422  MOV EDI,0x3f800000
004ae427  PUSH EAX
004ae428  MOV dword ptr [ESP + 0x2c],EBX
004ae42c  MOV dword ptr [ESI],0x896828
004ae432  MOV dword ptr [ESI + 0x4],EBX
004ae435  MOV dword ptr [ESI + 0x8],EBX
004ae438  MOV dword ptr [ESI + 0xc],EBX
004ae43b  MOV dword ptr [ESI + 0x10],EBX
004ae43e  MOV dword ptr [ESI + 0x14],EBX
004ae441  MOV dword ptr [ESI + 0x18],0x1
004ae448  MOV dword ptr [ESI + 0x2c],0xffffffff
004ae44f  MOV byte ptr [ESI + 0x30],BL
004ae452  MOV dword ptr [ESI + 0x34],EBX
004ae455  MOV dword ptr [ESI + 0x38],EBX
004ae458  MOV dword ptr [ESI + 0x3c],EBX
004ae45b  MOV dword ptr [ESI + 0x40],EDI
004ae45e  CALL 0x007c90a0
004ae463  MOV ECX,dword ptr [ESP + 0x20]
004ae467  MOV dword ptr [ESI + 0xdc],EBX
004ae46d  MOV dword ptr [ESI + 0x94],ECX
004ae473  MOV ECX,dword ptr [ESP + 0x10]
004ae477  MOV byte ptr [ESI + 0xe0],BL
004ae47d  MOV dword ptr [ESI + 0xe4],EBX
004ae483  MOV dword ptr [ESI + 0xe8],EBX
004ae489  MOV dword ptr [ESI + 0xf0],EBX
004ae48f  MOV dword ptr [ESI + 0xf4],EBX
004ae495  MOV dword ptr [ESI + 0xf8],EBX
004ae49b  MOV byte ptr [ESI + 0xef],BL
004ae4a1  MOV byte ptr [ESI + 0xee],BL
004ae4a7  MOV byte ptr [ESI + 0xed],BL
004ae4ad  MOV byte ptr [ESI + 0xec],BL
004ae4b3  MOV dword ptr [ESI + 0x28],EDI
004ae4b6  MOV dword ptr [ESI + 0x24],EDI
004ae4b9  MOV dword ptr [ESI + 0x20],EDI
004ae4bc  MOV dword ptr [ESI + 0x1c],EDI
004ae4bf  MOV dword ptr [ESI + 0xb0],EBX
004ae4c5  MOV dword ptr [ESI + 0xb4],EBX
004ae4cb  MOV dword ptr [ESI + 0xa8],EBX
004ae4d1  MOV dword ptr [ESI + 0xac],EBX
004ae4d7  MOV dword ptr [ESI + 0xa0],EBX
004ae4dd  MOV dword ptr [ESI + 0xa4],EBX
004ae4e3  MOV dword ptr [ESI + 0x98],EBX
004ae4e9  MOV dword ptr [ESI + 0x9c],EBX
004ae4ef  MOV byte ptr [ESI + 0xdc],BL
004ae4f5  MOV byte ptr [ESI + 0xda],BL
004ae4fb  MOV byte ptr [ESI + 0xd9],BL
004ae501  MOV byte ptr [ESI + 0xd8],BL
004ae507  MOV dword ptr [ESI + 0xc4],EBX
004ae50d  MOV dword ptr [ESI + 0xc0],EBX
004ae513  MOV dword ptr [ESI + 0xbc],EBX
004ae519  MOV dword ptr [ESI + 0xb8],EBX
004ae51f  MOV dword ptr [ESI + 0xd4],EBX
004ae525  MOV dword ptr [ESI + 0xd0],EBX
004ae52b  MOV dword ptr [ESI + 0xcc],EBX
004ae531  MOV dword ptr [ESI + 0xc8],EBX
004ae537  POP EDI
004ae538  MOV EAX,ESI
004ae53a  POP ESI
004ae53b  POP EBX
004ae53c  MOV dword ptr FS:[0x0],ECX
004ae543  ADD ESP,0x10
004ae546  RET 0x4
