/* speed.exe 00461160 FUN_00461160; analysis pseudocode, not buildable source.
 */

void FUN_00461160(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (short *)0x0) {
    sVar1 = *param_1;
    while (sVar1 != 0) {
      iVar2 = iVar2 + 1;
      sVar1 = param_1[iVar2];
    }
  }
  return;
}

