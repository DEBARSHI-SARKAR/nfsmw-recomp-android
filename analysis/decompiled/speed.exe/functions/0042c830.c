/* speed.exe 0042c830 FUN_0042c830; analysis pseudocode, not buildable source.
 * calls 0042c6c0 FUN_0042c6c0
 */

uint FUN_0042c830(undefined4 param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if (DAT_0090d8e4 != 0) {
    uVar1 = FUN_0042c6c0(param_1,param_2);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

