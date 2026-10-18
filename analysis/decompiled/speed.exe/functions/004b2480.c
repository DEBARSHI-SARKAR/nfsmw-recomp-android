/* speed.exe 004b2480 FUN_004b2480; analysis pseudocode, not buildable source.
 * calls 0081cb91 FUN_0081cb91
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 */

undefined4 FUN_004b2480(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0081bccb();
  uVar1 = FUN_0081cb91(param_1,param_2);
  FUN_0081bcd9();
  return uVar1;
}

