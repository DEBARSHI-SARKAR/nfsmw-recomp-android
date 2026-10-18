/* speed.exe 00786750 FUN_00786750; analysis pseudocode, not buildable source.
 * calls 00762d00 FUN_00762d00
 * calls 005d0370 FUN_005d0370
 * calls 00778f80 FUN_00778f80
 * calls 00783d70 FUN_00783d70
 * calls 0077fdf0 FUN_0077fdf0
 */

undefined4 __thiscall FUN_00786750(int param_1,int param_2,undefined4 *param_3,char param_4)

{
  char cVar1;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 1;
  local_28 = *param_3;
  local_20 = param_3[2];
  local_24 = (float)param_3[1] + *(float *)(param_1 + 0x34);
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    cVar1 = FUN_00762d00(&local_28,param_1);
    if ((cVar1 != '\0') && (param_4 != '\0')) {
      ExceptionList = local_c;
      return 0;
    }
  }
  if (param_2 != 0) {
    FUN_00778f80(param_2,&local_28);
    ExceptionList = local_c;
    return 1;
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  FUN_0077fdf0(0x10);
  FUN_00783d70(local_1c,&local_28,0,1);
  FUN_00778f80(local_1c,&local_28);
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    FUN_005d0370(local_18,(local_10 - local_18 >> 2) << 2,0);
  }
  ExceptionList = local_c;
  return 1;
}

