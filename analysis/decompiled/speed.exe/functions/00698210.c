/* speed.exe 00698210 FUN_00698210; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00698210(int param_1,int param_2)

{
  int iVar1;
  uint3 uVar2;
  
  uVar2 = (uint3)((uint)*(int **)(param_1 + 0x78) >> 8);
  iVar1 = CONCAT31(uVar2,1);
  if (((*(byte *)(**(int **)(param_1 + 0x78) + 0x1d) & 1) != 0) &&
     ((*(byte *)(**(int **)(param_2 + 0x78) + 0x1d) & 1) != 0)) {
    iVar1 = (uint)uVar2 << 8;
  }
  return iVar1;
}

