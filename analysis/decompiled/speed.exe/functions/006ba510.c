/* speed.exe 006ba510 FUN_006ba510; analysis pseudocode, not buildable source.
 * calls 00689d10 FUN_00689d10
 * calls 005c5e80 FUN_005c5e80
 * calls 00697ce0 FUN_00697ce0
 * calls 00486610 FUN_00486610
 * calls 006b9260 FUN_006b9260
 * calls 00401670 FUN_00401670
 * calls 005ca910 FUN_005ca910
 * calls 005cab00 FUN_005cab00
 * calls 00789cc0 FUN_00789cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ba510(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float10 fVar11;
  uint uStack_530;
  uint uStack_52c;
  int local_524;
  float fStack_51c;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float local_50c;
  float local_508;
  float local_504;
  float local_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float local_4ec;
  float fStack_4e8;
  float fStack_4e4;
  uint uStack_4e0;
  int iStack_4dc;
  int iStack_4d8;
  int iStack_4d4;
  int iStack_4d0;
  undefined4 uStack_4cc;
  float local_4c8 [2];
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  int iStack_48c;
  int iStack_488;
  int iStack_484;
  undefined4 uStack_480;
  undefined4 auStack_47c [12];
  byte bStack_44c;
  float fStack_448;
  float fStack_444;
  float afStack_440 [64];
  undefined1 auStack_340 [64];
  undefined4 auStack_300 [192];
  
  iVar2 = **(int **)(param_1 + 0x78);
  *(undefined1 *)(iVar2 + 0x5c) = 0;
  local_508 = DAT_008a2fc4;
  local_50c = DAT_008a2fc0;
  local_504 = DAT_008a2fc8;
  local_500 = DAT_008a2fcc;
  fVar11 = (float10)FUN_005c5e80(*(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28) +
                                 *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20));
  local_4ec = (float)fVar11;
  FUN_00401670(param_1 + 0xf0,iVar2 + 0x70,local_4c8);
  puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x34) + 0x4c))();
  fVar1 = *(float *)(param_1 + 0xe0);
  puVar10 = auStack_47c;
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar10 = puVar10 + 1;
  }
  fStack_51c = *(float *)(param_1 + 0xd0);
  fStack_518 = *(float *)(param_1 + 0xd4);
  fStack_514 = *(float *)(param_1 + 0xd8);
  fStack_510 = *(float *)(param_1 + 0xdc);
  fVar1 = fVar1 * *(float *)(iVar2 + 0x74);
  uStack_52c = 0;
  fVar4 = *(float *)(param_1 + 0xe4) * *(float *)(iVar2 + 0x84);
  fVar3 = *(float *)(param_1 + 0xe8) * *(float *)(iVar2 + 0x94);
  fVar11 = (float10)FUN_005c5e80(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
  fStack_4fc = (float)fVar11;
  piVar7 = *(int **)(param_1 + 0x110);
  fStack_4e8 = fStack_4fc + *(float *)(iVar2 + 0x14);
  puVar5 = auStack_300;
  if (piVar7 != (int *)(param_1 + 0x110)) {
    do {
      if ((((~(byte)((uint)piVar7[0x11] >> 3) & 1) != 0) && ((piVar7[0x11] & 4U) != 0)) &&
         (piVar7[9] == 1)) {
        fVar3 = (float)piVar7[0x12];
        FUN_005ca910(piVar7 + 2,&fStack_4bc);
        fVar1 = (float)piVar7[6];
        iStack_4d4 = piVar7[0xb];
        fStack_4bc = fStack_4bc * fVar1;
        iStack_4d0 = piVar7[0xc];
        iStack_4d8 = piVar7[10];
        fStack_4b8 = fStack_4b8 * fVar1;
        fStack_4b4 = fStack_4b4 * fVar1;
        uStack_4cc = 0x3f800000;
        fVar1 = (float)piVar7[7];
        uStack_480 = 0x3f800000;
        fStack_4ac = fStack_4ac * fVar1;
        fStack_4a8 = fStack_4a8 * fVar1;
        fStack_4a4 = fStack_4a4 * fVar1;
        fVar1 = (float)piVar7[8];
        fStack_49c = fStack_49c * fVar1;
        fStack_498 = fStack_498 * fVar1;
        fStack_494 = fStack_494 * fVar1;
        iStack_48c = iStack_4d8;
        iStack_488 = iStack_4d4;
        iStack_484 = iStack_4d0;
        FUN_005cab00(&fStack_4bc,iVar2 + 0x70,auStack_340);
        FUN_00689d10(&DAT_008ad6f8,auStack_340,afStack_440,8);
        pfVar9 = (float *)(puVar5 + 4);
        uStack_530 = 0;
        do {
          if (0xf < uStack_52c) break;
          fStack_4f8 = *(float *)(iVar2 + 0x10) + *(float *)((int)afStack_440 + uStack_530);
          fStack_4f4 = *(float *)((int)afStack_440 + uStack_530 + 4) + *(float *)(iVar2 + 0x14);
          fStack_4f0 = *(float *)(iVar2 + 0x18) + *(float *)((int)afStack_440 + uStack_530 + 8);
          fVar1 = -((((*(float *)((int)afStack_440 + uStack_530) - local_4c8[0]) *
                      *(float *)(iVar2 + 0x38) + *(float *)(iVar2 + 0x24)) -
                    (*(float *)((int)afStack_440 + uStack_530 + 8) - fStack_4c0) *
                    *(float *)(iVar2 + 0x30)) * param_2);
          if (fVar1 <= _DAT_00890968) {
            fVar1 = _DAT_00890968;
          }
          fStack_448 = local_4ec * param_2 + fVar1 + fStack_4fc;
          if (fStack_4e8 - fStack_4f4 <= fStack_448) {
            fStack_448 = fStack_4e8 - fStack_4f4;
          }
          if (fStack_448 < _DAT_008910f0) {
            fStack_448 = _DAT_008910f0;
          }
          FUN_00789cc0(&fStack_4f8,&fStack_51c,1,*(undefined4 *)(param_1 + 0xec),1);
          if (((bStack_44c & 1) != 0) &&
             (fStack_510 < _DAT_008aabe0 == (fStack_510 == _DAT_008aabe0))) {
            if (local_500 < fStack_510) {
              local_50c = fStack_51c;
              local_508 = fStack_518;
              local_504 = fStack_514;
              local_500 = fStack_510;
            }
            FUN_00486610(&DAT_008ad6f8 + uStack_530,&fStack_4bc,pfVar9 + 4);
            *puVar5 = *(undefined4 *)((int)afStack_440 + uStack_530);
            puVar5[1] = *(undefined4 *)((int)afStack_440 + uStack_530 + 4);
            puVar5[2] = *(undefined4 *)((int)afStack_440 + uStack_530 + 8);
            *pfVar9 = fStack_51c;
            pfVar9[1] = fStack_518;
            pfVar9[2] = fStack_514;
            pfVar9[3] = fStack_510;
            pfVar9[-1] = fVar3;
            pfVar9[7] = fStack_444;
            puVar5 = puVar5 + 0xc;
            pfVar9 = pfVar9 + 0xc;
            uStack_52c = uStack_52c + 1;
          }
          uStack_530 = uStack_530 + 0x10;
        } while (uStack_530 < 0x80);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)(param_1 + 0x110));
  }
  piVar7 = *(int **)(param_1 + 0x120);
  if (piVar7 != (int *)(param_1 + 0x120)) {
    do {
      if (0xf < uStack_52c) break;
      if ((~*(byte *)((int)piVar7 + 0xe) & 1) != 0) {
        uVar8 = (uint)*(ushort *)(piVar7 + 3);
        iStack_4dc = piVar7[4];
        uStack_4e0 = uVar8;
        FUN_00689d10(piVar7[2],iVar2 + 0x70,afStack_440,uVar8);
        local_524 = 0;
        if (uVar8 != 0) {
          uStack_530 = 0;
          do {
            if (0xf < uStack_52c) break;
            fStack_4f8 = *(float *)(iVar2 + 0x10) + *(float *)((int)afStack_440 + uStack_530);
            puVar10 = (undefined4 *)(piVar7[2] + uStack_530);
            fStack_4f4 = *(float *)((int)afStack_440 + uStack_530 + 4) + *(float *)(iVar2 + 0x14);
            fStack_4f0 = *(float *)(iVar2 + 0x18) + *(float *)((int)afStack_440 + uStack_530 + 8);
            fVar1 = -((((*(float *)((int)afStack_440 + uStack_530) - local_4c8[0]) *
                        *(float *)(iVar2 + 0x38) + *(float *)(iVar2 + 0x24)) -
                      (*(float *)((int)afStack_440 + uStack_530 + 8) - fStack_4c0) *
                      *(float *)(iVar2 + 0x30)) * param_2);
            if (fVar1 <= _DAT_00890968) {
              fVar1 = _DAT_00890968;
            }
            fStack_448 = local_4ec * param_2 + fVar1 + fStack_4fc;
            fStack_4e4 = fStack_4e8 - fStack_4f4;
            if (fStack_4e4 <= fStack_448) {
              fStack_448 = fStack_4e4;
            }
            if (fStack_448 < _DAT_008910f0) {
              fStack_448 = _DAT_008910f0;
            }
            FUN_00789cc0(&fStack_4f8,&fStack_51c,1,*(undefined4 *)(param_1 + 0xec),1);
            if (((bStack_44c & 1) != 0) &&
               (fStack_510 < _DAT_008aabe0 == (fStack_510 == _DAT_008aabe0))) {
              if (local_500 < fStack_510) {
                local_50c = fStack_51c;
                local_508 = fStack_518;
                local_504 = fStack_514;
                local_500 = fStack_510;
              }
              *puVar5 = *(undefined4 *)((int)afStack_440 + uStack_530);
              puVar5[1] = *(undefined4 *)((int)afStack_440 + uStack_530 + 4);
              puVar5[2] = *(undefined4 *)((int)afStack_440 + uStack_530 + 8);
              puVar5[4] = fStack_51c;
              puVar5[5] = fStack_518;
              puVar5[6] = fStack_514;
              puVar5[7] = fStack_510;
              puVar5[8] = *puVar10;
              puVar5[9] = puVar10[1];
              puVar5[10] = puVar10[2];
              puVar5[0xb] = fStack_444;
              puVar5[3] = iStack_4dc;
              puVar5 = puVar5 + 0xc;
              uStack_52c = uStack_52c + 1;
            }
            local_524 = local_524 + 1;
            uStack_530 = uStack_530 + 0x10;
          } while (local_524 < (int)uStack_4e0);
        }
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)(param_1 + 0x120));
  }
  if (uStack_52c != 0) {
    *(char *)(iVar2 + 0x5c) = (char)uStack_52c;
    if (1 < uStack_52c) {
      FUN_006b9260(auStack_300,auStack_300 + uStack_52c * 0xc,
                   ((int)(auStack_300 + uStack_52c * 0xc) - (int)auStack_300) / 0x30);
    }
    if (0xf < uStack_52c) {
      uStack_52c = 0x10;
    }
    FUN_00697ce0(auStack_300,uStack_52c);
    if (_DAT_00890968 < local_500) {
      *(float *)(iVar2 + 0x10) = local_50c * local_500 + *(float *)(iVar2 + 0x10);
      *(float *)(iVar2 + 0x14) = local_508 * local_500 + *(float *)(iVar2 + 0x14);
      *(float *)(iVar2 + 0x18) = local_504 * local_500 + *(float *)(iVar2 + 0x18);
    }
  }
  return;
}

