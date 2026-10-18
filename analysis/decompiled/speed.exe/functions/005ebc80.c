/* speed.exe 005ebc80 FUN_005ebc80; analysis pseudocode, not buildable source.
 * calls 00425200 FUN_00425200
 * calls 0062c9a0 FUN_0062c9a0
 * calls 005d59f0 FUN_005d59f0
 * calls 005dd930 FUN_005dd930
 * calls 00627400 FUN_00627400
 * calls 006f1170 FUN_006f1170
 */

undefined4 __thiscall FUN_005ebc80(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087553f;
  local_c = ExceptionList;
  if (((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1960) == 0)) &&
     (*(char *)(param_1 + 0x2b4) == '\0')) {
    ExceptionList = &local_c;
    iVar1 = FUN_005dd930(param_2);
    if (iVar1 != 0) {
      iVar2 = FUN_00627400(0xc);
      local_4 = 0;
      if (iVar2 != 0) {
        FUN_0062c9a0(0);
      }
      local_4 = 0xffffffff;
      DAT_009aac81 = 0;
      FUN_006f1170(iVar1 + 0x28,0);
      piVar3 = (int *)FUN_00425200(1);
      (**(code **)(*piVar3 + 4))();
      piVar3 = (int *)FUN_005d59f0(&LAB_004040e0);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x68))(iVar1 + 0x28,iVar1 + 0x34);
        (**(code **)(*piVar3 + 0x84))();
      }
      *(undefined1 *)(param_1 + 0x2b5) = param_3;
      *(undefined4 *)(param_1 + 0x2b8) = param_2;
      *(undefined1 *)(param_1 + 0x2b4) = 1;
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

