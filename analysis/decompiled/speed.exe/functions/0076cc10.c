/* speed.exe 0076cc10 FUN_0076cc10; analysis pseudocode, not buildable source.
 * calls 005c8cc0 FUN_005c8cc0
 * calls 005cab00 FUN_005cab00
 * calls 0076c810 FUN_0076c810
 * calls 007632b0 FUN_007632b0
 * calls 00763e80 FUN_00763e80
 * calls 00486610 FUN_00486610
 * calls 00763b40 FUN_00763b40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0076cc10(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  int local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  undefined4 local_160 [11];
  undefined1 local_134;
  undefined1 local_133;
  undefined4 local_130 [11];
  undefined1 local_104;
  undefined1 local_103;
  undefined4 local_100 [16];
  undefined4 local_c0 [16];
  undefined4 local_80 [16];
  undefined1 local_40 [64];
  
  FUN_007632b0(local_100,1);
  puVar7 = local_100;
  puVar8 = local_80;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_005c8cc0(local_80);
  puVar7 = param_1;
  puVar8 = local_c0;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_005c8cc0(local_c0);
  FUN_005cab00(local_80,local_c0,local_40);
  pfVar1 = *(float **)(param_3 + 0x1c);
  if (pfVar1 != (float *)0x0) {
    local_134 = 0;
    local_133 = 0;
    local_184 = 1e+38;
    FUN_00486610(param_1 + 0xc,local_100,&local_16c);
    FUN_00486610(param_2,local_100,&local_180);
    local_194 = local_180 - local_16c;
    bVar3 = false;
    local_188 = 0;
    local_190 = local_17c - local_168;
    local_18c = local_178 - local_164;
    local_170 = _DAT_0089096c /
                (local_190 * local_190 + local_194 * local_194 + local_18c * local_18c);
    pfVar2 = pfVar1;
    if (*(short *)pfVar1 != 0) {
      do {
        pfVar6 = pfVar2 + 4;
        local_198 = (float)*(ushort *)(pfVar2 + 7) * _DAT_008b493c;
        FUN_00763e80(pfVar6,&local_16c,local_170,&local_194,&local_180);
        if ((*pfVar6 - local_180) * (*pfVar6 - local_180) +
            (pfVar2[5] - local_17c) * (pfVar2[5] - local_17c) +
            (pfVar2[6] - local_178) * (pfVar2[6] - local_178) < local_198 * local_198) {
          local_104 = 0;
          local_103 = 0;
          cVar4 = FUN_0076c810(local_40,&DAT_008a2fb4,pfVar6,
                               *(ushort *)((int)pfVar2 + 0x1e) + 0x10 + (int)pfVar1,&local_19c,
                               local_130);
          if (((cVar4 != '\0') && (_DAT_00890968 < local_19c)) && (local_19c < local_184)) {
            puVar7 = local_130;
            puVar8 = local_160;
            for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            local_184 = local_19c;
            *param_5 = local_19c;
            bVar3 = true;
          }
        }
        local_188 = local_188 + 1;
        pfVar2 = pfVar6;
      } while (local_188 < (int)(uint)*(ushort *)pfVar1);
      if (bVar3) {
        FUN_00763b40(param_4,local_160,local_100);
        return 1;
      }
    }
  }
  return 0;
}

