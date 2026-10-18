/* speed.exe 007839b0 FUN_007839b0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0077e4a0 FUN_0077e4a0
 * calls 00782cb0 FUN_00782cb0
 * calls 00783490 FUN_00783490
 * calls 00771940 FUN_00771940
 * calls 005c5e80 FUN_005c5e80
 */

undefined4 * __thiscall FUN_007839b0(int param_1,float *param_2,undefined4 *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = _malloc(0x70);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar7 = puVar4;
    for (iVar6 = 0x1c; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  *(undefined2 *)((int)puVar4 + 0x22) = 0;
  puVar7 = param_3;
  puVar5 = puVar4 + 0xc;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar5 = puVar5 + 1;
  }
  if (param_4 != '\0') {
    *(undefined2 *)((int)puVar4 + 0x22) = 1;
  }
  *(byte *)((int)puVar4 + 0x22) = *(byte *)((int)puVar4 + 0x22) | 0x40;
  puVar7 = param_3 + 0xc;
  *(undefined2 *)(puVar4 + 9) = 0;
  *(undefined1 *)(puVar4 + 8) = 0;
  *puVar4 = *puVar7;
  puVar4[1] = (float)param_3[0xd] - param_2[1];
  puVar4[2] = param_3[0xe];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  puVar4[4] = *param_2;
  puVar4[5] = fVar1;
  puVar4[6] = fVar2;
  puVar4[7] = 0x3f800000;
  fVar1 = (float)puVar4[4];
  puVar4[7] = 0x3f800000;
  param_3 = (undefined4 *)((float)puVar4[6] * (float)puVar4[6] + fVar1 * fVar1);
  fVar8 = (float10)FUN_005c5e80(param_3);
  puVar4[3] = (float)fVar8;
  *(undefined1 *)((int)puVar4 + 0x27) = 0;
  *(undefined1 *)((int)puVar4 + 0x26) = 0;
  iVar6 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar6 + 1;
  param_3 = (undefined4 *)iVar6;
  puVar5 = (undefined4 *)FUN_00783490(&param_3);
  *puVar5 = puVar4;
  FUN_00782cb0(0,puVar4,2,iVar6);
  iVar3 = DAT_009b3934;
  if (param_4 != '\0') {
    local_28 = DAT_008a2fd0;
    local_14 = 2;
    local_20 = DAT_008a2fd8;
    local_24 = DAT_008a2fd4;
    local_40 = 1;
    local_1c = DAT_008a2fdc;
    local_8 = 0;
    local_4 = 0;
    local_3c = puVar7;
    local_18 = iVar6;
    local_10 = puVar7;
    local_c = puVar4;
    iVar6 = FUN_00771940(DAT_009b3934,*(undefined4 *)(DAT_009b3934 + 4),&local_40);
    FUN_0077e4a0(1);
    *(int *)(iVar3 + 4) = iVar6;
    **(int **)(iVar6 + 4) = iVar6;
  }
  return puVar4;
}

