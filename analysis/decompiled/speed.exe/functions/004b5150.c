/* speed.exe 004b5150 FUN_004b5150; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b5150(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = ABS(*(float *)(param_1 + 400)) * _DAT_00896d68;
  fVar3 = _DAT_00890cd4;
  if ((_DAT_00890cd4 < fVar2) && (fVar3 = fVar2, _DAT_0089096c < fVar2)) {
    fVar3 = _DAT_0089096c;
  }
  *(float *)(param_1 + 0x26c) = fVar3;
  iVar1 = *(int *)(*(int *)(param_1 + 0xd0) + 0x38);
  if ((iVar1 != 3) && (iVar1 == 0)) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x1d4) != 0) {
      *(undefined1 *)(param_1 + 0x80) = 1;
      return;
    }
    *(bool *)(param_1 + 0x80) = *(int *)(param_1 + 600) == 3;
  }
  return;
}

