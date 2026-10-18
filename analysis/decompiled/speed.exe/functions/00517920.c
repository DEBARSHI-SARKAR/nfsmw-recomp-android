/* speed.exe 00517920 FUN_00517920; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 * calls 00462430 FUN_00462430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00517920(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x138);
    return;
  }
  if (*(char *)(param_1 + 0x128) != '\0') {
    *(undefined1 *)(param_1 + 0x128) = 0;
    uVar2 = FUN_0045ce40();
    *(undefined4 *)(param_1 + 0x124) = uVar2;
  }
  fVar4 = (float10)FUN_00462430(*(undefined4 *)(param_1 + 0x124));
  *(float *)(param_1 + 0x138) = (float)fVar4;
  uVar2 = FUN_0045ce40();
  fVar1 = *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  *(float *)(param_1 + 0x138) = fVar1;
  if (_DAT_0089165c < fVar1) {
    iVar3 = *(int *)(param_1 + 0x130) + 1;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(int *)(param_1 + 0x130) = iVar3;
    if (0x3b < iVar3) {
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
    }
    uVar2 = FUN_0045ce40();
    *(undefined4 *)(param_1 + 0x124) = uVar2;
  }
  return;
}

