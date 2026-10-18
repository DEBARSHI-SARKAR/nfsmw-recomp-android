/* speed.exe 00596e80 FUN_00596e80; analysis pseudocode, not buildable source.
 * calls 005961d0 FUN_005961d0
 * calls 005dbed0 FUN_005dbed0
 * calls 005e3060 FUN_005e3060
 * calls 005962b0 FUN_005962b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00596e80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_4;
  
  iVar1 = FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
  local_4 = *(float *)(iVar1 + 0x120);
  uVar2 = 0x8569a25f;
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\0') {
    uVar2 = 0x8569ab44;
    local_4 = local_4 * _DAT_008a0294 * _DAT_008967e0;
  }
  fVar3 = (float10)FUN_005e3060();
  if ((float10)_DAT_00890968 < fVar3) {
    FUN_005962b0(local_4,0xd57e02ab,uVar2,"%$0.0f");
    return;
  }
  FUN_005961d0(0xd57e02ab,0xfc1bf40);
  return;
}

