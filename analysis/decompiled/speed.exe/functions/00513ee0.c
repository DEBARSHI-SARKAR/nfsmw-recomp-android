/* speed.exe 00513ee0 FUN_00513ee0; analysis pseudocode, not buildable source.
 * calls 00513bc0 FUN_00513bc0
 * calls 00513e30 FUN_00513e30
 * calls 0078c730 FUN_0078c730
 * calls 0078c760 FUN_0078c760
 */

void __thiscall FUN_00513ee0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_788 [5];
  int local_774;
  int local_770;
  int local_76c;
  int local_768;
  int local_758;
  undefined4 local_730;
  undefined1 local_508 [644];
  undefined1 local_284 [640];
  
  switch(*(undefined4 *)(param_1 + 0xfc)) {
  case 0:
    if (*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0x34)) {
      puVar2 = (undefined4 *)FUN_00513e30(local_284,*(int *)(param_1 + 0x100));
      iVar4 = *(int *)(param_1 + 0x100);
      puVar5 = local_788;
      for (iVar3 = 0x9f; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      *(int *)(param_1 + 0x100) = iVar4 + 1;
      goto LAB_005140f7;
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0x34)) {
      do {
        uVar1 = *(undefined4 *)(param_1 + 0x100);
        FUN_0078c730(uVar1);
        uVar1 = FUN_0078c760(uVar1);
        puVar2 = (undefined4 *)FUN_00513bc0(local_508,uVar1);
        puVar5 = local_788;
        for (iVar4 = 0x9f; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar4 = *(int *)(param_1 + 0x100) + 1;
        *(int *)(param_1 + 0x100) = iVar4;
        if (local_770 != 0) goto LAB_005140f7;
      } while (iVar4 < *(int *)(param_1 + 0x34));
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0x34)) {
      do {
        uVar1 = *(undefined4 *)(param_1 + 0x100);
        FUN_0078c730(uVar1);
        uVar1 = FUN_0078c760(uVar1);
        puVar2 = (undefined4 *)FUN_00513bc0(local_508,uVar1);
        puVar5 = local_788;
        for (iVar4 = 0x9f; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar4 = *(int *)(param_1 + 0x100) + 1;
        *(int *)(param_1 + 0x100) = iVar4;
        if ((local_768 != 0) || (local_76c != 0)) goto LAB_005140f7;
      } while (iVar4 < *(int *)(param_1 + 0x34));
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0x34)) {
      do {
        uVar1 = *(undefined4 *)(param_1 + 0x100);
        FUN_0078c730(uVar1);
        uVar1 = FUN_0078c760(uVar1);
        puVar2 = (undefined4 *)FUN_00513bc0(local_508,uVar1);
        puVar5 = local_788;
        for (iVar4 = 0x9f; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar4 = *(int *)(param_1 + 0x100) + 1;
        *(int *)(param_1 + 0x100) = iVar4;
        if (local_758 != 0) goto LAB_005140f7;
      } while (iVar4 < *(int *)(param_1 + 0x34));
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0x34)) {
      do {
        uVar1 = *(undefined4 *)(param_1 + 0x100);
        FUN_0078c730(uVar1);
        uVar1 = FUN_0078c760(uVar1);
        puVar2 = (undefined4 *)FUN_00513bc0(local_508,uVar1);
        puVar5 = local_788;
        for (iVar4 = 0x9f; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar4 = *(int *)(param_1 + 0x100) + 1;
        *(int *)(param_1 + 0x100) = iVar4;
        if (local_774 != 0) goto LAB_005140f7;
      } while (iVar4 < *(int *)(param_1 + 0x34));
    }
  }
  local_730 = 0;
LAB_005140f7:
  puVar2 = local_788;
  for (iVar4 = 0x9f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

