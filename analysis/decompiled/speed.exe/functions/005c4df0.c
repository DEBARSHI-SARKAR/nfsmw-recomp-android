/* speed.exe 005c4df0 FUN_005c4df0; analysis pseudocode, not buildable source.
 * calls 005b5b10 FUN_005b5b10
 * calls 005b2100 FUN_005b2100
 * calls 005b1560 FUN_005b1560
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005b3bd0 FUN_005b3bd0
 * calls 005c4d90 FUN_005c4d90
 */

int __thiscall FUN_005c4df0(undefined1 *param_1,char *param_2,byte param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined **local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874818;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_005b5b10(param_2,*(undefined4 *)(param_1 + 0xf0));
  if (iVar4 == 0) {
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    cVar3 = (char)pcVar5 - ((char)pcVar2 + '\x01');
    pcVar5 = pcVar2 + cVar3 + -1;
    cVar1 = *pcVar5;
    for (; ((cVar1 != '/' && (cVar1 != '\\')) && ('\0' < cVar3)); cVar3 = cVar3 + -1) {
      cVar1 = pcVar5[-1];
      pcVar5 = pcVar5 + -1;
    }
    if (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
    }
    iVar4 = FUN_005b5b10(pcVar5,*(undefined4 *)(param_1 + 0xf0));
    if (iVar4 == 0) {
      iVar4 = (**(code **)**(undefined4 **)(param_1 + 0x108))(pcVar2,&local_10,&param_2);
      if (iVar4 == 0) {
        ExceptionList = pvStack_c;
        return 0;
      }
      iVar4 = FUN_005c4d90(iVar4,0);
      if ((char)param_2 != '\0') {
        thunk_FUN_007c7250(local_10);
      }
      if (iVar4 == 0) {
        ExceptionList = pvStack_c;
        return 0;
      }
      goto LAB_005c4eb5;
    }
  }
  local_14 = &PTR_FUN_008a2c80;
  local_4 = 0;
  *(undefined1 *)(iVar4 + 0x15) = 1;
  FUN_005b1560(&local_14);
  FUN_005b3bd0(iVar4);
  local_4 = 0xffffffff;
  local_14 = &PTR_LAB_0089b064;
LAB_005c4eb5:
  *(undefined4 *)(iVar4 + 0x20) = param_4;
  *(uint *)(iVar4 + 0x1c) = (uint)param_3;
  *(undefined1 *)(iVar4 + 0x14) = *param_1;
  if (*(int **)(param_1 + 0x108) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x108) + 0xc))(iVar4);
  }
  FUN_005b2100(iVar4);
  ExceptionList = pvStack_c;
  return iVar4;
}

