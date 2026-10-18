/* speed.exe 00596f30 FUN_00596f30; analysis pseudocode, not buildable source.
 * calls 005961d0 FUN_005961d0
 * calls 005dbed0 FUN_005dbed0
 * calls 005dc3e0 FUN_005dc3e0
 * calls 005dc530 FUN_005dc530
 * calls 005962b0 FUN_005962b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00596f30(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  float local_8;
  
  FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
  fVar2 = (float10)FUN_005dc3e0(*(undefined4 *)(param_1 + 0x1d4));
  fVar3 = (float10)FUN_005dc530(*(undefined4 *)(param_1 + 0x1d4));
  if ((_DAT_00890968 < (float)fVar2) && (_DAT_00890968 < (float)fVar3)) {
    local_8 = (float)fVar3 - (float)fVar2;
    uVar1 = 0x8569a25f;
    if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\0') {
      uVar1 = 0x8569ab44;
      local_8 = local_8 * _DAT_008a0294 * _DAT_008967e0;
    }
    FUN_005962b0(local_8,0x6eeabe8c,uVar1,"%$0.0f");
    return;
  }
  FUN_005961d0(0x6eeabe8c,0xfc1bf40);
  return;
}

