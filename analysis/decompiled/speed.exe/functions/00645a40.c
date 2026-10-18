/* speed.exe 00645a40 FUN_00645a40; analysis pseudocode, not buildable source.
 * calls 00634090 FUN_00634090
 * calls 00644c80 FUN_00644c80
 * calls 00643950 FUN_00643950
 * calls 00627670 FUN_00627670
 * calls 006439a0 FUN_006439a0
 * calls 006341f0 FUN_006341f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall
FUN_00645a40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  if (param_5 == 4) {
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_00645a90;
    FUN_00634090(param_3,1,0);
  }
  else if ((param_5 == 3) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_00627670();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_00645a90:
    cVar3 = FUN_00644c80(param_2,param_3,param_4);
    if (cVar3 == '\0') {
      return 0;
    }
    return 1;
  }
  if (param_5 == 0) {
    return 0;
  }
  if (param_5 == 1) {
    iVar8 = *(int *)(param_1 + 0x30);
  }
  else {
    if (param_5 != 2) {
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x3c);
  }
  if (iVar8 != 0) {
    return 0;
  }
  iVar8 = 0;
  piVar4 = (int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      piVar1 = piVar4 + 1;
      iVar8 = iVar8 + 1;
      piVar4 = piVar4 + 1;
    } while (*piVar1 != 0);
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x28);
      goto LAB_00645b08;
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x24);
LAB_00645b08:
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = FUN_00643950(uVar6);
  if (iVar5 == 0) {
    iVar5 = FUN_00643950(*(undefined4 *)(iVar2 + 4));
  }
  uVar6 = FUN_006341f0(iVar5,param_2,param_4);
  puVar7 = (undefined4 *)FUN_006439a0(uVar6);
  if (puVar7 == (undefined4 *)0x0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x30 + iVar8 * 4) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = *puVar7;
  if (*(float *)(puVar7[1] + 0xc) < _DAT_00890968) {
    *(undefined4 *)(param_1 + 0x2c) = DAT_008f5964;
    return 1;
  }
  *(float *)(param_1 + 0x2c) = *(float *)(puVar7[1] + 0xc) + *(float *)(param_1 + 0x2c);
  return 1;
}

