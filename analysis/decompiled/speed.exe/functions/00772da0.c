/* speed.exe 00772da0 FUN_00772da0; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 * calls 0048b5a0 FUN_0048b5a0
 * calls 0048c100 FUN_0048c100
 * calls 004011c0 FUN_004011c0
 * calls 004876a0 FUN_004876a0
 * calls 004048c0 FUN_004048c0
 * calls 00401870 FUN_00401870
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall
FUN_00772da0(byte *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5,
            char param_6)

{
  float fVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float10 fVar9;
  undefined1 local_1c1;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  byte *local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_180;
  float local_17c;
  undefined4 local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined4 local_168 [4];
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108 [12];
  undefined1 local_d7;
  undefined4 local_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [176];
  
  local_1c1 = 0;
  if (((param_3 != 0) && (pfVar5 = *(float **)(param_3 + 4), pfVar5 != (float *)0x0)) &&
     (pfVar6 = *(float **)(param_3 + 8), ((int)pfVar6 - (int)pfVar5) / 0x28 != 0)) {
    puVar3 = &DAT_008a3028;
    puVar7 = local_168;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    local_1a0 = param_1;
    if (pfVar5 != pfVar6) {
      do {
        if ((*local_1a0 & *(byte *)((int)pfVar5 + 0xd)) == 0) {
          local_190 = (*pfVar5 + pfVar5[4]) * _DAT_008933d4;
          local_18c = (pfVar5[5] + pfVar5[1]) * _DAT_008933d4;
          local_188 = (pfVar5[2] + pfVar5[6]) * _DAT_008933d4;
          local_144 = 0.0;
          local_148 = (pfVar5[6] - pfVar5[2]) * pfVar5[7];
          local_140 = -((pfVar5[4] - *pfVar5) * pfVar5[7]);
          fVar9 = (float10)FUN_005c5e80((*pfVar5 - pfVar5[4]) * (*pfVar5 - pfVar5[4]) +
                                        (pfVar5[2] - pfVar5[6]) * (pfVar5[2] - pfVar5[6]));
          local_17c = pfVar5[1] - pfVar5[5];
          if (local_17c < _DAT_00890968) {
            local_17c = -local_17c;
          }
          local_19c = 0;
          local_198 = 0x3f800000;
          local_158 = 0;
          local_180 = (float)(fVar9 * (float10)_DAT_008933d4);
          local_17c = local_17c * _DAT_008933d4;
          local_194 = 0;
          local_154 = 0x3f800000;
          local_150 = 0;
          local_178 = 0;
          FUN_00401870(&local_158,&local_148,local_168);
          local_174 = local_190;
          local_170 = local_18c;
          local_16c = local_188;
          FUN_0048b5a0(local_168,&local_174,&local_180,1,&DAT_008a2fb4);
          cVar2 = FUN_0048c100(param_2,local_b0,param_2);
          if ((cVar2 != '\0') &&
             (((param_6 == '\0' && ((*(byte *)((int)pfVar5 + 0xd) & 0x10) != 0)) ||
              (fVar1 = local_148 * *(float *)(param_2 + 0x80) +
                       local_144 * *(float *)(param_2 + 0x84) +
                       local_140 * *(float *)(param_2 + 0x88),
              fVar1 < _DAT_00890968 == (fVar1 == _DAT_00890968))))) {
            local_1c1 = 1;
            if (param_4 == (undefined4 *)0x0) {
              return 1;
            }
            fVar1 = *(float *)(param_2 + 0xac);
            FUN_004048c0();
            puVar3 = (undefined4 *)FUN_004011c0(local_c0,(float *)(param_2 + 0x80),-fVar1);
            local_118 = *puVar3;
            local_114 = puVar3[1];
            local_110 = puVar3[2];
            local_10c = puVar3[3];
            local_d7 = 2;
            local_d4 = 0;
            pfVar6 = pfVar5;
            pfVar8 = local_108;
            for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pfVar8 = *pfVar6;
              pfVar6 = pfVar6 + 1;
              pfVar8 = pfVar8 + 1;
            }
            puVar3 = (undefined4 *)FUN_004011c0(local_d0,(float *)(param_2 + 0x70),-fVar1);
            local_128 = *puVar3;
            local_124 = puVar3[1];
            local_1a4 = -*(float *)(param_2 + 0xac);
            local_120 = puVar3[2];
            local_1ac = local_1a4 * *(float *)(param_2 + 0x80);
            local_1b8 = *(float *)(param_2 + 0x70);
            local_11c = puVar3[3];
            local_1b4 = *(float *)(param_2 + 0x74);
            local_1b0 = *(float *)(param_2 + 0x78);
            local_1a8 = local_1a4 * *(float *)(param_2 + 0x84);
            local_1a4 = local_1a4 * *(float *)(param_2 + 0x88);
            if (*(short *)(param_2 + 0x9e) != 0) {
              local_1b8 = local_1b8 + local_1ac;
              local_1b4 = local_1b4 + local_1a8;
              local_1b0 = local_1b0 + local_1a4;
            }
            cVar2 = (**(code **)*param_4)(&local_128,&local_1b8,param_5);
            if (cVar2 != '\0') {
              FUN_004876a0(&local_1ac);
            }
          }
        }
        pfVar5 = pfVar5 + 10;
      } while (pfVar5 != *(float **)(param_3 + 8));
    }
  }
  return local_1c1;
}

