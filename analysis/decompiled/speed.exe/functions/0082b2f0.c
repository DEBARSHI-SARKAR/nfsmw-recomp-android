/* speed.exe 0082b2f0 FUN_0082b2f0; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081d06c FUN_0081d06c
 */

undefined4 __thiscall FUN_0082b2f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0081bccb();
  uVar1 = FUN_0081d06c(*(undefined4 *)(param_1 + 4),param_2);
  FUN_0081bcd9();
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return uVar1;
}

