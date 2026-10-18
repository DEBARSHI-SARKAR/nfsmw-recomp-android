/* speed.exe 008298d0 FUN_008298d0; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 */

undefined4 FUN_008298d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0082caa0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 300);
}

