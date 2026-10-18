/* speed.exe 005d0450 FUN_005d0450; analysis pseudocode, not buildable source.
 * calls 005d0240 FUN_005d0240
 * calls 005d03a0 FUN_005d03a0
 */

uint __thiscall FUN_005d0450(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x10c) == '\0') {
    FUN_005d0240();
  }
  uVar4 = (param_2 + 1) * 0x10;
  if ((uVar4 & uVar4 - 1) == 0) {
    if (((param_2 != 0) && ((*(byte *)(param_1 + 0x118) & 0x1f) != 0)) &&
       (uVar3 = FUN_005d03a0(0x10), (char)uVar3 == '\0')) {
LAB_005d0518:
      return uVar3 & 0xffffff00;
    }
    if (1 < param_2) {
      bVar1 = *(byte *)(param_1 + 0x118);
      iVar2 = 3;
      while (((bVar1 & 0x3f) != 0 && (iVar2 != 0))) {
        uVar3 = FUN_005d03a0(0x20);
        if ((char)uVar3 == '\0') goto LAB_005d0518;
        bVar1 = *(byte *)(param_1 + 0x118);
        iVar2 = iVar2 + -1;
      }
    }
    if (3 < param_2) {
      uVar3 = *(uint *)(param_1 + 0x118);
      while ((uVar4 - 1 & 0x7f & uVar3) != 0) {
        uVar3 = FUN_005d03a0(0x40);
        if ((char)uVar3 == '\0') goto LAB_005d0518;
        uVar3 = *(uint *)(param_1 + 0x118);
      }
    }
  }
  uVar4 = FUN_005d03a0(uVar4);
  return uVar4;
}

