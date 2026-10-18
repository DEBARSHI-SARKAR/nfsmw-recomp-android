/* speed.exe 0056a500 FUN_0056a500; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0056a500(int param_1,undefined4 param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (0x1f < iVar1) {
    return (uint)uVar2 << 8;
  }
  *(undefined4 *)(param_1 + 0x2c + iVar1 * 4) = param_2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return CONCAT31(uVar2,1);
}

