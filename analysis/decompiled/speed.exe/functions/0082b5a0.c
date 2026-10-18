/* speed.exe 0082b5a0 FUN_0082b5a0; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081c4d8 FUN_0081c4d8
 * calls 0081bcd9 FUN_0081bcd9
 */

undefined4 __fastcall FUN_0082b5a0(int *param_1)

{
  undefined4 uVar1;
  
  FUN_0081bccb();
  uVar1 = FUN_0081c4d8(param_1[1]);
  FUN_0081bcd9();
  param_1[0xf] = 1;
  (**(code **)(*param_1 + 8))();
  return uVar1;
}

