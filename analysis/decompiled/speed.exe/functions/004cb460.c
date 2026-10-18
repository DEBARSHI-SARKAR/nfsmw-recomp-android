/* speed.exe 004cb460 FUN_004cb460; analysis pseudocode, not buildable source.
 * calls 004cb3f0 FUN_004cb3f0
 */

uint FUN_004cb460(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004cb3f0(param_1);
  if (iVar1 != 0) {
    return (uint)*(ushort *)(iVar1 + 4);
  }
  return 0xffffffff;
}

