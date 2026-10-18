/* speed.exe 00641e20 FUN_00641e20; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_00641e20(undefined4 *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a734c;
  local_4 = 0;
  if ((DAT_0092cd84 != 0) && (*DAT_0092cd7c != 0)) {
    piVar1 = (int *)FUN_005d59f0(&LAB_00620250);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(0);
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

