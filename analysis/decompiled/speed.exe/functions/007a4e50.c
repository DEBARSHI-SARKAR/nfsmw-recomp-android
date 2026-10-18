/* speed.exe 007a4e50 FUN_007a4e50; analysis pseudocode, not buildable source.
 * calls 00576700 FUN_00576700
 * calls 0058a960 FUN_0058a960
 * calls 0058a8d0 FUN_0058a8d0
 * calls 007a4db0 FUN_007a4db0
 * calls 00575b00 FUN_00575b00
 */

bool FUN_007a4e50(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
      if (((*(uint *)(DAT_0091cf90 + 300) & 8) == 0) ||
         (cVar1 = '\x04', (*(uint *)(DAT_0091cf90 + 300) & 0x20) == 0)) {
        cVar1 = '\x01';
      }
    }
    else {
      cVar1 = FUN_00575b00();
      cVar1 = (-(cVar1 != '\0') & 8U) + 2;
    }
    uVar2 = FUN_00575b00();
    cVar1 = FUN_0058a960(cVar1,uVar3,param_2,0,uVar2);
    return cVar1 == '\0';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  switch(uVar3) {
  case 0x53:
  case 0x5b:
    uVar3 = FUN_00575b00();
    uVar3 = FUN_007a4db0(0x2c,1,0,uVar3);
    cVar1 = FUN_00576700(uVar3);
    return cVar1 == '\0';
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
    uVar3 = FUN_00575b00();
    uVar3 = FUN_007a4db0(0x2e,2,0,uVar3);
    cVar1 = FUN_00576700(uVar3);
    return cVar1 == '\0';
  case 0x73:
  case 0x7b:
    uVar3 = FUN_00575b00();
    uVar3 = FUN_007a4db0(0x30,3,0,uVar3);
    cVar1 = FUN_00576700(uVar3);
    return cVar1 == '\0';
  }
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
    if (((*(uint *)(DAT_0091cf90 + 300) & 8) == 0) ||
       (cVar1 = '\x04', (*(uint *)(DAT_0091cf90 + 300) & 0x20) == 0)) {
      cVar1 = '\x01';
    }
  }
  else {
    cVar1 = FUN_00575b00();
    cVar1 = (-(cVar1 != '\0') & 8U) + 2;
  }
  uVar4 = FUN_00575b00();
  cVar1 = FUN_0058a8d0(cVar1,uVar3,uVar2,0,uVar4);
  return cVar1 == '\0';
}

