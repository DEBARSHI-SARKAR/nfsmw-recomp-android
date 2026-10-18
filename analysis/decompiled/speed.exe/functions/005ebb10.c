/* speed.exe 005ebb10 FUN_005ebb10; analysis pseudocode, not buildable source.
 * calls 0074d320 FUN_0074d320
 * calls 007303d0 FUN_007303d0
 * calls 00621e80 FUN_00621e80
 * calls 0041ace0 FUN_0041ace0
 * calls 005d59f0 FUN_005d59f0
 * calls 005dd930 FUN_005dd930
 * calls 00627400 FUN_00627400
 */

void __fastcall FUN_005ebb10(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087551f;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x2b4) == '\0') {
    return;
  }
  ExceptionList = &local_c;
  cVar1 = FUN_007303d0();
  if (cVar1 != '\0') {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_1 + 0x2b8) != 0) {
    iVar2 = FUN_005dd930(*(int *)(param_1 + 0x2b8));
    if (DAT_0092d884 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)*DAT_0092d87c;
    }
    (**(code **)(*piVar3 + 4))();
    piVar3 = (int *)FUN_005d59f0(&LAB_004040e0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x68))(iVar2 + 0x28,iVar2 + 0x34);
      (**(code **)(*piVar3 + 0x80))();
    }
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    if (*(char *)(param_1 + 0x2b5) != '\0') {
      FUN_0074d320();
      FUN_0041ace0();
      (**(code **)(*DAT_0092c674 + 4))(1);
      (**(code **)(*DAT_0092c67c + 8))(1);
      (**(code **)(*DAT_0092c67c + 0x2c))(0);
      (**(code **)(*DAT_0092c67c + 0x34))(1);
    }
  }
  if (*(char *)(param_1 + 0x2b5) != '\0') {
    cVar1 = (**(code **)(*DAT_0092c67c + 0x20))();
    if (cVar1 == '\0') {
      (**(code **)(*DAT_0092c67c + 0x34))(1);
      goto LAB_005ebc2d;
    }
    *(undefined1 *)(param_1 + 0x2b5) = 0;
  }
  *(undefined1 *)(param_1 + 0x2b4) = 0;
LAB_005ebc2d:
  if (*(char *)(param_1 + 0x2b4) == '\0') {
    iVar2 = FUN_00627400(0xc);
    uStack_4 = 0;
    if (iVar2 != 0) {
      FUN_00621e80(0x161a918);
    }
  }
  ExceptionList = local_c;
  return;
}

