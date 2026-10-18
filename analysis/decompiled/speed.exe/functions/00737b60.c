/* speed.exe 00737b60 FUN_00737b60; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00737b60(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x318) != 0) {
    uVar1 = *(undefined4 *)
             ((param_2 + 1) * 0x10 + *(int *)(*(int *)(param_1 + 0x318) + 0x17b4) + 0xc);
    *param_3 = uVar1;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}

