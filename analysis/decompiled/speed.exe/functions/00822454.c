/* speed.exe 00822454 FUN_00822454; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0082175f FUN_0082175f
 */

undefined4 FUN_00822454(int param_1)

{
  undefined4 uVar1;
  
  FUN_0081bccb();
  uVar1 = FUN_0082175f(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x28));
  FUN_0081bcd9();
  return uVar1;
}

