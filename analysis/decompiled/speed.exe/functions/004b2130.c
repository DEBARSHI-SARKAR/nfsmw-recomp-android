/* speed.exe 004b2130 FUN_004b2130; analysis pseudocode, not buildable source.
 * calls 0081cb57 FUN_0081cb57
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081bdb2 FUN_0081bdb2
 * calls 004655f0 FUN_004655f0
 */

undefined4 __thiscall
FUN_004b2130(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = param_4;
  iVar1 = FUN_0081cb57(param_6,param_3,param_2,param_4,param_5);
  *(int *)(param_1 + 0x14) = iVar1;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  if (iVar1 < 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_004655f0(*(int *)(param_1 + 0xc));
      return *(undefined4 *)(param_1 + 0x14);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_0081bccb();
    FUN_0081bdb2(*(undefined4 *)(param_1 + 0x14),0,0);
    FUN_0081bcd9();
  }
  return *(undefined4 *)(param_1 + 0x14);
}

