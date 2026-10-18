/* speed.exe 005a34e0 FUN_005a34e0; analysis pseudocode, not buildable source.
 * calls 00573870 FUN_00573870
 * calls 0059bc40 FUN_0059bc40
 */

undefined4 * __thiscall FUN_005a34e0(undefined4 *param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873668;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0059bc40(param_2);
  *param_1 = &PTR_FUN_008a1d2c;
  param_1[0x52] = 0;
  local_4 = 0;
  if (*(char *)((int)param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(undefined1 *)((int)param_1 + 0x119) = 1;
    *(undefined1 *)((int)param_1 + 0x11a) = 0;
    param_1[0x44] = 0;
  }
  (**(code **)(param_1[0xb] + 0x40))(0);
  FUN_00573870();
  param_1[0x52] = DAT_00925b14;
  ExceptionList = param_1;
  return param_1;
}

