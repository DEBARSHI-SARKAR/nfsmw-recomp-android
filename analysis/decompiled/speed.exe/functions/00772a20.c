/* speed.exe 00772a20 FUN_00772a20; analysis pseudocode, not buildable source.
 * calls 00402690 FUN_00402690
 * calls 00763350 FUN_00763350
 * calls 00767fd0 FUN_00767fd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_00772a20(int param_1,undefined4 *param_2,float *param_3,float param_4,float param_5)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int local_78;
  float local_74;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  piVar4 = *(int **)(param_1 + 0x60);
  local_78 = 0;
  local_70 = param_1;
  if (piVar4 != *(int **)(param_1 + 100)) {
    do {
      iVar1 = *piVar4;
      iVar5 = *(int *)(iVar1 + 4);
      if (iVar5 != *(int *)(iVar1 + 8)) {
        do {
          cVar3 = FUN_00763350(param_2,&local_74);
          if (((cVar3 != '\0') && (FUN_00402690(&local_6c), _DAT_00890968 <= local_74)) &&
             (local_74 < param_5)) {
            fVar2 = param_5 - local_74;
            local_78 = local_78 + 1;
            *param_3 = (local_6c + *param_3) * fVar2;
            param_3[1] = (local_68 + param_3[1]) * fVar2;
            param_3[2] = (local_64 + param_3[2]) * fVar2;
          }
          iVar5 = iVar5 + 0x30;
          param_1 = local_70;
        } while (iVar5 != *(int *)(iVar1 + 8));
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)(param_1 + 100));
  }
  pfVar7 = *(float **)(param_1 + 0x50);
  if (pfVar7 != *(float **)(param_1 + 0x54)) {
    local_54 = 0x3f800000;
    local_68 = 0.0;
    pfVar6 = pfVar7 + 4;
    do {
      local_40 = *pfVar7;
      local_3c = pfVar7[1];
      local_38 = pfVar7[2];
      local_34 = pfVar7[3];
      local_30 = *pfVar7;
      local_28 = pfVar7[2];
      local_24 = pfVar7[3];
      local_20 = *pfVar6;
      local_2c = pfVar6[1];
      local_18 = pfVar6[2];
      local_14 = pfVar6[3];
      local_10 = *pfVar6;
      local_8 = pfVar6[2];
      local_4 = pfVar6[3];
      local_60 = *param_2;
      local_6c = (pfVar6[2] - pfVar6[-2]) * pfVar6[3];
      local_58 = param_2[2];
      local_5c = param_2[1];
      local_64 = -((*pfVar6 - *pfVar7) * pfVar6[3]);
      local_44 = 0x3f800000;
      local_50 = local_60;
      local_4c = local_5c;
      local_48 = local_58;
      local_1c = local_2c;
      local_c = local_3c;
      cVar3 = FUN_00767fd0(&local_40,&local_6c,&local_50,0,&local_74);
      if (((cVar3 != '\0') && (_DAT_00890968 <= local_74)) && (local_74 < param_4)) {
        fVar2 = param_4 - local_74;
        local_78 = local_78 + 1;
        *param_3 = (local_6c + *param_3) * fVar2;
        param_3[1] = param_3[1] * fVar2;
        param_3[2] = (local_64 + param_3[2]) * fVar2;
      }
      pfVar7 = pfVar7 + 10;
      pfVar6 = pfVar6 + 10;
    } while (pfVar7 != *(float **)(local_70 + 0x54));
  }
  return local_78;
}

