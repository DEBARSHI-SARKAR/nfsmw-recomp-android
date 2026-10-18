/* speed.exe 00677540 FUN_00677540; analysis pseudocode, not buildable source.
 * calls 006722c0 FUN_006722c0
 * calls 0066a6a0 FUN_0066a6a0
 * calls 0066b670 FUN_0066b670
 * calls 005d29d0 FUN_005d29d0
 * calls 0066b020 FUN_0066b020
 */

int __thiscall
FUN_00677540(int *param_1,undefined4 *param_2,undefined4 **param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087aac2;
  local_c = ExceptionList;
  if (((param_1[0x25] != 0) && ((char)param_1[5] == '\0')) && (DAT_0092d944 < 0x8f9)) {
    puStack_24 = &param_2;
    iStack_28 = 0x677596;
    ExceptionList = &local_c;
    iVar2 = FUN_0066b020();
    if (-1 < iVar2) {
      puStack_24 = (undefined4 *)0x6775a7;
      iStack_28 = (**(code **)(*param_1 + 0x40))();
      puStack_24 = param_3;
      iStack_2c = 0x6775b9;
      iVar3 = FUN_0066a6a0();
      if (iVar3 != 0) {
        param_3 = &puStack_24;
        puStack_24 = param_4;
        iStack_28 = 0x6775d5;
        param_3 = (undefined4 **)FUN_0066b670();
        if ((param_3 != (undefined4 **)0x0) &&
           (iVar1 = *(int *)((iVar2 + 1) * 0x10 + param_1[0x25]), iVar1 != 0)) {
          puStack_24 = (undefined4 *)0x0;
          iStack_28 = 0xe4;
          iStack_2c = 0x677608;
          param_4 = (undefined4 *)FUN_005d29d0();
          uStack_4 = 0;
          if (param_4 != (undefined4 *)0x0) {
            iStack_2c = param_1[0x25];
            puStack_24 = (undefined4 *)0x1;
            iStack_30 = (int)param_3;
            param_3 = (undefined4 **)&uStack_38;
            uStack_38 = param_2;
            uStack_40 = *(undefined4 *)(iVar1 + 8);
            param_2 = &uStack_40;
            iStack_3c = iVar3;
            piStack_34 = param_1 + -0xd;
            iStack_28 = iVar2;
            iVar2 = FUN_006722c0();
            if (iVar2 != 0) {
              ExceptionList = local_c;
              return iVar2 + 0x34;
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

