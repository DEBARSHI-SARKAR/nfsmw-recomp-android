/* speed.exe 005c0980 FUN_005c0980; analysis pseudocode, not buildable source.
 * calls 005aecb0 FUN_005aecb0
 * calls 005c0830 FUN_005c0830
 */

uint __thiscall FUN_005c0980(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_2 == -1) {
    *(int *)(param_1 + 0x18) = *param_3;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x7f;
    return (uint)param_3 & 0xffffff00;
  }
  iVar1 = FUN_005aecb0(param_2);
  bVar3 = *(int *)(iVar1 + 0xc) != param_2;
  if (bVar3) {
    iVar1 = FUN_005c0830(param_2);
  }
  *(int *)(iVar1 + 0x10) = *param_3 - *(int *)(param_1 + 0x18);
  uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(param_1 + 3)) & 0xffffff7f;
  *(char *)(param_1 + 3) = (char)uVar2;
  return CONCAT31((int3)(uVar2 >> 8),bVar3);
}

