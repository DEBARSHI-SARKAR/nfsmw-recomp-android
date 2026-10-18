/* speed.exe 00618ac0 FUN_00618ac0; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 * calls 00616000 FUN_00616000
 * calls 0060bd50 FUN_0060bd50
 * calls 00607cb0 FUN_00607cb0
 */

undefined4 FUN_00618ac0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_2c;
  int local_24;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if ((((piVar1 < *(int **)(param_1 + 8)) && (piVar1 != (int *)0x0)) && (*piVar1 == 5)) &&
     (iVar4 = FUN_00616000(param_1,1), local_24 = iVar4, 0 < iVar4)) {
    do {
      local_2c = 1;
      if (1 < iVar4) {
        do {
          iVar5 = FUN_0045da30(iVar4);
          iVar5 = iVar5 + 1;
          if (iVar5 != local_2c) {
            puVar6 = (undefined4 *)
                     FUN_00607cb0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),local_2c);
            puVar7 = *(undefined4 **)(param_1 + 8);
            *puVar7 = *puVar6;
            puVar7[1] = puVar6[1];
            iVar2 = *(int *)(param_1 + 8);
            puVar6 = (undefined4 *)(iVar2 + 8);
            *(undefined4 **)(param_1 + 8) = puVar6;
            puVar7 = (undefined4 *)FUN_00607cb0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),iVar5);
            *puVar6 = *puVar7;
            *(undefined4 *)(iVar2 + 0xc) = puVar7[1];
            puVar7 = *(undefined4 **)(param_1 + 8);
            *(undefined4 **)(param_1 + 8) = puVar7 + 2;
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
            puVar6 = (undefined4 *)FUN_00607cb0(uVar3,local_2c);
            if (puVar6 == &DAT_008a3c5c) {
              local_14 = (float)local_2c;
              local_18 = 3;
              puVar6 = (undefined4 *)FUN_0060bd50(param_1,uVar3,&local_18);
            }
            *puVar6 = *puVar7;
            puVar6[1] = puVar7[1];
            iVar2 = *(int *)(param_1 + 8);
            *(int *)(param_1 + 8) = iVar2 + -8;
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
            puVar7 = (undefined4 *)FUN_00607cb0(uVar3,iVar5);
            if (puVar7 == &DAT_008a3c5c) {
              local_c = (float)iVar5;
              local_10 = 3;
              puVar7 = (undefined4 *)FUN_0060bd50(param_1,uVar3,&local_10);
            }
            *puVar7 = *(undefined4 *)(iVar2 + -0x10);
            puVar7[1] = *(undefined4 *)(iVar2 + -0xc);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
          }
          local_2c = local_2c + 1;
        } while (local_2c < iVar4);
      }
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return 0;
}

