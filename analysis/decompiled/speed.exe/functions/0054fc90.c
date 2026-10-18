/* speed.exe 0054fc90 FUN_0054fc90; analysis pseudocode, not buildable source.
 * calls 0078aed0 FUN_0078aed0
 * calls 007a0f50 FUN_007a0f50
 * calls 0059bc40 FUN_0059bc40
 * calls 00544e50 FUN_00544e50
 */

undefined4 * __thiscall FUN_0054fc90(undefined4 *param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008707d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0059bc40(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089ead4;
  *(undefined1 *)(param_1 + 0x52) = 0;
  FUN_007a0f50();
  FUN_0078aed0();
  if (DAT_0091ca68 != (undefined4 *)0x0) {
    (**(code **)*DAT_0091ca68)(1);
  }
  DAT_0091ca68 = (undefined4 *)0x0;
  DAT_0091ca60 = 0;
  DAT_0091ca64 = 0;
  DAT_0091ca5c = 0;
  DAT_0091ca65 = 0;
  *(undefined1 *)(DAT_0091cae0 + 1) = 0;
  FUN_00544e50();
  ExceptionList = pvStack_c;
  return param_1;
}

