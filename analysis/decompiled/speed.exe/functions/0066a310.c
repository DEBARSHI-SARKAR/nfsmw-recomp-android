/* speed.exe 0066a310 FUN_0066a310; analysis pseudocode, not buildable source.
 * calls 00699d60 FUN_00699d60
 * calls 0048aee0 FUN_0048aee0
 */

uint __fastcall FUN_0066a310(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x60;
  }
  uVar1 = FUN_0048aee0(param_1);
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_00699d60();
  return uVar1;
}

