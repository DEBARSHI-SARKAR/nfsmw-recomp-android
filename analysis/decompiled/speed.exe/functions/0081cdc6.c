/* speed.exe 0081cdc6 FUN_0081cdc6; analysis pseudocode, not buildable source.
 * calls 0081f207 FUN_0081f207
 * calls 0081c131 FUN_0081c131
 * calls 0081f7cb FUN_0081f7cb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081cdc6(undefined4 param_1,int param_2,float param_3)

{
  byte bVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short local_c;
  short *local_8;
  
  if (DAT_009c2188 != '\0') {
    iVar5 = FUN_0081c131(param_1);
    fVar4 = _DAT_008c5bec;
    if (iVar5 == 0) {
      uVar7 = 0xfffffff8;
    }
    else {
      fVar3 = param_3 * _DAT_00899dd4;
      *(undefined1 *)(iVar5 + 0x12) = 0;
      if (param_2 == -1) {
        if (param_3 != fVar4) {
          fVar4 = param_3;
        }
        pfVar6 = (float *)(iVar5 + 0x13c);
        iVar8 = 6;
        do {
          *pfVar6 = fVar4;
          *(undefined1 *)(pfVar6 + 1) = 0;
          pfVar6 = pfVar6 + 9;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      else {
        pfVar6 = (float *)(iVar5 + 0x13c + param_2 * 0x24);
        if (param_3 != fVar4) {
          *pfVar6 = param_3;
          *(undefined1 *)(pfVar6 + 1) = 1;
        }
        else {
          *pfVar6 = fVar4;
          *(undefined1 *)(pfVar6 + 1) = 0;
        }
      }
      iVar8 = FUN_0081f7cb(*(undefined4 *)(iVar5 + 4));
      if (-1 < iVar8) {
        iVar8 = iVar8 * 0x90 + DAT_009c21f4;
        local_c = (short)(int)ROUND(fVar3);
        if (param_2 == -1) {
          if (param_3 == _DAT_008c5bec) {
            bVar1 = *(byte *)(iVar8 + 0x23);
            iVar5 = DAT_009c1fdc * 6;
            iVar10 = 0;
            if (bVar1 != 0) {
              local_8 = (short *)(iVar8 + 4);
              do {
                sVar2 = *local_8;
                *(ushort *)(sVar2 * 0x90 + 0x1c + DAT_009c21f4) =
                     (ushort)(byte)(&DAT_008c5caa)[iVar10 + ((uint)bVar1 + iVar5) * 6] << 8;
                FUN_0081f207((int)sVar2);
                local_8 = local_8 + 1;
                iVar10 = iVar10 + 1;
              } while (iVar10 < (int)(uint)*(byte *)(iVar8 + 0x23));
            }
          }
          else {
            bVar1 = *(byte *)(iVar5 + 0x16);
            iVar5 = 0;
            if (*(char *)(iVar8 + 0x23) != '\0') {
              local_8 = (short *)(iVar8 + 4);
              do {
                sVar2 = *local_8;
                *(ushort *)(sVar2 * 0x90 + 0x1c + DAT_009c21f4) =
                     (ushort)(byte)(&DAT_008c5d3a)[iVar5 + (uint)bVar1 * 6] * 0x100 + local_c;
                FUN_0081f207((int)sVar2);
                local_8 = local_8 + 1;
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)(uint)*(byte *)(iVar8 + 0x23));
            }
          }
        }
        else {
          iVar10 = (int)(char)(&DAT_008c5bea)[(uint)*(byte *)(iVar8 + 0x23) * 6 + param_2];
          iVar9 = (int)*(short *)(iVar8 + 4 + iVar10 * 2);
          iVar5 = iVar9 * 0x90 + DAT_009c21f4;
          if (iVar10 != -0x80) {
            if (param_3 == _DAT_008c5bec) {
              *(ushort *)(iVar5 + 0x1c) =
                   (ushort)(byte)(&DAT_008c5caa)
                                 [((uint)*(byte *)(iVar8 + 0x23) + DAT_009c1fdc * 6) * 6 + iVar10]
                   << 8;
            }
            else {
              *(short *)(iVar5 + 0x1c) = local_c;
            }
            FUN_0081f207(iVar9);
          }
        }
      }
      uVar7 = 0;
    }
    return uVar7;
  }
  return 0xfffffff6;
}

