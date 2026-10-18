/* speed.exe 00591e90 FUN_00591e90; analysis pseudocode, not buildable source.
 * calls 00585820 FUN_00585820
 */

undefined4 FUN_00591e90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00585820(param_1);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x1c);
  }
  return 0;
}

