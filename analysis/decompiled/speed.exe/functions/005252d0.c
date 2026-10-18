/* speed.exe 005252d0 FUN_005252d0; analysis pseudocode, not buildable source.
 * calls 004643d0 FUN_004643d0
 * calls 005b8550 FUN_005b8550
 * calls 005b1510 FUN_005b1510
 * calls 00515d20 FUN_00515d20
 * calls 00516af0 FUN_00516af0
 */

undefined4 FUN_005252d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined **local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e8a8;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00516af0(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(param_2);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x18) == 5) {
          FUN_004643d0(&DAT_0091c5c0,param_3,&stack0x00000010);
          local_14 = &PTR_FUN_0089b390;
          pppuVar2 = &local_14;
          local_4 = 0;
          local_10 = &DAT_0091c5c0;
          FUN_00516af0(param_1);
          FUN_005b1510(iVar1,pppuVar2);
          ExceptionList = local_c;
          return 0;
        }
        if (*(int *)(iVar1 + 0x18) == 2) {
          FUN_00515d20();
        }
        ExceptionList = local_c;
        return 0;
      }
    }
  }
  ExceptionList = local_c;
  return 0xffffffff;
}

