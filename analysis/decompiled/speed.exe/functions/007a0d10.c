/* speed.exe 007a0d10 FUN_007a0d10; analysis pseudocode, not buildable source.
 * calls 00758e90 FUN_00758e90
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00652ad0 _malloc
 * calls 00794180 FUN_00794180
 * calls 00794420 FUN_00794420
 * calls 00792300 FUN_00792300
 * calls 0079feb0 FUN_0079feb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a0d10(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int ***pppiVar5;
  int ***pppiVar6;
  int ***pppiVar7;
  void *pvVar8;
  int ***local_420;
  int ***local_41c;
  undefined1 local_418 [1024];
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088293b;
  local_c = ExceptionList;
  if (DAT_00905e19 == '\x01') {
    _DAT_009b9d3c = 0;
    _DAT_009b9d40 = 0;
    _DAT_009b9d44 = 0;
    DAT_00905e19 = '\0';
    _DAT_009b9d48 = 0;
  }
  ExceptionList = &local_c;
  if (*(int *)(&DAT_009b9d3c + param_2 * 4) == 0) {
    ExceptionList = &local_c;
    pvVar8 = _malloc(8);
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      *(void **)pvVar8 = pvVar8;
      *(void **)((int)pvVar8 + 4) = pvVar8;
    }
    *(void **)(&DAT_009b9d3c + param_2 * 4) = pvVar8;
  }
  local_10 = FUN_00792300(param_1,*(undefined4 *)(&DAT_009b9d3c + param_2 * 4));
  if (local_10 == '\x01') {
    local_418[0] = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_00794420(local_418,*(undefined4 *)(&DAT_009b9d3c + param_2 * 4));
    FUN_00758e90(local_418);
    piVar1 = *(int **)(&DAT_009b9d3c + param_2 * 4);
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)*piVar1;
      while (piVar2 != piVar1) {
        iVar3 = *piVar2;
        piVar4 = (int *)piVar2[1];
        *piVar4 = iVar3;
        *(int **)(iVar3 + 4) = piVar4;
        thunk_FUN_007c7250(piVar2);
        piVar2 = (int *)*piVar1;
      }
      thunk_FUN_007c7250(piVar1);
    }
    local_420 = (int ***)&local_420;
    *(undefined4 *)(&DAT_009b9d3c + param_2 * 4) = 0;
    local_4 = 0;
    local_14 = 0;
    local_41c = local_420;
    FUN_00794180(7,local_418,&local_420);
    if ((int ****)local_420 != &local_420) {
      do {
        pppiVar7 = local_420;
        FUN_0079feb0(param_2,7,local_420 + 3,1);
        pppiVar5 = (int ***)*local_420;
        pppiVar6 = (int ***)local_420[1];
        *pppiVar6 = (int **)pppiVar5;
        pppiVar5[1] = (int **)pppiVar6;
        if ((int ****)pppiVar7 != (int ****)0x0) {
          thunk_FUN_007c7250(pppiVar7);
        }
      } while ((int ****)local_420 != &local_420);
    }
  }
  ExceptionList = local_c;
  return;
}

