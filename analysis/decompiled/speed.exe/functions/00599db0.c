/* speed.exe 00599db0 FUN_00599db0; analysis pseudocode, not buildable source.
 * calls 005848b0 FUN_005848b0
 * calls 0045ecf0 FUN_0045ecf0
 * calls 00591a00 FUN_00591a00
 * calls 0056b010 FUN_0056b010
 * calls 00591ab0 FUN_00591ab0
 * calls 00582c70 FUN_00582c70
 * calls 00517a00 FUN_00517a00
 * calls 00591460 FUN_00591460
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00599db0(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float local_1e0;
  float local_1dc;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170 [18];
  undefined1 local_128 [292];
  
  if ((DAT_0091cb10 != 0) && (*(int *)(DAT_0091cb10 + 0x11c) == 5)) {
    iVar5 = FUN_00517a00();
    local_1b0 = 0x3f800000;
    local_1ac = 0;
    local_1a8 = 0;
    local_1a4 = 0;
    local_1a0 = 0;
    local_19c = 0x3f800000;
    local_198 = 0;
    local_194 = 0;
    local_190 = 0;
    local_18c = 0;
    local_188 = 0x3f800000;
    local_184 = 0;
    local_174 = 0x3f800000;
    local_180 = 0x43a00000;
    local_17c = 0x43700000;
    local_178 = 0;
    uVar6 = FUN_005848b0(*(undefined4 *)(param_1 + 0x2c),local_170,&local_1c0,
                         *(undefined2 *)(param_1 + 0x20),0x3f800000);
    FUN_0045ecf0(local_170,&local_1b0,local_170);
    if (param_2 == 0) {
      param_2 = FUN_00591ab0(param_1,iVar5);
    }
    else {
      FUN_00591a00(param_3);
    }
    iVar9 = (int)*(short *)(iVar5 + 0x46);
    local_1d0 = ((local_1c0 / 2 | local_1b4 << 8) << 8 | local_1bc / 2) << 8 | local_1b8 / 2;
    iVar7 = (int)*(short *)(iVar5 + 0x44);
    fVar1 = (float)iVar7;
    if (iVar7 < 0) {
      fVar1 = fVar1 + _DAT_00891214;
    }
    fVar3 = (float)iVar9;
    if (iVar9 < 0) {
      fVar3 = fVar3 + _DAT_00891214;
    }
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      uVar8 = iVar7 - 1;
      iVar7 = 2;
      while (uVar8 = uVar8 >> 1, uVar8 != 0) {
        iVar7 = iVar7 << 1;
      }
    }
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    else {
      uVar8 = iVar9 - 1;
      iVar9 = 2;
      while (uVar8 = uVar8 >> 1, uVar8 != 0) {
        iVar9 = iVar9 << 1;
      }
    }
    fVar4 = (float)iVar9;
    if (iVar9 < 0) {
      fVar4 = fVar4 + _DAT_00891214;
    }
    fVar2 = (float)iVar7;
    if (iVar7 < 0) {
      fVar2 = fVar2 + _DAT_00891214;
    }
    local_1cc = local_1d0;
    local_1c8 = local_1d0;
    local_1c4 = local_1d0;
    iVar7 = FUN_0056b010(local_128);
    if (*(int *)(iVar7 + 0xc) == 0) {
      local_1e0 = 0.0;
      local_1dc = fVar3 / fVar4;
    }
    else {
      local_1dc = 0.0;
      local_1e0 = fVar3 / fVar4;
    }
    puVar10 = local_170;
    puVar11 = (undefined4 *)(param_2 + 0x30);
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    FUN_00591460(0xbf000000,0xbf000000,0x3f000000,0x3f000000,0x3f800000,0,local_1dc,fVar1 / fVar2,
                 local_1e0,&local_1d0,uVar6,param_3);
    *(int *)(param_2 + 0x14) = iVar5;
    FUN_00582c70();
  }
  return;
}

