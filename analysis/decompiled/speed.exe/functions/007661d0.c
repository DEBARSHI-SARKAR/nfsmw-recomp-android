/* speed.exe 007661d0 FUN_007661d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Removing unreachable block (ram,0x007664f8) */
/* WARNING: Removing unreachable block (ram,0x00766380) */
/* WARNING: Removing unreachable block (ram,0x007662c4) */
/* WARNING: Removing unreachable block (ram,0x0076643c) */
/* WARNING: Removing unreachable block (ram,0x007665f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_007661d0(int param_1)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float local_14;
  int local_10;
  
  fVar10 = (float10)_DAT_00890968;
  if ((*(int *)(param_1 + 0x78) == 3) && (iVar7 = *(int *)(param_1 + 0x2e4), iVar7 != 0)) {
    iVar4 = *(int *)(param_1 + 0x2e0);
    bVar5 = false;
    local_10 = 0;
    if (3 < iVar4) {
      uVar2 = *(ushort *)(param_1 + 0x2da);
      puVar8 = (ushort *)(iVar7 + 4);
      bVar5 = false;
      do {
        uVar3 = puVar8[-2];
        local_14 = 0.0;
        if ((uint)uVar3 == (int)*(short *)(param_1 + 0x8e)) {
          local_14 = *(float *)(param_1 + 0x90);
          bVar5 = true;
        }
        fVar1 = _DAT_0089096c;
        if (uVar3 == uVar2) {
          fVar1 = *(float *)(param_1 + 0x2dc);
        }
        if (bVar5) {
          fVar11 = (float10)fVar1 - (float10)local_14;
          if (fVar11 < (float10)_DAT_00890968) {
            fVar11 = (float10)_DAT_00890968;
          }
          iVar6 = (uint)uVar3 * 0x16 + DAT_009b38c0;
          fVar11 = (float10)*(ushort *)(iVar6 + 4) * (float10)_DAT_009b3a14 * fVar11;
          if (*(char *)(iVar6 + 10) < '\0') {
            fVar11 = (float10)((uint)*(ushort *)(DAT_009b38c8 + *(short *)(iVar6 + 6) * 8) << 8) *
                     (float10)_DAT_00890980 * fVar11;
          }
          fVar10 = fVar11 + fVar10;
        }
        if (uVar3 == uVar2) {
          return fVar10;
        }
        uVar3 = puVar8[-1];
        local_14 = 0.0;
        if ((uint)uVar3 == (int)*(short *)(param_1 + 0x8e)) {
          local_14 = *(float *)(param_1 + 0x90);
          bVar5 = true;
        }
        fVar1 = _DAT_0089096c;
        if (uVar3 == uVar2) {
          fVar1 = *(float *)(param_1 + 0x2dc);
        }
        if (bVar5) {
          fVar11 = (float10)fVar1 - (float10)local_14;
          if (fVar11 < (float10)_DAT_00890968) {
            fVar11 = (float10)_DAT_00890968;
          }
          iVar6 = (uint)uVar3 * 0x16 + DAT_009b38c0;
          fVar11 = (float10)*(ushort *)(iVar6 + 4) * (float10)_DAT_009b3a14 * fVar11;
          if (*(char *)(iVar6 + 10) < '\0') {
            fVar11 = (float10)((uint)*(ushort *)(DAT_009b38c8 + *(short *)(iVar6 + 6) * 8) << 8) *
                     (float10)_DAT_00890980 * fVar11;
          }
          fVar10 = fVar11 + fVar10;
        }
        if (uVar3 == uVar2) {
          return fVar10;
        }
        uVar3 = *puVar8;
        local_14 = 0.0;
        if ((uint)uVar3 == (int)*(short *)(param_1 + 0x8e)) {
          local_14 = *(float *)(param_1 + 0x90);
          bVar5 = true;
        }
        fVar1 = _DAT_0089096c;
        if (uVar3 == uVar2) {
          fVar1 = *(float *)(param_1 + 0x2dc);
        }
        if (bVar5) {
          fVar11 = (float10)fVar1 - (float10)local_14;
          if (fVar11 < (float10)_DAT_00890968) {
            fVar11 = (float10)_DAT_00890968;
          }
          iVar6 = (uint)uVar3 * 0x16 + DAT_009b38c0;
          fVar11 = (float10)*(ushort *)(iVar6 + 4) * (float10)_DAT_009b3a14 * fVar11;
          if (*(char *)(iVar6 + 10) < '\0') {
            fVar11 = (float10)((uint)*(ushort *)(DAT_009b38c8 + *(short *)(iVar6 + 6) * 8) << 8) *
                     (float10)_DAT_00890980 * fVar11;
          }
          fVar10 = fVar11 + fVar10;
        }
        if (uVar3 == uVar2) {
          return fVar10;
        }
        uVar3 = puVar8[1];
        local_14 = 0.0;
        if ((uint)uVar3 == (int)*(short *)(param_1 + 0x8e)) {
          local_14 = *(float *)(param_1 + 0x90);
          bVar5 = true;
        }
        fVar1 = _DAT_0089096c;
        if (uVar3 == uVar2) {
          fVar1 = *(float *)(param_1 + 0x2dc);
        }
        if (bVar5) {
          fVar11 = (float10)fVar1 - (float10)local_14;
          if (fVar11 < (float10)_DAT_00890968) {
            fVar11 = (float10)_DAT_00890968;
          }
          iVar6 = (uint)uVar3 * 0x16 + DAT_009b38c0;
          fVar11 = (float10)*(ushort *)(iVar6 + 4) * (float10)_DAT_009b3a14 * fVar11;
          if (*(char *)(iVar6 + 10) < '\0') {
            fVar11 = (float10)((uint)*(ushort *)(DAT_009b38c8 + *(short *)(iVar6 + 6) * 8) << 8) *
                     (float10)_DAT_00890980 * fVar11;
          }
          fVar10 = fVar11 + fVar10;
        }
        if (uVar3 == uVar2) {
          return fVar10;
        }
        local_10 = local_10 + 4;
        puVar8 = puVar8 + 4;
      } while (local_10 < iVar4 + -3);
    }
    if (local_10 < iVar4) {
      puVar8 = (ushort *)(iVar7 + local_10 * 2);
      while( true ) {
        uVar2 = *puVar8;
        local_14 = 0.0;
        if ((uint)uVar2 == (int)*(short *)(param_1 + 0x8e)) {
          local_14 = *(float *)(param_1 + 0x90);
          bVar5 = true;
        }
        bVar9 = uVar2 == *(ushort *)(param_1 + 0x2da);
        fVar1 = _DAT_0089096c;
        if (bVar9) {
          fVar1 = *(float *)(param_1 + 0x2dc);
        }
        if (bVar5) {
          fVar11 = (float10)fVar1 - (float10)local_14;
          if (fVar11 < (float10)_DAT_00890968) {
            fVar11 = (float10)_DAT_00890968;
          }
          iVar7 = (uint)uVar2 * 0x16 + DAT_009b38c0;
          fVar11 = (float10)*(ushort *)(iVar7 + 4) * (float10)_DAT_009b3a14 * fVar11;
          if (*(char *)(iVar7 + 10) < '\0') {
            fVar11 = (float10)((uint)*(ushort *)(DAT_009b38c8 + *(short *)(iVar7 + 6) * 8) << 8) *
                     (float10)_DAT_00890980 * fVar11;
          }
          fVar10 = fVar11 + fVar10;
        }
        if (bVar9) break;
        local_10 = local_10 + 1;
        puVar8 = puVar8 + 1;
        if (iVar4 <= local_10) {
          return fVar10;
        }
      }
    }
  }
  return fVar10;
}

