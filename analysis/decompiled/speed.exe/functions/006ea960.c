/* speed.exe 006ea960 FUN_006ea960; analysis pseudocode, not buildable source.
 * calls 0062c9a0 FUN_0062c9a0
 * calls 0047b520 FUN_0047b520
 * calls 00447970 FUN_00447970
 * calls 006ff2d0 FUN_006ff2d0
 * calls 0070e570 FUN_0070e570
 * calls 00627400 FUN_00627400
 */

undefined4 __fastcall FUN_006ea960(int param_1)

{
  void **ppvVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087e89f;
  local_c = ExceptionList;
  if (((DAT_008ee348 < 1) &&
      (((*(char *)(param_1 + 0x3a0) == '\0' || (DAT_00926144 != 0)) &&
       (*(int *)(param_1 + 0x2ac) == 5)))) &&
     ((*(int *)(param_1 + 0x2b4) != 1 && (*(int *)(param_1 + 0x2b4) != 2)))) {
    ppvVar1 = &local_c;
    if (*(char *)(param_1 + 0x3a1) != '\0') {
      if (*(float *)(param_1 + 0x3b4) < *(float *)(param_1 + 0x1c)) {
        return 0;
      }
      ExceptionList = &local_c;
      *(undefined1 *)(param_1 + 0x3b1) = 1;
      ppvVar1 = ExceptionList;
    }
    ExceptionList = ppvVar1;
    if (*(int **)(param_1 + 0x370) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x370) + 0x4c))(DAT_009885d8,1,0);
    }
    *(undefined4 *)(param_1 + 0x2ac) = 7;
    FUN_0070e570();
    piVar2 = (int *)FUN_006ff2d0(1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x48))();
    }
    FUN_0047b520();
    if (*(int *)(param_1 + 0x354) != 0) {
      FUN_00447970();
    }
    iVar3 = FUN_00627400(0xc);
    uStack_4 = 0;
    if (iVar3 != 0) {
      FUN_0062c9a0(0);
    }
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}

