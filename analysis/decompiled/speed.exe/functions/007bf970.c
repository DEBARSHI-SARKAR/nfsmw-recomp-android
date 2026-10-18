/* speed.exe 007bf970 FUN_007bf970; analysis pseudocode, not buildable source.
 * calls 007bf7b0 FUN_007bf7b0
 * calls 007ada50 FUN_007ada50
 * calls 0056e2b0 FUN_0056e2b0
 */

void __thiscall FUN_007bf970(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) {
    return;
  }
  if ((*(uint *)(DAT_0091cf90 + 300) >> 5 & 1) != 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x1ac);
  uVar3 = uVar1 & 0xffff;
  iVar2 = FUN_0056e2b0();
  if (iVar2 == 2) {
    if (uVar3 == 1) {
      uVar3 = 4;
      goto LAB_007bf9ff;
    }
    if (uVar3 == 4) {
      uVar3 = 0x10;
      goto LAB_007bf9ff;
    }
    if (uVar3 != 0x10) goto LAB_007bf9ff;
  }
  else {
    if (param_2 == -1) {
      if (uVar3 == 1) {
        uVar3 = 8;
      }
      else {
        uVar3 = uVar3 >> 1;
      }
      goto LAB_007bf9ff;
    }
    if (param_2 != 1) goto LAB_007bf9ff;
    if (uVar3 != 8) {
      uVar3 = uVar3 << 1;
      goto LAB_007bf9ff;
    }
  }
  uVar3 = 1;
LAB_007bf9ff:
  *(uint *)(param_1 + 0x1ac) = uVar3 | uVar1 & 0xffff0000;
  FUN_007bf7b0();
  FUN_007ada50();
  return;
}

