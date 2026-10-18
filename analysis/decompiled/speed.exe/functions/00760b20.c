/* speed.exe 00760b20 FUN_00760b20; analysis pseudocode, not buildable source.
 * calls 0074d510 FUN_0074d510
 * calls 00581c20 FUN_00581c20
 * calls 0056db40 FUN_0056db40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00760b20(int param_1,undefined1 param_2,undefined1 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0074d510(0);
  local_4 = 0;
  FUN_00581c20();
  FUN_0056db40();
  *(undefined4 *)(param_1 + 0x1254) = 0;
  *(undefined4 *)(param_1 + 0x1258) = 0;
  *(undefined4 *)(param_1 + 0x125c) = 0;
  *(undefined1 *)(param_1 + 0x1148) = param_2;
  *(undefined1 *)(param_1 + 0x1154) = param_3;
  *(undefined1 *)(param_1 + 0x1149) = 0xff;
  *(undefined4 *)(param_1 + 0x114c) = 100;
  *(undefined4 *)(param_1 + 0x1150) = 0;
  *(undefined4 *)(param_1 + 0x1144) = 0;
  *(undefined1 *)(param_1 + 0x1155) = 0;
  *(undefined4 *)(param_1 + 0x1228) = 0;
  *(undefined4 *)(param_1 + 0x1260) = 0;
  *(undefined4 *)(param_1 + 0x1250) = 0;
  *(undefined4 *)(param_1 + 0x1258) = 0;
  *(undefined4 *)(param_1 + 0x1254) = 0;
  *(undefined4 *)(param_1 + 0x124c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1264) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x122c) = 0;
  *(undefined4 *)(param_1 + 0x1230) = 0;
  *(undefined4 *)(param_1 + 0x1234) = 0;
  *(undefined4 *)(param_1 + 0x1238) = 0;
  *(undefined4 *)(param_1 + 0x123c) = 0;
  *(undefined4 *)(param_1 + 0x1240) = 0;
  *(undefined4 *)(param_1 + 0x1244) = 0;
  *(undefined4 *)(param_1 + 0x1248) = 0;
  *(undefined4 *)(param_1 + 0x125c) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x1168);
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (DAT_00926064 == 0) {
    if (param_4 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x1156) = 0;
      *(undefined4 *)(param_1 + 0x115a) = 0;
      *(undefined4 *)(param_1 + 0x115e) = 0;
      *(undefined4 *)(param_1 + 0x1162) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1156) = *param_4;
      *(undefined4 *)(param_1 + 0x115a) = param_4[1];
      *(undefined4 *)(param_1 + 0x115e) = param_4[2];
      *(undefined4 *)(param_1 + 0x1162) = param_4[3];
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1156) = DAT_008b5364;
    *(undefined4 *)(param_1 + 0x115a) = DAT_008b5368;
    *(undefined4 *)(param_1 + 0x115e) = _DAT_008b536c;
    *(undefined4 *)(param_1 + 0x1162) = s_BCULLABLE_CAR_PART_UNDERNEATH_008b536f._1_4_;
  }
  ExceptionList = local_c;
  return param_1;
}

