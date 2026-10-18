/* speed.exe 004e1cd0 FUN_004e1cd0; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 004e1350 FUN_004e1350
 * calls 0081bccb FUN_0081bccb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004e1cd0(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar2 = FUN_004e1350(param_2);
  }
  FUN_0081bccb();
  param_3 = param_3 * _DAT_00898b98;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  iVar1 = (int)ROUND(param_3);
  *(int *)(param_1 + 0x38) = ((int)(param_3 - (float)iVar1) >> 0x1f) + 1 + iVar1;
  FUN_0081bcd9();
  return 1;
}

