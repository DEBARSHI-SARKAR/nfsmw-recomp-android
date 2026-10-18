/* speed.exe 007a3ec0 FUN_007a3ec0; analysis pseudocode, not buildable source.
 * calls 0056dbe0 FUN_0056dbe0
 */

void __fastcall FUN_007a3ec0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 8);
  iVar2 = FUN_0056dbe0(1);
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 8);
  iVar2 = FUN_0056dbe0(0);
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 8);
  iVar2 = FUN_0056dbe0(2);
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  return;
}

