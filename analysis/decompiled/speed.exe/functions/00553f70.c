/* speed.exe 00553f70 FUN_00553f70; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00761140 FUN_00761140
 * calls 0064a3c0 FUN_0064a3c0
 * calls 00516af0 FUN_00516af0
 * calls 0079f450 FUN_0079f450
 * calls 00586290 FUN_00586290
 * calls 00514c70 FUN_00514c70
 * calls 00592170 FUN_00592170
 * calls 00549a80 FUN_00549a80
 * calls 0056e300 FUN_0056e300
 * calls 0056e3c0 FUN_0056e3c0
 */

undefined4 * __thiscall FUN_00553f70(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870a93;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089db78;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  FUN_00592170(param_1[4],&DAT_00890978,&DAT_00890978,1,1,0,1);
  local_4 = CONCAT31(local_4._1_3_,1);
  cVar1 = FUN_0064a3c0();
  if (cVar1 != '\0') goto LAB_0055403c;
  if (param_1[4] == 0) {
LAB_00553fff:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(param_1[4]);
    if (iVar2 == 0) goto LAB_00553fff;
    iVar2 = FUN_005b8550(0xbe3c17b7);
    if (iVar2 == 0) goto LAB_00553fff;
  }
  FUN_00514c70(iVar2);
  if (param_1[4] == 0) {
LAB_00554031:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(param_1[4]);
    if (iVar2 == 0) goto LAB_00554031;
    iVar2 = FUN_005b8550(0xca8ca439);
    if (iVar2 == 0) goto LAB_00554031;
  }
  FUN_00514c70(iVar2);
LAB_0055403c:
  FUN_00549a80();
  if (1 < *(int *)(DAT_0091cf90 + 0x19c)) {
    FUN_0079f450();
    FUN_00761140(0);
    FUN_0056e300(1);
  }
  FUN_0056e3c0(&DAT_00890978);
  iVar2 = DAT_0091ca68;
  *(undefined1 *)(DAT_0091ca68 + 8) = 0;
  *(undefined1 *)(iVar2 + 9) = 0;
  *(undefined1 *)(iVar2 + 10) = 0;
  *(undefined1 *)(iVar2 + 0xc) = 0;
  *(undefined1 *)(iVar2 + 0xd) = 0;
  *(undefined1 *)(iVar2 + 0xf) = 0;
  *(undefined1 *)(iVar2 + 0xe) = 0;
  *(undefined1 *)(iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar2 + 0x11) = 0;
  *(undefined4 *)(iVar2 + 4) = 0xffffffff;
  ExceptionList = pvStack_c;
  return param_1;
}

