/* speed.exe 007f83c1 FUN_007f83c1; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081d0a3 FUN_0081d0a3
 * calls 0081bccb FUN_0081bccb
 */

undefined4 __thiscall FUN_007f83c1(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == -1) {
    uVar1 = 0;
  }
  else {
    FUN_0081bccb();
    uVar1 = FUN_0081d0a3(*(undefined4 *)(param_1 + 0xc),param_2);
    FUN_0081bcd9();
  }
  return uVar1;
}

