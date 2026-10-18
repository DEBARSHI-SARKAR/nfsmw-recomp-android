/* speed.exe 00784ec0 FUN_00784ec0; analysis pseudocode, not buildable source.
 * calls 0077c5b0 FUN_0077c5b0
 * calls 007835e0 FUN_007835e0
 * calls 005d29d0 FUN_005d29d0
 * calls 007687e0 FUN_007687e0
 */

undefined4 __fastcall FUN_00784ec0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int local_4;
  
  local_4 = param_1;
  FUN_0077c5b0(&local_4,&stack0x00000004);
  if (local_4 != *(int *)(param_1 + 8)) {
    *(int *)(*(int *)(local_4 + 0x10) + 100) = *(int *)(*(int *)(local_4 + 0x10) + 100) + 1;
    return *(undefined4 *)(local_4 + 0x10);
  }
  iVar1 = FUN_005d29d0(0x70,0);
  if (iVar1 != 0) {
    uVar2 = FUN_007687e0();
    puVar3 = (undefined4 *)FUN_007835e0(&stack0x00000004);
    *puVar3 = uVar2;
    return uVar2;
  }
  puVar3 = (undefined4 *)FUN_007835e0(&stack0x00000004);
  *puVar3 = 0;
  return 0;
}

