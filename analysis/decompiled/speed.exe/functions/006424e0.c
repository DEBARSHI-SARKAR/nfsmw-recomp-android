/* speed.exe 006424e0 FUN_006424e0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_006424e0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008799d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a76a4;
  local_4 = 0;
  if (param_1[2] == 0) {
    if (DAT_0092d884 != 0) {
      piVar2 = (int *)*DAT_0092d87c;
      goto LAB_0064253b;
    }
  }
  else if (DAT_0092d884 != 0) {
    piVar2 = (int *)DAT_0092d87c[DAT_0092d884 + -1];
    goto LAB_0064253b;
  }
  piVar2 = (int *)0x0;
LAB_0064253b:
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 4))();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005d59f0(&LAB_004040e0);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xd0))(param_1[3]);
      }
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

