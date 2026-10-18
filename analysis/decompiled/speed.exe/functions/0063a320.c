/* speed.exe 0063a320 FUN_0063a320; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 * calls 00447770 FUN_00447770
 */

void __fastcall FUN_0063a320(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008792b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a703c;
  local_4 = 0;
  if (param_1[3] != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[3]);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      piVar2 = (int *)FUN_005d59f0(&LAB_004040e0);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc0))(1);
        FUN_00447770(piVar2);
        if (param_1[2] != 0) {
          piVar2 = (int *)FUN_005d59f0(&LAB_00405000);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x10))();
          }
        }
      }
      *param_1 = &PTR_LAB_008a66f8;
      ExceptionList = local_c;
      return;
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

