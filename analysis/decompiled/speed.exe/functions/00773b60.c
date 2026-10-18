/* speed.exe 00773b60 FUN_00773b60; analysis pseudocode, not buildable source.
 * calls 007661a0 FUN_007661a0
 * calls 0076fde0 FUN_0076fde0
 * calls 0076ff00 FUN_0076ff00
 */

undefined4 __thiscall FUN_00773b60(int param_1,int param_2,char param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  
  switch(param_4) {
  case 0:
    if (((*(byte *)(param_2 + 10) >> 6 & 1) != 0) && (param_3 == '\0')) {
      return 0;
    }
    break;
  case 2:
    if (*(char *)(param_2 + 10) < '\0') {
      uVar2 = FUN_007661a0(param_2);
      cVar3 = FUN_0076ff00(uVar2,param_1 + 0x20,param_1 + 0x24);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    uVar5 = (uint)*(ushort *)(param_2 + 10);
    if ((((byte)*(ushort *)(param_2 + 10) >> 6 & 1) != 0) && (param_3 == '\0')) {
      return 0;
    }
    goto LAB_00773c18;
  case 3:
    uVar5 = (uint)*(ushort *)(param_2 + 10);
    if ((((byte)*(ushort *)(param_2 + 10) >> 6 & 1) != 0) && (param_3 == '\0')) {
      return 0;
    }
LAB_00773c18:
    if (((uVar5 >> 0xc & 1) != 0) || ((uVar5 >> 0xd & 1) != 0)) {
      return 0;
    }
    break;
  case 4:
    uVar1 = *(ushort *)(param_2 + 10);
    if ((char)(byte)uVar1 < '\0') {
      cVar3 = FUN_0076fde0();
      cVar4 = FUN_007661a0(param_2);
      if (cVar4 != cVar3) {
        return 0;
      }
    }
    if ((((byte)uVar1 >> 6 & 1) != 0) && (param_3 == '\0')) {
      return 0;
    }
    if ((uVar1 & 0x1000) != 0) {
      return 0;
    }
    if ((uVar1 & 0x2000) != 0) {
      return 0;
    }
    break;
  case 6:
    uVar1 = *(ushort *)(param_2 + 10);
    if (((char)(byte)uVar1 < '\0') &&
       (uVar5 = FUN_007661a0(param_2), *(char *)((uVar5 & 0xff) + *(int *)(param_1 + 0x28)) == '\0')
       ) {
      return 0;
    }
    if ((uVar1 & 0x1000) != 0) {
      return 0;
    }
    if ((uVar1 & 0x2000) != 0) {
      return 0;
    }
    if ((((byte)uVar1 >> 6 & 1) != 0) && (param_3 == '\0')) {
      return 0;
    }
  }
  return 1;
}

