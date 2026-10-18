/* speed.exe 0082a920 FUN_0082a920; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081e3cb FUN_0081e3cb
 * calls 0081bcd9 FUN_0081bcd9
 */

undefined4 __thiscall FUN_0082a920(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0081bccb();
  uVar1 = FUN_0081e3cb(*(undefined4 *)(param_1 + 0x114),param_2);
  FUN_0081bcd9();
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(char *)(*(int *)(param_1 + 0xfc) + 4) = (char)param_2;
  return uVar1;
}

