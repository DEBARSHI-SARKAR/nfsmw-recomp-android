/* speed.exe 00459250 FUN_00459250; analysis pseudocode, not buildable source.
 * calls 00458b80 FUN_00458b80
 * calls 00456390 FUN_00456390
 * calls 00458d20 FUN_00458d20
 * calls 00458e70 FUN_00458e70
 * calls 00456220 FUN_00456220
 */

undefined4 * __thiscall FUN_00459250(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 *puVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869db8;
  local_c = ExceptionList;
  uVar7 = *(undefined2 *)((int)param_2 + 0xe);
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = uVar7;
  param_1[4] = param_2[4];
  iVar8 = param_2[5];
  param_1[5] = iVar8;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar8 = *(int *)(iVar8 + 8);
  local_4 = 0;
  FUN_00456220(param_3,param_1);
  if (0x50 < (*(uint *)(iVar8 + 0x28) & 0xfffffffe)) {
    FUN_00456390(((*(int *)(iVar8 + 0x20) * 5 & 0x3fffffffU) >> 2) + 3 & 0xfffffffc);
  }
  *(int *)(param_1[5] + 4) = *(int *)(param_1[5] + 4) + 1;
  if (param_1[4] != 0) {
    piVar1 = (int *)(param_1[4] + 0x1c);
    *piVar1 = *piVar1 + 1;
  }
  uVar3 = FUN_00458b80(param_2[6]);
  param_1[6] = uVar3;
  uVar6 = param_2[1];
  uVar4 = 0;
  if (uVar6 != 0) {
    iVar8 = *param_2;
    do {
      if (((*(byte *)(iVar8 + 0xb) & 0x10) != 0) || (*(int *)(iVar8 + 4) != iVar8)) break;
      uVar4 = uVar4 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar4 < uVar6);
  }
  do {
    do {
      if (uVar6 <= uVar4) {
        ExceptionList = local_c;
        return param_1;
      }
      puVar9 = (undefined4 *)(*param_2 + uVar4 * 0xc);
      if ((*(byte *)((int)puVar9 + 0xb) & 0x10) == 0) {
        if ((undefined4 *)puVar9[1] == puVar9) {
          ExceptionList = local_c;
          return param_1;
        }
        if (((*(byte *)((int)puVar9 + 0xb) & 0x10) == 0) && ((undefined4 *)puVar9[1] == puVar9)) {
          puVar9 = (undefined4 *)0x0;
        }
      }
      bVar5 = *(byte *)((int)puVar9 + 0xb) >> 4 & 1;
      if ((bVar5 == 0) && ((undefined4 *)puVar9[1] == puVar9)) {
        uVar7 = 0;
      }
      else if ((*(byte *)((int)puVar9 + 0xb) & 2) == 0) {
        uVar7 = 1;
      }
      else {
        iVar8 = puVar9[1];
        if (bVar5 != 0) {
          iVar8 = iVar8 + param_2[6];
        }
        uVar7 = *(undefined2 *)(iVar8 + 2);
      }
      if ((bVar5 == 0) && ((undefined4 *)puVar9[1] == puVar9)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar9;
      }
      cVar2 = FUN_00458d20(uVar3,uVar7);
      if (cVar2 != '\0') {
        if (((*(byte *)((int)puVar9 + 0xb) & 0x10) == 0) && ((undefined4 *)puVar9[1] == puVar9)) {
          uVar3 = 0;
        }
        else {
          uVar3 = *puVar9;
        }
        FUN_00458e70(uVar3,param_2);
      }
      uVar6 = param_2[1];
      uVar4 = uVar4 + 1;
    } while (uVar6 <= uVar4);
    iVar8 = *param_2 + uVar4 * 0xc;
    do {
      if (((*(byte *)(iVar8 + 0xb) & 0x10) != 0) || (*(int *)(iVar8 + 4) != iVar8)) break;
      uVar4 = uVar4 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar4 < uVar6);
  } while( true );
}

