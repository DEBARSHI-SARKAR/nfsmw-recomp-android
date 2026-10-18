/* speed.exe 005fdda0 FUN_005fdda0; analysis pseudocode, not buildable source.
 * calls 00624770 FUN_00624770
 * calls 00627400 FUN_00627400
 * calls 005eda20 FUN_005eda20
 * calls 005fbe70 FUN_005fbe70
 */

void __thiscall FUN_005fdda0(uint *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087608f;
  local_c = ExceptionList;
  if (DAT_0091e000 != 0) {
    iVar3 = *(int *)(DAT_0091e000 + 0x1960);
    ExceptionList = &local_c;
    if ((*(int *)(DAT_0091e000 + 0x1968) == 0) ||
       (ExceptionList = &local_c, cVar2 = FUN_005fbe70(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((iVar3 == 0) || (bVar1)) {
      if ((param_2 & *param_1) == 0) {
        *param_1 = *param_1 | param_2;
        iVar3 = FUN_00627400(0xc);
        local_4 = 0;
        if (iVar3 != 0) {
          FUN_00624770(param_2);
        }
        uVar4 = *param_1;
        iVar3 = 0;
        local_4 = 0xffffffff;
        for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
          iVar3 = iVar3 + (uVar4 & 1);
        }
        FUN_005eda20("total_infractions",(float)iVar3);
      }
      param_1[1] = param_1[1] + 1;
    }
  }
  ExceptionList = local_c;
  return;
}

