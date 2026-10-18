/* speed.exe 004573c0 FUN_004573c0; analysis pseudocode, not buildable source.
 * calls 00456780 FUN_00456780
 */

undefined4 __thiscall FUN_004573c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x30);
  iVar2 = FUN_00456780(iVar1,(uint)*(ushort *)(*(int *)(param_1 + 8) + 0x2e) * 0x10 + iVar1,local_10
                       ,0);
  uVar3 = (iVar2 - iVar1 >> 4) + 1;
  if (uVar3 < *(ushort *)(*(int *)(param_1 + 8) + 0x2e)) {
    return *(undefined4 *)(uVar3 * 0x10 + *(int *)(*(int *)(param_1 + 8) + 0x30));
  }
  return 0;
}

