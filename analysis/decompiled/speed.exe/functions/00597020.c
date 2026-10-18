/* speed.exe 00597020 FUN_00597020; analysis pseudocode, not buildable source.
 * calls 005961d0 FUN_005961d0
 * calls 005dbed0 FUN_005dbed0
 * calls 005962b0 FUN_005962b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00597020(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float local_4;
  
  iVar1 = FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
  if (-1 < *(int *)(param_1 + 0x1d0)) {
    uVar3 = 0x8569a25f;
    iVar2 = FUN_005dbed0(*(int *)(param_1 + 0x1d0));
    local_4 = ABS(*(float *)(iVar2 + 0x120) - *(float *)(iVar1 + 0x120));
    if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\0') {
      uVar3 = 0x8569ab44;
      local_4 = local_4 * _DAT_008a0294 * _DAT_008967e0;
    }
    FUN_005962b0(local_4,0x2e54b7ed,uVar3,"%$0.0f");
    return;
  }
  FUN_005961d0(0x2e54b7ed,0xfc1bf40);
  return;
}

