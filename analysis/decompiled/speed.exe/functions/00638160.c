/* speed.exe 00638160 FUN_00638160; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_00638160(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6ae0;
  local_4 = 0;
  if (param_1[3] != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[3]);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      piVar2 = (int *)FUN_005d59f0(&LAB_004039c0);
      if (piVar2 != (int *)0x0) {
        if (param_1[2] == 0) {
          (**(code **)(*piVar2 + 0x20))();
        }
        else {
          (**(code **)(*piVar2 + 0x24))();
        }
      }
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

