/* speed.exe 00585920 FUN_00585920; analysis pseudocode, not buildable source.
 * calls 00585820 FUN_00585820
 */

undefined4 FUN_00585920(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00585820(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x34) = param_2;
    return 1;
  }
  return 0;
}

