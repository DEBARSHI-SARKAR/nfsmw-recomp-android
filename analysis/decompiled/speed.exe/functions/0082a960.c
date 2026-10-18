/* speed.exe 0082a960 FUN_0082a960; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081e318 FUN_0081e318
 * calls 0081bcd9 FUN_0081bcd9
 */

undefined4 __thiscall FUN_0082a960(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_0081bccb();
  uVar1 = FUN_0081e318(*(undefined4 *)(param_1 + 0x114),param_2,param_3);
  FUN_0081bcd9();
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  return uVar1;
}

