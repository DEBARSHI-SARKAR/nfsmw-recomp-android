/* speed.exe 008559b0 FUN_008559b0; analysis pseudocode, not buildable source.
 * calls 00854ef0 FUN_00854ef0
 * calls 00855650 FUN_00855650
 */

uint FUN_008559b0(int param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(param_1 + 0x60c);
  if (iVar4 == 7) {
    return 0xfffffffe;
  }
  if ((iVar4 != 5) && (iVar4 != 6)) {
    return 0xfffffffd;
  }
  if (*(int *)(param_1 + 0x610) == 1) {
    return 0xfffffffc;
  }
  if ((int)param_4 < 1) {
    return 0;
  }
  if ((int)param_3 < 1) {
    param_3 = 1;
  }
  if ((int)param_4 < (int)param_3) {
    param_4 = param_3;
  }
  uVar2 = *(uint *)(param_1 + 0x62c);
  if ((int)uVar2 < (int)param_3) {
    param_3 = uVar2;
  }
  if ((int)uVar2 < (int)param_4) {
    param_4 = uVar2;
  }
  iVar4 = *(int *)(param_1 + 0x630);
  if ((int)(uVar2 - iVar4) < (int)param_3) {
    uVar1 = *(int *)(param_1 + 0x634) - iVar4;
    puVar3 = (undefined4 *)((int)*(undefined4 **)(param_1 + 0x628) + iVar4);
    puVar5 = *(undefined4 **)(param_1 + 0x628);
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(int *)(param_1 + 0x634) = *(int *)(param_1 + 0x634) - *(int *)(param_1 + 0x630);
    *(undefined4 *)(param_1 + 0x630) = 0;
    FUN_00855650(param_1);
  }
  if (*(int *)(param_1 + 0x650) == 1) {
    uVar2 = FUN_00854ef0(param_4);
  }
  else {
    uVar2 = *(int *)(param_1 + 0x634) - *(int *)(param_1 + 0x630);
    if ((int)param_4 < (int)uVar2) {
      uVar2 = param_4;
    }
  }
  if ((uVar2 == 0) && (*(int *)(param_1 + 0x60c) == 6)) {
    return 0xffffffff;
  }
  if (((int)uVar2 < (int)param_3) && (*(int *)(param_1 + 0x638) != *(int *)(param_1 + 0x624))) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x628) + *(int *)(param_1 + 0x630));
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  iVar4 = *(int *)(param_1 + 0x630) + uVar2;
  *(int *)(param_1 + 0x630) = iVar4;
  if ((*(int *)(param_1 + 0x650) == 1) && (*(int *)(param_1 + 0x63c) == 0)) {
    *(int *)(param_1 + 0x630) = iVar4 + 2;
  }
  return uVar2;
}

