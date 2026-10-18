/* speed.exe 00608100 FUN_00608100; analysis pseudocode, not buildable source.
 * calls 00607d40 FUN_00607d40
 * calls 006127a0 FUN_006127a0
 * calls 00607520 FUN_00607520
 */

undefined4 __thiscall FUN_00608100(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *unaff_EDI;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x54 + param_1 * 4);
  if (*unaff_EDI == 5) {
    uVar5 = *(undefined4 *)(unaff_EDI[1] + 8);
  }
  else {
    if (*unaff_EDI != 7) {
      return 0xffffffff;
    }
    uVar5 = *(undefined4 *)(unaff_EDI[1] + 8);
  }
  piVar2 = (int *)FUN_00607d40(uVar5,uVar1);
  if (*piVar2 == 0) {
    return 0xffffffff;
  }
  if (*param_3 == 5) {
    uVar5 = *(undefined4 *)(param_3[1] + 8);
  }
  else {
    if (*param_3 != 7) {
      puVar3 = &DAT_008a3c5c;
      goto LAB_0060816d;
    }
    uVar5 = *(undefined4 *)(param_3[1] + 8);
  }
  puVar3 = (undefined4 *)FUN_00607d40(uVar5,uVar1);
LAB_0060816d:
  iVar4 = FUN_00607520(piVar2,puVar3);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  FUN_006127a0(param_2,piVar2);
  iVar4 = **(int **)(param_2 + 8);
  if ((iVar4 != 0) && ((iVar4 != 1 || ((*(int **)(param_2 + 8))[1] != 0)))) {
    return 1;
  }
  return 0;
}

