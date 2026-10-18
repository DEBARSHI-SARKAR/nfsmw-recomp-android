/* speed.exe 0075c7f0 FUN_0075c7f0; analysis pseudocode, not buildable source.
 * calls 0075a5e0 FUN_0075a5e0
 * calls 0075c440 FUN_0075c440
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_0075c7f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00881313;
  piVar1 = (int *)*param_1;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (piVar1 != param_1) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 1;
    FUN_0075a5e0();
    piVar3 = (int *)piVar1[8];
    local_4 = (uint)local_4._1_3_ << 8;
    while (piVar3 != piVar1 + 8) {
      iVar2 = *piVar3;
      piVar4 = (int *)piVar3[1];
      *piVar4 = iVar2;
      *(int **)(iVar2 + 4) = piVar4;
      if (piVar3 + -1 != (int *)0x0) {
        (**(code **)piVar3[-1])(1);
      }
      piVar3 = (int *)piVar1[8];
    }
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)*param_1;
  }
  local_4 = 0xffffffff;
  FUN_0075c440();
  ExceptionList = pvStack_c;
  return;
}

