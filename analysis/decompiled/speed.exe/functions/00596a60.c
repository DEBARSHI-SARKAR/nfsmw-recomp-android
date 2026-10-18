/* speed.exe 00596a60 FUN_00596a60; analysis pseudocode, not buildable source.
 * calls 005961d0 FUN_005961d0
 * calls 005dbed0 FUN_005dbed0
 * calls 005e3390 FUN_005e3390
 * calls 005dc7d0 FUN_005dc7d0
 * calls 005e3060 FUN_005e3060
 * calls 005962b0 FUN_005962b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00596a60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_4;
  
  FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
  uVar2 = 0x8569ab44;
  fVar3 = (float10)FUN_005e3390();
  local_4 = (float)(fVar3 * (float10)_DAT_008967e0);
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
    uVar2 = 0x8569a25f;
    local_4 = local_4 * _DAT_008a0298;
  }
  fVar3 = (float10)FUN_005e3060();
  if ((float10)_DAT_00890968 < fVar3) {
    cVar1 = FUN_005dc7d0();
    if (cVar1 != '\0') {
      FUN_005962b0(local_4,0x57f4140a,uVar2,"%$0.0f");
      return;
    }
  }
  FUN_005961d0(0x57f4140a,0xfc1bf40);
  return;
}

