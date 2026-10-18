/* speed.exe 00588280 FUN_00588280; analysis pseudocode, not buildable source.
 * calls 0045d380 FUN_0045d380
 */

int FUN_00588280(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_0045d380(param_1 + -1);
    if (iVar1 != 0) {
      return iVar1 + -4;
    }
  }
  return 0;
}

