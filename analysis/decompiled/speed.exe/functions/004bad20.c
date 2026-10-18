/* speed.exe 004bad20 FUN_004bad20; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081bdb2 FUN_0081bdb2
 * calls 0081d5f2 FUN_0081d5f2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004bad20(int param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == '\x01') {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (100 < param_2) {
      param_2 = 100;
    }
    *(int *)(param_1 + 0x18) = param_2;
    FUN_0081bccb();
    iVar1 = FUN_0081bdb2(*(undefined4 *)(param_1 + 0x14),0xfa,
                         (*(int *)(param_1 + 0x18) * 0x7f) / 100);
    FUN_0081bcd9();
    return (-1 < iVar1) - 1 & 0xfffffffd;
  }
  *(int *)(param_1 + 0x18) = param_2;
  FUN_0081bccb();
  uVar2 = FUN_0081d5f2(*(undefined4 *)(param_1 + 0x14),0xffffffff,
                       (float)*(int *)(param_1 + 0x18) * _DAT_00890bf0);
  FUN_0081bcd9();
  return uVar2;
}

