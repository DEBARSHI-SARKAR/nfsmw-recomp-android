/* speed.exe 005094c0 FUN_005094c0; analysis pseudocode, not buildable source.
 * calls 00508ba0 FUN_00508ba0
 * calls 005081b0 FUN_005081b0
 * calls 0045d3a0 FUN_0045d3a0
 */

void __fastcall FUN_005094c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086df2b;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00508ba0(1);
  iVar2 = FUN_0045d3a0(param_1);
  if (iVar2 != 0) {
    DAT_00916a50 = DAT_00916a50 + -1;
    iVar2 = *param_1;
    piVar1 = (int *)param_1[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
  }
  if ((param_1[0x18] != 0) && ((code *)param_1[0x1b] != (code *)0x0)) {
    (*(code *)param_1[0x1b])(param_1[0x18],param_1);
  }
  local_4 = 0xffffffff;
  FUN_005081b0();
  ExceptionList = pvStack_c;
  return;
}

