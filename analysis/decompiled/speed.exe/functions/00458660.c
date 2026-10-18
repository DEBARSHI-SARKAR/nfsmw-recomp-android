/* speed.exe 00458660 FUN_00458660; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00458660(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 8);
    return **(undefined4 **)
             (*(int *)(*(int *)(DAT_0090dcbc + 4) + 0x20) +
             (-(uint)(uVar1 < *(uint *)(*(int *)(DAT_0090dcbc + 4) + 0x18)) & uVar1) * 4);
  }
  return 0;
}

