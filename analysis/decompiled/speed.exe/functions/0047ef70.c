/* speed.exe 0047ef70 FUN_0047ef70; analysis pseudocode, not buildable source.
 * calls 0045d380 FUN_0045d380
 * calls 0047eed0 FUN_0047eed0
 * calls 006bd940 FUN_006bd940
 * calls 0045f490 FUN_0045f490
 * calls 0047b300 FUN_0047b300
 */

int __thiscall FUN_0047ef70(int *param_1,int param_2,float *param_3)

{
  char cVar1;
  short sVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  int local_84;
  int local_80;
  float local_7c;
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  int *local_5c;
  int local_58;
  int *local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  local_50 = 0.0;
  local_4c = 0.0;
  local_48 = 0.0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  local_14 = 0;
  local_54 = param_1;
  FUN_0047eed0();
  iVar7 = 0;
  local_78 = 0;
  local_80 = 0;
  if (0 < param_1[5]) {
    local_74 = 0;
    do {
      local_5c = (int *)(local_74 + *param_1);
      if (param_2 == *local_5c) {
        local_58 = local_5c[2];
        if (local_58 < 2) {
          return iVar7;
        }
        local_7c = -1.0;
        local_84 = 0;
        if (0 < local_58) {
          local_5c = local_5c + 3;
          do {
            piVar4 = local_5c;
            piVar5 = (int *)FUN_0045d380(local_84);
            if (piVar5 == piVar4) {
              piVar5 = (int *)0x0;
            }
            sVar2 = (short)piVar5[5];
            if (0 < sVar2) {
              if ((sVar2 + -1 < 0) && (sVar2 != 1)) {
                piVar5 = (int *)0x0;
              }
              else {
                piVar5 = piVar5 + 10;
              }
              uVar8 = (uint)(*(char *)((int)piVar5 + 1) != '\0');
              local_a4 = 0;
              local_b0 = (float)piVar5[uVar8 * 0x24 + 7];
              local_ac = (float)piVar5[uVar8 * 0x24 + 8];
              local_a8 = (float)piVar5[uVar8 * 0x24 + 9];
              if (DAT_009110a0 != '\0') {
                local_ac = -local_ac;
              }
              if ((char)piVar5[uVar8 * 0x21 + 1] == '\x03') {
                FUN_0047b300(&local_b0);
              }
              cVar1 = (char)piVar5[uVar8 * 0x21 + 1];
              if (cVar1 == '\0') {
                pfVar6 = &local_50;
LAB_0047f189:
                FUN_006bd940(&local_b0,pfVar6,&local_b0);
              }
              else if (cVar1 == '\x02') {
                local_b0 = local_20 + local_b0;
                local_ac = local_1c + local_ac;
                local_a8 = local_18 + local_a8;
              }
              else {
                pfVar6 = param_3;
                if (cVar1 == '\x03') goto LAB_0047f189;
              }
              local_94 = 0;
              local_a0 = (float)piVar5[uVar8 * 0x24 + 0xd];
              local_9c = (float)piVar5[uVar8 * 0x24 + 0xe];
              local_98 = (float)piVar5[uVar8 * 0x24 + 0xf];
              if (DAT_009110a0 != '\0') {
                local_9c = -local_9c;
              }
              if (*(char *)((int)piVar5 + uVar8 * 0x84 + 5) == '\x03') {
                FUN_0047b300(&local_a0);
              }
              cVar1 = *(char *)((int)piVar5 + uVar8 * 0x84 + 5);
              if (cVar1 == '\0') {
                pfVar6 = &local_50;
LAB_0047f246:
                FUN_006bd940(&local_a0,pfVar6,&local_a0);
              }
              else if (cVar1 == '\x02') {
                local_a0 = local_20 + local_a0;
                local_9c = local_9c + local_1c;
                local_98 = local_98 + local_18;
              }
              else {
                pfVar6 = param_3;
                if (cVar1 == '\x03') goto LAB_0047f246;
              }
              local_70 = local_b0 - local_a0;
              local_64 = 0;
              local_68 = 0.0;
              local_6c = local_ac - local_9c;
              FUN_0045f490(&local_70,&local_70);
              fVar3 = local_48 * local_68 + local_70 * local_50 + local_6c * local_4c;
              if (local_7c < fVar3) {
                local_78 = local_84;
                local_7c = fVar3;
              }
            }
            local_84 = local_84 + 1;
            iVar7 = local_78;
            param_1 = local_54;
          } while (local_84 < local_58);
        }
      }
      local_80 = local_80 + 1;
      local_74 = local_74 + 0x14;
    } while (local_80 < param_1[5]);
  }
  return iVar7;
}

