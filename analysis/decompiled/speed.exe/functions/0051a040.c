/* speed.exe 0051a040 FUN_0051a040; analysis pseudocode, not buildable source.
 * calls 0051a040 FUN_0051a040
 */

int FUN_0051a040(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_0051a040(param_1 + -1);
  return iVar1 * 10;
}

