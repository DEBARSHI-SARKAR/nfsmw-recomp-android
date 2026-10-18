/* speed.exe 00728d40 FUN_00728d40; analysis pseudocode, not buildable source.
 * calls 006da9b0 FUN_006da9b0
 * calls 007c4b80 FUN_007c4b80
 * calls 004fcac0 FUN_004fcac0
 * calls 00726f60 FUN_00726f60
 * calls 0045f3c0 FUN_0045f3c0
 * calls 0045f610 FUN_0045f610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00728d40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  char local_45;
  float local_44;
  float local_40;
  int local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar4 = (int)*(char *)(param_1 + 10);
  local_28 = 0.0;
  uVar3 = FUN_007c4b80();
  local_3c = 0;
  local_44 = (float)uVar3 * _DAT_00890980 * _DAT_008b277c;
  if (0 < iVar4) {
    pfVar5 = (float *)(param_1 + 0x24);
    do {
      local_3c = local_3c + 1;
      local_34 = *(float *)(param_1 + 0x28 + (local_3c % iVar4) * 8) - pfVar5[1];
      local_38 = *(float *)(param_1 + 0x24 + (local_3c % iVar4) * 8) - *pfVar5;
      local_40 = SQRT(local_34 * local_34 + local_38 * local_38);
      FUN_0045f3c0(&local_38,&local_38);
      if (local_44 < local_40) {
        local_18 = 0x47c34f8d;
        do {
          FUN_0045f610(&local_30,pfVar5,&local_38,local_44);
          local_20 = local_30;
          local_1c = local_2c;
          FUN_00726f60(&local_20,0,0,&local_45);
          puVar2 = DAT_00915f84;
          if (local_45 != '\0') {
            local_28 = 9999.0;
            fVar6 = (float10)FUN_00726f60(&local_30,0,0,0);
            local_28 = (float)fVar6;
            iVar4 = FUN_004fcac0(&local_30,0x3f800000);
            puVar1 = DAT_00915f84;
            puVar2 = DAT_00915f84;
            if (0 < iVar4) {
              puVar2 = DAT_00915f84 + 0x10;
              if (puVar2 < DAT_00915f88) {
                if (DAT_00915f84 != (undefined4 *)0x0) {
                  *DAT_00915f84 = 0x3f800000;
                  DAT_00915f84 = puVar2;
                  puVar1[1] = 0;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                  puVar1[4] = 0;
                  puVar1[5] = 0x3f800000;
                  puVar1[6] = 0;
                  puVar1[7] = 0;
                  puVar1[8] = 0;
                  puVar1[9] = 0;
                  puVar1[10] = 0x3f800000;
                  puVar1[0xb] = 0;
                  puVar1[0xc] = 0;
                  puVar1[0xd] = 0;
                  puVar1[0xe] = 0;
                  puVar1[0xf] = 0x3f800000;
                  puVar1[0xd] = local_2c;
                  puVar1[0xc] = local_30;
                  puVar1[0xe] = local_28;
                  puVar1[0xf] = 0x3f800000;
                  FUN_006da9b0(DAT_009a3a6c,puVar1,0,0,0);
                  puVar2 = DAT_00915f84;
                }
              }
              else {
                DAT_00915f98 = DAT_00915f98 + 0x40;
                DAT_00915f94 = 1;
                puVar2 = DAT_00915f84;
              }
            }
          }
          DAT_00915f84 = puVar2;
          local_44 = local_44 + _DAT_008b277c;
        } while (local_44 < local_40);
      }
      iVar4 = (int)*(char *)(param_1 + 10);
      local_44 = local_44 - local_40;
      pfVar5 = pfVar5 + 2;
    } while (local_3c < iVar4);
  }
  return;
}

