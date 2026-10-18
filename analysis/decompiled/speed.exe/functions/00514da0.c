/* speed.exe 00514da0 FUN_00514da0; analysis pseudocode, not buildable source.
 */

uint FUN_00514da0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_1 != 0) && (uVar1 = 0, *(int *)(param_1 + 0x54) != 0)) &&
     (uVar1 = *(uint *)(*(int *)(param_1 + 0x54) + 0x30), uVar1 == param_2)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

