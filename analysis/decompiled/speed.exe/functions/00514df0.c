/* speed.exe 00514df0 FUN_00514df0; analysis pseudocode, not buildable source.
 */

uint FUN_00514df0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x54), uVar1 != 0)) &&
      (*(int *)(uVar1 + 0x30) == param_2)) && (*(int *)(uVar1 + 0x10) <= *(int *)(uVar1 + 0xc))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

