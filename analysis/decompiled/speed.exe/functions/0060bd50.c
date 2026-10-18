/* speed.exe 0060bd50 FUN_0060bd50; analysis pseudocode, not buildable source.
 * calls 0060ba20 FUN_0060ba20
 * calls 006074c0 FUN_006074c0
 * calls 006079b0 FUN_006079b0
 * calls 00607810 FUN_00607810
 * calls 00607d80 FUN_00607d80
 */

undefined4 * FUN_0060bd50(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  
  puVar3 = param_3;
  iVar2 = param_2;
  puVar4 = (undefined4 *)FUN_00607810(param_2,param_3);
  puVar8 = puVar4;
  if (puVar4[2] != 0) {
    puVar5 = (undefined4 *)FUN_00607810(iVar2,puVar4);
    puVar8 = *(undefined4 **)(iVar2 + 0x14);
    if (puVar5 == puVar4) {
      puVar8[4] = puVar4[4];
      puVar4[4] = puVar8;
    }
    else {
      puVar1 = (undefined4 *)puVar5[4];
      while (puVar1 != puVar4) {
        puVar5 = (undefined4 *)puVar5[4];
        puVar1 = (undefined4 *)puVar5[4];
      }
      puVar5[4] = puVar8;
      *puVar8 = *puVar4;
      puVar8[1] = puVar4[1];
      puVar8[2] = puVar4[2];
      puVar8[3] = puVar4[3];
      puVar8[4] = puVar4[4];
      puVar4[4] = 0;
      puVar4[2] = 0;
      puVar8 = puVar4;
    }
  }
  *puVar8 = *puVar3;
  puVar8[1] = puVar3[1];
  if (**(int **)(iVar2 + 0x14) != 0) {
    do {
      if (*(int *)(iVar2 + 0x14) == *(int *)(iVar2 + 0x10)) {
        puVar8[2] = 1;
        puVar8[3] = 0;
        FUN_006079b0(iVar2,&param_2,&param_3);
        iVar7 = FUN_006074c0(param_3);
        FUN_0060ba20(param_1,iVar2,iVar7 + 1);
        puVar8 = (undefined4 *)FUN_00607d80(iVar2,puVar3);
        *puVar8 = 0;
        return puVar8;
      }
      piVar6 = (int *)(*(int *)(iVar2 + 0x14) + -0x14);
      *(int **)(iVar2 + 0x14) = piVar6;
    } while (*piVar6 != 0);
  }
  return puVar8 + 2;
}

