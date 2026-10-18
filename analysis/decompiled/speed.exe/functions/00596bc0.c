/* speed.exe 00596bc0 FUN_00596bc0; analysis pseudocode, not buildable source.
 * calls 006000a0 FUN_006000a0
 * calls 005961d0 FUN_005961d0
 * calls 005dbed0 FUN_005dbed0
 * calls 005fffd0 FUN_005fffd0
 * calls 005963a0 FUN_005963a0
 */

void __fastcall FUN_00596bc0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
  if (1 < *(int *)(iVar1 + 0x28)) {
    fVar2 = (float10)FUN_005fffd0(*(undefined4 *)(param_1 + 0x1d4));
    fVar3 = (float10)FUN_006000a0(*(undefined4 *)(param_1 + 0x1d4));
    FUN_005963a0((float)(fVar3 - (float10)(float)fVar2),0x4121e8c4);
    return;
  }
  FUN_005961d0(0x4121e8c4,0xfc1bf40);
  return;
}

