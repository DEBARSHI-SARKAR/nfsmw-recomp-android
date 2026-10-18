/* speed.exe 0082ab80 FUN_0082ab80; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081f39d FUN_0081f39d
 * calls 0081bcd9 FUN_0081bcd9
 */

undefined4 __fastcall FUN_0082ab80(int *param_1)

{
  undefined4 uVar1;
  
  FUN_0081bccb();
  uVar1 = FUN_0081f39d(param_1[0x45]);
  FUN_0081bcd9();
  param_1[0xf] = 1;
  param_1[0x45] = -1;
  param_1[1] = -1;
  (**(code **)(*param_1 + 8))();
  return uVar1;
}

