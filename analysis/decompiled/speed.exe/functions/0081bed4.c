/* speed.exe 0081bed4 FUN_0081bed4; analysis pseudocode, not buildable source.
 * calls 0081f207 FUN_0081f207
 * calls 0081dbad FUN_0081dbad
 * calls 00821a97 FUN_00821a97
 * calls 0081d7a4 FUN_0081d7a4
 * calls 0081f7cb FUN_0081f7cb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081bed4(uint param_1)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short local_c;
  int local_8;
  
  iVar5 = param_1;
  uVar6 = FUN_0081dbad(*(undefined4 *)(param_1 + 8),param_1 + 0x14,param_1 + 0x1c,param_1 + 0xec);
  *(undefined4 *)(param_1 + 4) = uVar6;
  iVar7 = FUN_0081f7cb(*(undefined4 *)(param_1 + 4));
  param_1 = 0;
  if (*(char *)(iVar5 + 0x16) != '\0') {
    iVar11 = iVar7 * 0x90 + 4;
    do {
      sVar4 = *(short *)(iVar11 + DAT_009c21f4);
      local_8 = 0;
      iVar8 = sVar4 * 0x90 + DAT_009c21f4;
      cVar3 = *(char *)(param_1 + 0x90bcea + (uint)*(byte *)(iVar5 + 0x16) * 6);
      if (0 < DAT_0090bd18) {
        do {
          iVar10 = local_8 * 4;
          local_8 = local_8 + 1;
          *(undefined4 *)(iVar10 + *(int *)(iVar8 + 100)) =
               *(undefined4 *)(iVar10 + *(int *)(iVar5 + 0x104));
        } while (local_8 < DAT_0090bd18);
      }
      fVar2 = *(float *)(iVar5 + cVar3 * 0x24 + 0x144);
      *(float *)(iVar8 + 0x38) = fVar2;
      *(float *)(iVar8 + 0x48) = fVar2 * _DAT_0090bd14;
      FUN_0081d7a4((int)sVar4);
      param_1 = param_1 + 1;
      iVar11 = iVar11 + 2;
    } while (param_1 < *(byte *)(iVar5 + 0x16));
  }
  if (*(char *)(iVar5 + 0x12) == '\0') {
    uVar9 = (uint)*(byte *)(iVar5 + 0x16);
    param_1 = 0;
    iVar11 = DAT_009c1fdc * 6;
    if (uVar9 != 0) {
      iVar7 = iVar7 * 0x90 + 4;
      do {
        sVar4 = *(short *)(iVar7 + DAT_009c21f4);
        iVar8 = sVar4 * 0x90 + DAT_009c21f4;
        pfVar1 = (float *)(iVar5 + 0x13c +
                          *(char *)(param_1 + 0x90bcea + (uint)*(byte *)(iVar5 + 0x16) * 6) * 0x24);
        if (*pfVar1 == _DAT_008c5be8) {
          *(ushort *)(iVar8 + 0x1c) =
               (ushort)(byte)(&DAT_008c5caa)[param_1 + (uVar9 + iVar11) * 6] << 8;
        }
        else {
          local_c = (short)(int)ROUND(*pfVar1 * _DAT_00899dd4);
          *(short *)(iVar8 + 0x1c) = local_c;
          if (*(char *)(pfVar1 + 1) == '\0') {
            *(ushort *)(iVar8 + 0x1c) =
                 (ushort)(byte)(&DAT_008c5d3a)[param_1 + uVar9 * 6] * 0x100 + local_c;
          }
        }
        FUN_0081f207((int)sVar4);
        param_1 = param_1 + 1;
        iVar7 = iVar7 + 2;
      } while (param_1 < *(byte *)(iVar5 + 0x16));
    }
  }
  if (*(int *)(iVar5 + 0x118) != 0) {
    FUN_00821a97(*(undefined4 *)(iVar5 + 4),iVar5 + 0x108);
  }
  *(undefined1 *)(iVar5 + 0x10) = 1;
  return;
}

