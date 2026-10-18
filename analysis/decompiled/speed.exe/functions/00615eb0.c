/* speed.exe 00615eb0 FUN_00615eb0; analysis pseudocode, not buildable source.
 * calls 00615cb0 FUN_00615cb0
 * calls 00613eb0 FUN_00613eb0
 * calls 00605950 FUN_00605950
 * calls 0060c3d0 FUN_0060c3d0
 * calls 00607d80 FUN_00607d80
 * calls 0060b140 FUN_0060b140
 * calls 00607de0 FUN_00607de0
 */

void FUN_00615eb0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((param_2 < 1) && (-10000 < param_2)) {
    param_2 = param_2 + 1 + (*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 3);
  }
  puVar4 = *(undefined4 **)(param_1 + 8);
  *puVar4 = 4;
  uVar1 = FUN_00613eb0(param_1,&DAT_008a4270,1);
  puVar4[1] = uVar1;
  puVar4 = *(undefined4 **)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = puVar4 + 2;
  if (param_2 < 1) {
    iVar3 = FUN_00605950();
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc) + -8 + param_2 * 8;
  }
  puVar2 = (undefined4 *)FUN_00607d80(*(undefined4 *)(iVar3 + 4),puVar4);
  *puVar4 = *puVar2;
  puVar4[1] = puVar2[1];
  iVar3 = FUN_0060c3d0(1);
  if (-1 < iVar3) {
    puVar4 = *(undefined4 **)(param_1 + 8);
    *puVar4 = 4;
    uVar1 = FUN_00613eb0(param_1,&DAT_008a4270,1);
    puVar4[1] = uVar1;
    iVar3 = *(int *)(param_1 + 8);
    puVar4 = (undefined4 *)(iVar3 + 8);
    *(undefined4 **)(param_1 + 8) = puVar4;
    *(float *)(iVar3 + 0xc) = (float)param_3;
    *puVar4 = 3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
    FUN_0060b140(param_1,param_2);
    return;
  }
  FUN_00615cb0();
  if (param_2 < 1) {
    puVar4 = (undefined4 *)FUN_00605950();
  }
  else {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + -8 + param_2 * 8);
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = *puVar4;
  puVar2[1] = puVar4[1];
  iVar3 = *(int *)(param_1 + 8);
  puVar4 = (undefined4 *)(iVar3 + 8);
  *(undefined4 **)(param_1 + 8) = puVar4;
  *(float *)(iVar3 + 0xc) = (float)param_3;
  *puVar4 = 3;
  puVar4 = *(undefined4 **)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = puVar4 + 2;
  puVar2 = (undefined4 *)FUN_00607de0(param_1,puVar4[-3],puVar4 + -2);
  *puVar2 = *puVar4;
  puVar2[1] = puVar4[1];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x18;
  return;
}

