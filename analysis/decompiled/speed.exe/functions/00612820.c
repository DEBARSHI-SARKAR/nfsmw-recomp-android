/* speed.exe 00612820 FUN_00612820; analysis pseudocode, not buildable source.
 * calls 00607d40 FUN_00607d40
 * calls 006127a0 FUN_006127a0
 */

undefined4 FUN_00612820(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x54 + param_5 * 4);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*param_2 == 5) {
    uVar6 = *(undefined4 *)(param_2[1] + 8);
LAB_0061285f:
    piVar4 = (int *)FUN_00607d40(uVar6,uVar1);
    if (*piVar4 != 0) goto LAB_00612897;
  }
  else if (*param_2 == 7) {
    uVar6 = *(undefined4 *)(param_2[1] + 8);
    goto LAB_0061285f;
  }
  if (*param_3 == 5) {
    uVar6 = *(undefined4 *)(param_3[1] + 8);
  }
  else {
    if (*param_3 != 7) {
      return 0;
    }
    uVar6 = *(undefined4 *)(param_3[1] + 8);
  }
  piVar4 = (int *)FUN_00607d40(uVar6,uVar1);
LAB_00612897:
  if (*piVar4 != 6) {
    return 0;
  }
  FUN_006127a0(param_1,piVar4,param_2,param_3);
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x1c) + (param_4 - iVar2));
  *puVar5 = *puVar3;
  puVar5[1] = puVar3[1];
  return 1;
}

