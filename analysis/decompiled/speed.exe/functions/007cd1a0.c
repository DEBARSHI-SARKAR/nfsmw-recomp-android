/* speed.exe 007cd1a0 __freefls@4; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007d0fd0 __lock
 * calls 007cd2e8 FUN_007cd2e8
 * calls 007cd2f3 FUN_007cd2f3
 */

/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2003 Debug */

void __freefls_4(int param_1)

{
  int *piVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8d70;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &pvStack_14;
    if (*(int *)(param_1 + 0x24) != 0) {
      ExceptionList = &pvStack_14;
      __free_dbg(*(undefined4 *)(param_1 + 0x24),2);
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      __free_dbg(*(undefined4 *)(param_1 + 0x2c),2);
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      __free_dbg(*(undefined4 *)(param_1 + 0x34),2);
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      __free_dbg(*(undefined4 *)(param_1 + 0x3c),2);
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      __free_dbg(*(undefined4 *)(param_1 + 0x44),2);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      __free_dbg(*(undefined4 *)(param_1 + 0x48),2);
    }
    if (*(undefined **)(param_1 + 0x54) != &DAT_00906780) {
      __free_dbg(*(undefined4 *)(param_1 + 0x54),2);
    }
    __lock(0xd);
    local_8 = 0;
    piVar1 = *(int **)(param_1 + 0x60);
    if (((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) &&
       (piVar1 != DAT_009c50a4)) {
      __free_dbg(piVar1,2);
    }
    local_8 = 0xffffffff;
    FUN_007cd2e8();
    FUN_007cd2f3();
    return;
  }
  return;
}

