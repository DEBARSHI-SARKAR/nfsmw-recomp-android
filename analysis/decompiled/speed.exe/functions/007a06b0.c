/* speed.exe 007a06b0 FUN_007a06b0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00761a80 FUN_00761a80
 * calls 00652ad0 _malloc
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00794180 FUN_00794180
 * calls 00794420 FUN_00794420
 * calls 00792300 FUN_00792300
 * calls 0079feb0 FUN_0079feb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a06b0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  int ***pppiVar6;
  void *pvVar7;
  int *piVar8;
  int ***local_424;
  int ***local_420;
  undefined4 local_41c;
  undefined1 local_418 [1024];
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008828fb;
  local_c = ExceptionList;
  if (DAT_00905e18 == '\x01') {
    _DAT_009b9d2c = 0;
    _DAT_009b9d30 = 0;
    _DAT_009b9d34 = 0;
    DAT_00905e18 = '\0';
    _DAT_009b9d38 = 0;
  }
  ExceptionList = &local_c;
  if (*(int *)(&DAT_009b9d2c + param_2 * 4) == 0) {
    ExceptionList = &local_c;
    pvVar7 = _malloc(8);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      *(void **)pvVar7 = pvVar7;
      *(void **)((int)pvVar7 + 4) = pvVar7;
    }
    *(void **)(&DAT_009b9d2c + param_2 * 4) = pvVar7;
  }
  local_10 = FUN_00792300(param_1,*(undefined4 *)(&DAT_009b9d2c + param_2 * 4));
  if (local_10 == '\x01') {
    local_418[0] = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_00794420(local_418,*(undefined4 *)(&DAT_009b9d2c + param_2 * 4));
    local_41c = 0;
    FUN_0078a3a0(&local_41c,0x20);
    piVar8 = &DAT_009b4254;
    do {
      if (*piVar8 == param_2) break;
      piVar8 = piVar8 + 7;
    } while ((int)piVar8 < 0x9b42a8);
    FUN_00761a80(local_41c,local_418);
    piVar8 = *(int **)(&DAT_009b9d2c + param_2 * 4);
    if (piVar8 != (int *)0x0) {
      piVar1 = (int *)*piVar8;
      while (piVar1 != piVar8) {
        iVar2 = *piVar1;
        piVar3 = (int *)piVar1[1];
        *piVar3 = iVar2;
        *(int **)(iVar2 + 4) = piVar3;
        thunk_FUN_007c7250(piVar1);
        piVar1 = (int *)*piVar8;
      }
      thunk_FUN_007c7250(piVar8);
    }
    local_424 = (int ***)&local_424;
    *(undefined4 *)(&DAT_009b9d2c + param_2 * 4) = 0;
    local_4 = 0;
    local_14 = 0;
    local_420 = local_424;
    FUN_00794180(1,local_418,&local_424);
    if ((int ****)local_424 != &local_424) {
      do {
        pppiVar6 = local_424;
        FUN_0079feb0(param_2,1,local_424 + 3,1);
        pppiVar4 = (int ***)*local_424;
        pppiVar5 = (int ***)local_424[1];
        *pppiVar5 = (int **)pppiVar4;
        pppiVar4[1] = (int **)pppiVar5;
        if ((int ****)pppiVar6 != (int ****)0x0) {
          thunk_FUN_007c7250(pppiVar6);
        }
      } while ((int ****)local_424 != &local_424);
    }
  }
  ExceptionList = local_c;
  return;
}

