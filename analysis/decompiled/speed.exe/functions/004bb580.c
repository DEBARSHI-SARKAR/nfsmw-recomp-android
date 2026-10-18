/* speed.exe 004bb580 FUN_004bb580; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bb580(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  if (*(int *)(iVar3 + 0x228) != 3) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
    fVar5 = _DAT_008ee6a8 * *(float *)(iVar4 + 0x20);
    fVar6 = _DAT_008ee6a8 * *(float *)(iVar4 + 0x24);
    fVar7 = _DAT_008ee6a8 * *(float *)(iVar4 + 0x28);
    fVar8 = _DAT_008ee6ac * *(float *)(iVar3 + 0x10);
    fVar9 = _DAT_008ee6ac * *(float *)(iVar3 + 0x14);
    fVar10 = _DAT_008ee6ac * *(float *)(iVar3 + 0x18);
    fVar1 = *(float *)(iVar4 + 0x40);
    fVar2 = *(float *)(iVar4 + 0x44);
    *(float *)(param_1 + 0xe8) = *(float *)(iVar4 + 0x48) - fVar7;
    *(float *)(param_1 + 0xe0) = fVar1 - fVar5;
    *(float *)(param_1 + 0xe4) = fVar2 - fVar6;
    *(float *)(param_1 + 0xe0) = fVar8 + *(float *)(param_1 + 0xe0);
    *(float *)(param_1 + 0xe4) = fVar9 + *(float *)(param_1 + 0xe4);
    *(float *)(param_1 + 0xe8) = fVar10 + *(float *)(param_1 + 0xe8);
    fVar1 = *(float *)(iVar4 + 0x40);
    fVar2 = *(float *)(iVar4 + 0x44);
    *(float *)(param_1 + 0xd8) = fVar7 + *(float *)(iVar4 + 0x48);
    *(float *)(param_1 + 0xd0) = fVar5 + fVar1;
    *(float *)(param_1 + 0xd4) = fVar6 + fVar2;
    *(float *)(param_1 + 0xd0) = fVar8 + *(float *)(param_1 + 0xd0);
    *(float *)(param_1 + 0xd4) = fVar9 + *(float *)(param_1 + 0xd4);
    *(float *)(param_1 + 0xd8) = fVar10 + *(float *)(param_1 + 0xd8);
  }
  return;
}

