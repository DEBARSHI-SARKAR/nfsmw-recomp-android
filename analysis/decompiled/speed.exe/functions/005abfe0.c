/* speed.exe 005abfe0 FUN_005abfe0; analysis pseudocode, not buildable source.
 * calls 005790c0 FUN_005790c0
 * calls 005abbc0 FUN_005abbc0
 * calls 005942a0 FUN_005942a0
 * calls 0059c410 FUN_0059c410
 * calls 005abf80 FUN_005abf80
 * calls 0059c330 FUN_0059c330
 * calls 00577790 FUN_00577790
 * calls 0058aed0 FUN_0058aed0
 * calls 005942d0 FUN_005942d0
 * calls 005abd70 FUN_005abd70
 * calls 005942c0 FUN_005942c0
 */

uint FUN_005abfe0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 local_20 [4];
  undefined1 local_1c [8];
  uint local_14;
  uint local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  puVar6 = &param_1;
  puVar5 = local_8;
  FUN_005abd70(puVar5,puVar6);
  FUN_0059c410(puVar5,puVar6);
  puVar5 = local_1c;
  FUN_005abd70(puVar5);
  uVar3 = FUN_005942c0(puVar5);
  cVar2 = FUN_00577790(uVar3);
  uVar4 = 0;
  if (cVar2 != '\0') {
    puVar6 = &param_1;
    puVar5 = local_c;
    FUN_005abbc0(puVar5,puVar6);
    FUN_0059c330(puVar5,puVar6);
    puVar5 = local_20;
    FUN_005abbc0(puVar5);
    uVar3 = FUN_005942a0(puVar5);
    uVar4 = FUN_0058aed0(uVar3);
    if ((uVar4 & 0xff) != 0) {
      uVar3 = FUN_005942d0();
      FUN_005790c0(uVar3);
      local_10 = local_14;
      if (*(int *)(local_14 + 0x30) == 0) {
        iVar1 = *(int *)(local_14 + 0x18);
        if (iVar1 == 0) {
          **(undefined4 **)(local_14 + 0x24) = *(undefined4 *)(local_14 + 0x20);
        }
        else if (iVar1 == 1) {
          **(int **)(local_14 + 0x24) = **(int **)(local_14 + 0x24) + *(int *)(local_14 + 0x20);
        }
        else if (iVar1 == 2) {
          **(int **)(local_14 + 0x24) = **(int **)(local_14 + 0x24) - *(int *)(local_14 + 0x20);
        }
        *(undefined4 *)(local_14 + 0x30) = 1;
        uVar4 = local_14;
      }
      else {
        uVar4 = FUN_005abf80(param_1);
      }
    }
  }
  return uVar4;
}

