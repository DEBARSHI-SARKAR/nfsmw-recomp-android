/* speed.exe 00533650 FUN_00533650; analysis pseudocode, not buildable source.
 * calls 00794790 FUN_00794790
 * calls 00525220 FUN_00525220
 * calls 00586290 FUN_00586290
 * calls 0078b350 FUN_0078b350
 * calls 0083cd10 FUN_0083cd10
 * calls 0056e300 FUN_0056e300
 * calls 00799eb0 FUN_00799eb0
 */

undefined4 * __thiscall FUN_00533650(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089b294;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  param_1[0x10] = 0xffffffff;
  FUN_00794790();
  cVar1 = FUN_0078b350();
  if (cVar1 == '\0') {
    uVar2 = param_1[4];
    uVar3 = 0xd5344356;
  }
  else if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
    uVar2 = param_1[4];
    uVar3 = 0x1b9c916e;
  }
  else {
    uVar2 = param_1[4];
    uVar3 = 0x60129941;
  }
  FUN_00525220(uVar2,0x42adb44c,uVar3);
  if (*(int *)(DAT_0091cf90 + 0x19c) == 0) {
    FUN_00799eb0();
    FUN_0083cd10(0,0);
    FUN_0056e300(1);
  }
  param_1[0xe] = 1;
  if (DAT_0091ca6f == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  ExceptionList = local_c;
  return param_1;
}

