/* speed.exe 004bc150 FUN_004bc150; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bc150(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x30) + 0x8c);
  if (iVar1 < 7) {
    fVar2 = _DAT_0089096c;
    if (iVar1 == 3) {
      fVar2 = _DAT_0089642c;
    }
    if (iVar1 == 4) {
      fVar2 = _DAT_0089644c;
    }
    if (iVar1 == 5) {
      fVar2 = _DAT_00896434;
    }
    if (iVar1 == 6) {
      fVar2 = _DAT_00896438;
    }
    *(undefined4 *)(param_1 + 0x148) = 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 8);
    fVar3 = (float)*(int *)(iVar1 + 0x18);
    if (*(int *)(iVar1 + 0x18) < 0) {
      fVar3 = fVar3 + _DAT_00891214;
    }
    fVar4 = (float)*(int *)(iVar1 + 0x28) * _DAT_00890d60;
    *(float *)(param_1 + 0x114) = fVar4;
    if (fVar4 < _DAT_00890968 != (fVar4 == _DAT_00890968)) {
      *(undefined4 *)(param_1 + 0x114) = 0x3c23d70a;
    }
    *(float *)(param_1 + 0x118) = fVar3 * fVar2;
    *(float *)(param_1 + 0x124) = fVar3 * fVar2;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined1 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 8);
    fVar2 = (float)*(int *)(iVar1 + 0x1c);
    if (*(int *)(iVar1 + 0x1c) < 0) {
      fVar2 = fVar2 + _DAT_00891214;
    }
    fVar3 = (float)*(int *)(iVar1 + 0x54) * _DAT_00890d60;
    *(float *)(param_1 + 0x130) = fVar3;
    if (fVar3 < _DAT_00890968 != (fVar3 == _DAT_00890968)) {
      *(undefined4 *)(param_1 + 0x130) = 0x3c23d70a;
    }
    *(float *)(param_1 + 0x134) = fVar2;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(float *)(param_1 + 0x140) = fVar2;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined1 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
  }
  return;
}

