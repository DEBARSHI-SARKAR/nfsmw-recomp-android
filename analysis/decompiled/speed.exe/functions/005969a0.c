/* speed.exe 005969a0 FUN_005969a0; analysis pseudocode, not buildable source.
 * calls 005961d0 FUN_005961d0
 * calls 005dbed0 FUN_005dbed0
 * calls 005dc7d0 FUN_005dc7d0
 * calls 005e3060 FUN_005e3060
 * calls 005962b0 FUN_005962b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005969a0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float local_4;
  
  iVar2 = FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
  local_4 = *(float *)(iVar2 + 0x100) * _DAT_008967e0;
  uVar3 = 0x8569ab44;
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
    uVar3 = 0x8569a25f;
    local_4 = local_4 * _DAT_008a0298;
  }
  fVar4 = (float10)FUN_005e3060();
  if ((float10)_DAT_00890968 < fVar4) {
    cVar1 = FUN_005dc7d0();
    if (cVar1 != '\0') {
      FUN_005962b0(local_4,0xef34382,uVar3,"%$0.0f");
      return;
    }
  }
  FUN_005961d0(0xef34382,0xfc1bf40);
  return;
}

