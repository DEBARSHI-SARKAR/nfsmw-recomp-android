/* speed.exe 007d2420 __CrtSetReportHook2; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c7290 __free_dbg
 * calls 007d0eb0 __mtinitlocknum
 * calls 007d264a FUN_007d264a
 * calls 007d2655 FUN_007d2655
 * calls 007cb270 FUN_007cb270
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    __CrtSetReportHook2
   
   Library: Visual Studio 2003 Debug */

undefined4 __CrtSetReportHook2(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bcd00;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if (((param_1 == 0) || (param_1 == 1)) && (param_2 != 0)) {
    ExceptionList = &pvStack_14;
    iVar2 = __mtinitlocknum(0xf);
    if (iVar2 != 0) {
      __lock(0xf);
      local_8 = 0;
      for (local_20 = DAT_009c530c; (local_20 != (int *)0x0 && (local_20[3] != param_2));
          local_20 = (int *)local_20[1]) {
      }
      if (param_1 == 1) {
        if (local_20 == (int *)0x0) {
          puVar1 = (undefined4 *)FUN_007cb270();
          *puVar1 = 0x16;
        }
        else {
          local_20[2] = local_20[2] + -1;
          if (local_20[2] == 0) {
            if (local_20[1] != 0) {
              *(int *)local_20[1] = *local_20;
            }
            if (*local_20 == 0) {
              DAT_009c530c = (int *)local_20[1];
            }
            else {
              *(int *)(*local_20 + 4) = local_20[1];
            }
            __free_dbg(local_20,2);
          }
        }
      }
      else if (local_20 == (int *)0x0) {
        piVar3 = (int *)__malloc_dbg(0x10,2,"dbgrpt.c",0x125);
        if (piVar3 == (int *)0x0) {
          puVar1 = (undefined4 *)FUN_007cb270();
          *puVar1 = 0xc;
        }
        else {
          *piVar3 = 0;
          piVar3[1] = (int)DAT_009c530c;
          if (DAT_009c530c != (int *)0x0) {
            *DAT_009c530c = (int)piVar3;
          }
          piVar3[2] = 1;
          piVar3[3] = param_2;
          DAT_009c530c = piVar3;
        }
      }
      else {
        local_20[2] = local_20[2] + 1;
        if (local_20 != DAT_009c530c) {
          if (local_20[1] != 0) {
            *(int *)local_20[1] = *local_20;
          }
          *(int *)(*local_20 + 4) = local_20[1];
          *local_20 = 0;
          local_20[1] = (int)DAT_009c530c;
          *DAT_009c530c = (int)local_20;
          DAT_009c530c = local_20;
        }
      }
      local_8 = 0xffffffff;
      FUN_007d264a();
      uVar4 = FUN_007d2655();
      return uVar4;
    }
  }
  else {
    ExceptionList = &pvStack_14;
    puVar1 = (undefined4 *)FUN_007cb270();
    *puVar1 = 0x16;
  }
  ExceptionList = pvStack_14;
  return 0xffffffff;
}

