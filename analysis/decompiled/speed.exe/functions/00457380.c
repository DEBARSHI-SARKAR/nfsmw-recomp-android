/* speed.exe 00457380 FUN_00457380; analysis pseudocode, not buildable source.
 * calls 00456780 FUN_00456780
 */

uint __thiscall FUN_00457380(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x30);
  uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 0x2e) * 0x10 + iVar1;
  uVar2 = FUN_00456780(iVar1,uVar3,local_10,0);
  return -(uint)(uVar2 < uVar3) & uVar2;
}

