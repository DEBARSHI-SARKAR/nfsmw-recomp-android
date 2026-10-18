/* speed.exe 00696180 FUN_00696180; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 004546c0 FUN_004546c0
 * calls 00454c30 FUN_00454c30
 * calls 00452c50 FUN_00452c50
 * calls 00452bd0 FUN_00452bd0
 * calls 00452b40 FUN_00452b40
 */

undefined4 FUN_00696180(undefined1 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c080;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_004546c0(local_1c,0x1f989f01);
  local_4 = 0;
  FUN_00452b40(uVar2);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00452bd0();
  cVar1 = FUN_00452c50();
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    FUN_00452bd0();
    ExceptionList = local_c;
    return 0;
  }
  if (local_20 == (undefined1 *)0x0) {
    local_20 = (undefined1 *)FUN_00454c30(param_2);
LAB_006961f3:
    if (local_20 != (undefined1 *)0x0) goto LAB_00696201;
  }
  else if (param_2 == 0) goto LAB_006961f3;
  local_20 = (undefined1 *)FUN_006269b0(1);
LAB_00696201:
  *param_1 = *local_20;
  local_4 = 0xffffffff;
  FUN_00452bd0();
  ExceptionList = local_c;
  return 1;
}

