/* speed.exe 004ca920 FUN_004ca920; analysis pseudocode, not buildable source.
 * calls 004c7650 FUN_004c7650
 * calls 00652ad0 _malloc
 * calls 004ba050 FUN_004ba050
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ca920(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  float10 fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c124;
  local_c = ExceptionList;
  if (DAT_008f86f8 == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  fVar4 = (float10)FUN_004ba050(param_1);
  if ((fVar4 <= (float10)_DAT_00890fc8) && (*(int *)(param_1 + 0x38) != 0)) {
    pvVar1 = _malloc(0x110);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_004c7650(param_1,1);
    }
    local_4 = 0xffffffff;
    if (((puVar2[0x36] != 0) && (DAT_00911fa8 != 0)) && (DAT_00911f7c != (int *)0x0)) {
      piVar3 = (int *)(**(code **)(*DAT_00911f7c + 0xc))(puVar2);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xc))(puVar2);
        ExceptionList = pvVar1;
        return 0;
      }
    }
    (**(code **)*puVar2)(1);
  }
  ExceptionList = local_c;
  return 0;
}

