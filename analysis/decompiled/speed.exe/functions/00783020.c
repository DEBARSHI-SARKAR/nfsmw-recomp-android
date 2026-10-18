/* speed.exe 00783020 FUN_00783020; analysis pseudocode, not buildable source.
 * calls 00782cb0 FUN_00782cb0
 * calls 005c5e80 FUN_005c5e80
 */

void __thiscall FUN_00783020(int param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffff3f | 0x30;
  puVar1 = (undefined4 *)(param_1 + 0x30);
  local_10 = *puVar1;
  local_c = *(undefined4 *)(param_1 + 0x34);
  local_8 = *(undefined4 *)(param_1 + 0x38);
  local_4 = *(undefined4 *)(param_1 + 0x3c);
  fVar2 = *param_4;
  fVar3 = param_3[1];
  fVar4 = param_4[1];
  fVar5 = param_3[4];
  fVar6 = param_3[5];
  fVar7 = param_3[6];
  fVar8 = param_4[2];
  fVar9 = param_3[8];
  fVar10 = param_3[9];
  fVar11 = param_3[10];
  fVar12 = (float10)FUN_005c5e80(fVar2 * param_3[2] * fVar2 * param_3[2] +
                                 fVar2 * *param_3 * fVar2 * *param_3);
  fVar13 = (float10)FUN_005c5e80(fVar4 * fVar5 * fVar4 * fVar5 + fVar4 * fVar7 * fVar4 * fVar7);
  fVar14 = (float10)FUN_005c5e80(fVar8 * fVar9 * fVar8 * fVar9 + fVar8 * fVar11 * fVar8 * fVar11);
  fVar12 = (float10)FUN_005c5e80((float)((float10)(float)fVar12 * (float10)(float)fVar12 +
                                        (float10)(float)fVar13 * (float10)(float)fVar13 +
                                        fVar14 * fVar14));
  *(float *)(param_1 + 0x3c) = (float)fVar12;
  fVar12 = (float10)FUN_005c5e80(fVar2 * fVar3 * fVar2 * fVar3 +
                                 fVar4 * fVar6 * fVar4 * fVar6 + fVar8 * fVar10 * fVar8 * fVar10);
  *(float *)(param_1 + 0x14) = (float)(fVar12 + fVar12);
  *puVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  FUN_00782cb0(&local_10,puVar1,1,param_1);
  return;
}

