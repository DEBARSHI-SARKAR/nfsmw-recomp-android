/* speed.exe 00591e30 FUN_00591e30; analysis pseudocode, not buildable source.
 * calls 00585820 FUN_00585820
 */

bool FUN_00591e30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00585820(param_1);
  if (iVar1 != 0) {
    return *(short *)(iVar1 + 0x26) != 0;
  }
  return false;
}

