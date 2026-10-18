/* speed.exe 008244ac FUN_008244ac; analysis pseudocode, not buildable source.
 */

int FUN_008244ac(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    iVar1 = iVar1 * 0x100 + (uint)*param_1;
    param_1 = param_1 + 1;
  }
  if (param_2 == 1) {
    if (0x7f < iVar1) {
      return iVar1 + -0x100;
    }
  }
  else if (param_2 == 2) {
    if (0x7fff < iVar1) {
      return iVar1 + -0x10000;
    }
  }
  else if ((param_2 == 3) && (0x7fffff < iVar1)) {
    iVar1 = iVar1 + -0x1000000;
  }
  return iVar1;
}

