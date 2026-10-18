/* speed.exe 007422d0 FUN_007422d0; analysis pseudocode, not buildable source.
 * calls 006bdd20 FUN_006bdd20
 * calls 006bd940 FUN_006bd940
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007422d0(float *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  char local_c9;
  float *local_c8;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_94;
  float local_90;
  float local_8c;
  float local_88;
  float *local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_18;
  
  local_70 = *param_2;
  local_6c = param_2[1];
  local_68 = param_2[2];
  local_74 = param_2;
  if ((short)param_3 != 0) {
    local_60 = 0x3f800000;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0x3f800000;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0x3f800000;
    FUN_006bdd20(&local_60,&local_60,-param_3);
    FUN_006bd940(&local_70,&local_60,param_2);
  }
  piVar9 = &DAT_0090504c;
  do {
    local_94 = piVar9[0xd];
    local_c8 = (float *)(piVar9 + 0xd);
    local_c9 = '\x01';
    if (DAT_00925e90 != 3) {
      if (((int)piVar9 < 0x90518c) || (pfVar7 = &local_70, 0x9051dc < (int)piVar9)) {
        pfVar7 = local_74;
      }
      if ((int)piVar9 < 0x90509d) {
        if (0x8000 < (ushort)param_3) {
          param_3 = -param_3;
        }
        *local_c8 = (float)(param_3 & 0xffff) / _DAT_009032f0 + *local_c8;
      }
      iVar5 = *piVar9;
      if (0 < iVar5) {
        fVar1 = *pfVar7;
        fVar2 = *param_1;
        fVar3 = pfVar7[1];
        fVar4 = param_1[1];
        fVar6 = pfVar7[2] - param_1[2];
        local_18 = fVar6;
        if (piVar9[-1] == 0) {
          iVar8 = 0;
          if (0 < iVar5) {
            pfVar7 = (float *)(piVar9 + 3);
            do {
              local_8c = pfVar7[-1];
              local_90 = pfVar7[-2];
              local_88 = *pfVar7;
              if (DAT_009b0910 != 0) {
                FUN_0045f490(&local_90,&local_90);
              }
              if (((fVar1 - fVar2) * local_90 + local_8c * (fVar3 - fVar4) + local_88 * fVar6) -
                  *local_c8 < _DAT_00890968) break;
              local_c8 = local_c8 + 1;
              iVar8 = iVar8 + 1;
              pfVar7 = pfVar7 + 4;
            } while (iVar8 < *piVar9);
          }
          if (iVar8 == *piVar9) {
LAB_00742519:
            local_c9 = '\0';
          }
        }
        else if ((piVar9[-1] == 1) && (iVar8 = 0, 0 < iVar5)) {
          pfVar7 = (float *)(piVar9 + 3);
          do {
            local_b0 = pfVar7[-2];
            local_ac = pfVar7[-1];
            local_a8 = *pfVar7;
            if (DAT_009b0910 != 0) {
              FUN_0045f490(&local_b0,&local_b0);
            }
            if (_DAT_00890968 <=
                (local_b0 * (fVar1 - fVar2) + local_ac * (fVar3 - fVar4) + local_a8 * fVar6) -
                *local_c8) goto LAB_00742519;
            local_c8 = local_c8 + 1;
            iVar8 = iVar8 + 1;
            pfVar7 = pfVar7 + 4;
          } while (iVar8 < *piVar9);
        }
      }
    }
    *(char *)(param_1 + 6) = local_c9;
    piVar9[0xd] = local_94;
    if (local_c9 == '\0') {
      param_1[4] = (float)((int)param_1[4] + 1);
    }
    else {
      param_1[5] = (float)((int)param_1[5] + 1);
    }
    piVar9 = piVar9 + 0x14;
    param_1 = param_1 + 8;
    if (0x9053bb < (int)piVar9) {
      return;
    }
  } while( true );
}

