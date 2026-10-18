/* speed.exe 007f83f1 FUN_007f83f1; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081cd74 FUN_0081cd74
 * calls 0081bccb FUN_0081bccb
 */

undefined4 __fastcall FUN_007f83f1(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) != -1) {
    FUN_0081bccb();
    uVar1 = FUN_0081cd74(*(undefined4 *)(param_1 + 0x10),0);
    FUN_0081bcd9();
    return uVar1;
  }
  return 0;
}

