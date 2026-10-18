/* speed.exe 0082b320 FUN_0082b320; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081cfcc FUN_0081cfcc
 */

undefined4 __thiscall FUN_0082b320(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_0081bccb();
  uVar1 = FUN_0081cfcc(*(undefined4 *)(param_1 + 4),param_2,param_3);
  FUN_0081bcd9();
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return uVar1;
}

