/* speed.exe 00588250 FUN_00588250; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 * calls 0045d380 FUN_0045d380
 */

int FUN_00588250(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045d3a0(0);
  if (param_1 < iVar1) {
    iVar1 = FUN_0045d380(param_1);
    if (iVar1 != 0) {
      return iVar1 + -4;
    }
  }
  return 0;
}

