/* speed.exe 006d3b80 FUN_006d3b80; analysis pseudocode, not buildable source.
 * calls 006c6810 FUN_006c6810
 * calls 006c83a0 FUN_006c83a0
 * calls 006e2f50 FUN_006e2f50
 * calls 006c67c0 FUN_006c67c0
 */

/* WARNING: Removing unreachable block (ram,0x006d3f1b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d3b80(int *param_1)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  undefined4 uStack_1a8;
  int *piStack_1a4;
  int *piStack_1a0;
  int *piStack_19c;
  int *piStack_198;
  int *piStack_194;
  undefined1 *puStack_190;
  float *pfStack_18c;
  int *piStack_188;
  undefined4 uStack_184;
  int *piStack_180;
  int iStack_17c;
  int *piStack_178;
  int **appiStack_174 [2];
  int *piStack_16c;
  int iStack_168;
  int *piStack_15c;
  undefined4 uStack_158;
  int *piStack_154;
  int *piStack_150;
  undefined1 *puStack_14c;
  float afStack_7c [7];
  undefined1 local_60 [4];
  int iStack_5c;
  int iStack_58;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_c;
  
  puStack_14c = local_60;
  piStack_150 = param_1;
  piStack_154 = (int *)0x6d3b9d;
  (**(code **)(*param_1 + 0x30))();
  piStack_154 = param_1;
  iVar6 = 0;
  uStack_158 = 0;
  piStack_15c = DAT_00982bdc;
  (**(code **)(*DAT_00982bdc + 0x94))();
  if (0 < DAT_00901808) {
    iStack_168 = 0x6d3bc6;
    (**(code **)(*DAT_00982bdc + 0x9c))();
  }
  piVar7 = DAT_0093dea4;
  fVar3 = (float)iStack_5c;
  if (iStack_5c < 0) {
    fVar3 = fVar3 + _DAT_00891214;
  }
  piStack_150 = (int *)(_DAT_00891068 / fVar3);
  fVar3 = (float)iStack_58;
  if (iStack_58 < 0) {
    fVar3 = fVar3 + _DAT_00891214;
  }
  afStack_7c[0] = -(float)piStack_150;
  piStack_154 = (int *)(_DAT_0089096c - _DAT_00891068 / fVar3);
  afStack_7c[1] = (float)piStack_154;
  if (iStack_c == 5) {
    DAT_00982c80 = (int *)0x0;
    iStack_168 = 0x6d3dbe;
    (**(code **)(_DAT_00000000 + 4))();
    iStack_168 = _DAT_0000004c;
    piStack_16c = DAT_00982bdc;
    appiStack_174[1] = (int **)0x6d3dd3;
    (**(code **)(*DAT_00982bdc + 0x15c))();
    appiStack_174[1] = (int **)0x0;
    appiStack_174[0] = &piStack_15c;
    piStack_178 = _DAT_00000048;
    iStack_17c = 0x6d3de7;
    (**(code **)(*_DAT_00000048 + 0xfc))();
    iStack_17c = 0;
    piStack_180 = _DAT_00000048;
    uStack_184 = 0x6d3df9;
    (**(code **)(*_DAT_00000048 + 0x100))();
    uStack_28 = 2;
    piVar7 = (int *)0x0;
    iVar5 = 2;
  }
  else {
    DAT_00982c80 = DAT_0093dea4;
    iStack_168 = 0x6d3e20;
    (**(code **)(*DAT_0093dea4 + 4))();
    iStack_168 = piVar7[0x13];
    piStack_16c = DAT_00982bdc;
    appiStack_174[1] = (int **)0x6d3e32;
    (**(code **)(*DAT_00982bdc + 0x15c))();
    piStack_178 = (int *)piVar7[0x12];
    appiStack_174[1] = (int **)0x0;
    appiStack_174[0] = &piStack_15c;
    iStack_17c = 0x6d3e44;
    (**(code **)(*piStack_178 + 0xfc))();
    piStack_180 = (int *)piVar7[0x12];
    iStack_17c = iStack_c + -1;
    uStack_184 = 0x6d3e54;
    (**(code **)(*piStack_180 + 0x100))();
    iVar5 = iStack_c;
  }
  pfStack_18c = (float *)DAT_0093dea4[0x12];
  piStack_188 = *(int **)(DAT_0093dea4[0x11] + 0x18c);
  uStack_184 = 0xf;
  puStack_190 = (undefined1 *)0x6d3e6f;
  (**(code **)((int)*pfStack_18c + 0x68))();
  puStack_190 = (undefined1 *)uStack_20;
  piStack_194 = (int *)uStack_24;
  piStack_198 = (int *)uStack_28;
  piStack_19c = (int *)0x6d3e8c;
  FUN_006c6810();
  appiStack_174[0] = (int **)0x1f;
  appiStack_174[1] = (int **)0x20;
  piStack_16c = (int *)0x21;
  iStack_168 = 0x22;
  if (0 < iVar5) {
    pbVar8 = (byte *)(iStack_2c + 2);
    iStack_17c = iStack_30 - (int)appiStack_174;
    pfVar4 = afStack_7c + 1;
    do {
      puStack_190 = *(undefined1 **)((int)appiStack_174 + iStack_17c + iVar6 * 4);
      piStack_194 = *(int **)(piVar7[0x11] + 0x24 + (int)appiStack_174[iVar6] * 0x28);
      piStack_198 = (int *)piVar7[0x12];
      piStack_19c = (int *)0x6d3f06;
      (**(code **)(*(int *)piVar7[0x12] + 0xd0))();
      bVar1 = pbVar8[-1];
      bVar2 = *pbVar8;
      pfVar4[-1] = (float)(*(uint *)(pbVar8 + -2) & 0xff) * _DAT_00899dd0;
      iVar5 = iStack_34;
      piStack_178 = (int *)(uint)pbVar8[1];
      iVar6 = iVar6 + 1;
      pbVar8 = pbVar8 + 4;
      *pfVar4 = (float)bVar1 * _DAT_00899dd0;
      pfVar4[1] = (float)bVar2 * _DAT_00899dd0;
      pfVar4[2] = (float)(int)piStack_178 * _DAT_00899dd0;
      pfVar4 = pfVar4 + 4;
    } while (iVar6 < iVar5);
  }
  if ((piVar7[1] == 0xb) && (iVar5 < 4)) {
    pfVar4 = afStack_7c + iVar5 * 4 + 1;
    do {
      piStack_198 = (int *)piVar7[0x12];
      puStack_190 = (undefined1 *)0x0;
      piStack_194 = *(int **)(piVar7[0x11] + 0x24 + (int)appiStack_174[iVar5] * 0x28);
      piStack_19c = (int *)0x6d3fbc;
      (**(code **)(*piStack_198 + 0xd0))();
      pfVar4[-1] = 0.0;
      *pfVar4 = 0.0;
      pfVar4[1] = 0.0;
      pfVar4[2] = 0.0;
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 4;
    } while (iVar5 < 4);
  }
  puStack_190 = (undefined1 *)0x0;
  piStack_194 = (int *)0x0;
  piStack_198 = (int *)0x6d3fd9;
  FUN_006c67c0();
  puStack_190 = (undefined1 *)0x6d3fe1;
  FUN_006c83a0();
  if (piVar7[1] == 0xb) {
    piStack_194 = (int *)piVar7[0x12];
    piStack_188 = (int *)0x4;
    pfStack_18c = afStack_7c;
    puStack_190 = *(undefined1 **)(piVar7[0x11] + 0x59c);
    piStack_198 = (int *)0x6d4009;
    (**(code **)(*piStack_194 + 0x90))();
  }
  DAT_00982ca0 = 0;
  piStack_188 = (int *)DAT_00982c80[0x12];
  pfStack_18c = (float *)0x6d4021;
  (**(code **)(*piStack_188 + 0x104))();
  pfStack_18c = (float *)0x30;
  puStack_190 = &stack0xfffffea0;
  piStack_194 = (int *)0x2;
  piStack_198 = (int *)0x6;
  piStack_19c = DAT_00982bdc;
  piStack_1a0 = (int *)0x6d403a;
  (**(code **)(*DAT_00982bdc + 0x14c))();
  piStack_1a0 = (int *)piVar7[0x12];
  piStack_1a4 = (int *)0x6d4046;
  (**(code **)(*piStack_1a0 + 0x108))();
  piStack_1a4 = (int *)0x6d404d;
  (**(code **)(*piVar7 + 8))();
  piStack_1a4 = (int *)piVar7[0x12];
  uStack_1a8 = 0x6d4059;
  (**(code **)(*piStack_1a4 + 0x10c))();
  iVar6 = DAT_00982a20;
  DAT_00982c80 = (int *)0x0;
  uStack_1a8 = 0x6d406a;
  FUN_006e2f50();
  uStack_1a8 = *(undefined4 *)(iVar6 + 8);
  (**(code **)(*DAT_00982bdc + 0x94))(DAT_00982bdc,0);
  (**(code **)(*DAT_00982bdc + 0x9c))(DAT_00982bdc,*(undefined4 *)(iVar6 + 0xc));
  piStack_1a0 = *(int **)(iVar6 + 0x14);
  piStack_19c = *(int **)(iVar6 + 0x18);
  uStack_1a8 = 0;
  piStack_1a4 = (int *)0x0;
  piStack_198 = (int *)0x0;
  piStack_194 = (int *)0x3f800000;
  (**(code **)(*DAT_00982bdc + 0xbc))(DAT_00982bdc,&uStack_1a8);
  DAT_00982a20 = iVar6;
  DAT_00982c80 = (int *)0x0;
  return;
}

