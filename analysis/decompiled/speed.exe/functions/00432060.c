/* speed.exe 00432060 FUN_00432060; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00403ed0 FUN_00403ed0
 * calls 00431ae0 FUN_00431ae0
 */

void __fastcall FUN_00432060(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00868598;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00891bb8;
  param_1[2] = &PTR_LAB_00891bb0;
  param_1[0x13] = &PTR_LAB_00891ad8;
  param_1[0x15] = &PTR_LAB_00891ad0;
  iVar1 = param_1[0x1cf];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00403ed0();
    FUN_005d0370(iVar1,0x84,0);
  }
  iVar1 = param_1[0x1d0];
  if (iVar1 != 0) {
    FUN_00403ed0();
    FUN_005d0370(iVar1,0x84,0);
  }
  iVar1 = param_1[0x1d1];
  if (iVar1 != 0) {
    FUN_00403ed0();
    FUN_005d0370(iVar1,0x84,0);
  }
  if ((undefined4 *)param_1[0x1d2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1d2])(1);
  }
  if ((undefined4 *)param_1[0x1d3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1d3])(1);
  }
  local_4 = 0xffffffff;
  FUN_00431ae0();
  ExceptionList = pvStack_c;
  return;
}

