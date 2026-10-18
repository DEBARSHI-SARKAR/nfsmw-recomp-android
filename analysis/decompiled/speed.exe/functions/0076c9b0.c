/* speed.exe 0076c9b0 FUN_0076c9b0; analysis pseudocode, not buildable source.
 * calls 007624f0 FUN_007624f0
 * calls 00763bb0 FUN_00763bb0
 * calls 00402690 FUN_00402690
 * calls 007632b0 FUN_007632b0
 * calls 00486610 FUN_00486610
 * calls 00763b40 FUN_00763b40
 * calls 00767790 FUN_00767790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0076c9b0(undefined4 param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  int local_b4;
  undefined4 local_ac [11];
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7c [12];
  undefined4 local_70 [11];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_40 [64];
  
  FUN_007632b0(local_40,1);
  FUN_00486610(param_1,local_40,&local_c4);
  pfVar2 = *(float **)(param_2 + 0x1c);
  if (((((pfVar2 == (float *)0x0) || (*(short *)pfVar2 == 0)) ||
       (*(float *)(param_2 + 0xc) < local_c4)) ||
      ((local_c4 < -*(float *)(param_2 + 0xc) || (*(float *)(param_2 + 0x2c) < local_bc)))) ||
     (local_bc < -*(float *)(param_2 + 0x2c))) {
    return 0;
  }
  local_44 = 0;
  local_43 = 0;
  local_b8 = 1e+38;
  bVar4 = false;
  local_b4 = 0;
  pfVar3 = pfVar2;
  if (*(short *)pfVar2 != 0) {
    do {
      pfVar7 = pfVar3 + 4;
      if ((*pfVar7 - local_c4) * (*pfVar7 - local_c4) +
          (pfVar3[6] - local_bc) * (pfVar3[6] - local_bc) <
          (float)*(ushort *)(pfVar3 + 7) * _DAT_008b493c *
          (float)*(ushort *)(pfVar3 + 7) * _DAT_008b493c) {
        local_80 = 0;
        local_7f = 0;
        cVar5 = FUN_00763bb0(&local_c4,pfVar7,*(ushort *)((int)pfVar3 + 0x1e) + 0x10 + (int)pfVar2,
                             local_ac);
        if (cVar5 != '\0') {
          FUN_00402690(local_7c);
          fVar10 = (float10)FUN_00767790(local_7c,local_ac,&local_c4);
          fVar1 = (float)((float10)local_c0 - fVar10);
          fVar10 = (float10)FUN_007624f0();
          if ((*(byte *)(param_2 + 0x12) & 1) == 0) {
            if (fVar10 - (float10)_DAT_008933d4 < (float10)local_c0) goto LAB_0076cb63;
          }
          else {
            fVar10 = (float10)FUN_007624f0();
            if ((float10)local_c0 < fVar10 - (float10)_DAT_008933d4) {
LAB_0076cb63:
              if ((_DAT_00890968 < fVar1) && (fVar1 < local_b8)) {
                puVar8 = local_ac;
                puVar9 = local_70;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar9 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar9 = puVar9 + 1;
                }
                bVar4 = true;
                *param_4 = fVar1;
                local_b8 = fVar1;
              }
            }
          }
        }
      }
      local_b4 = local_b4 + 1;
      pfVar3 = pfVar7;
    } while (local_b4 < (int)(uint)*(ushort *)pfVar2);
    if (bVar4) {
      FUN_00763b40(param_3,local_70,local_40);
      return 1;
    }
  }
  return 0;
}

