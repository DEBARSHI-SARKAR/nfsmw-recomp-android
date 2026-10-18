/* speed.exe 005583d0 FUN_005583d0; analysis pseudocode, not buildable source.
 * calls 0079a9e0 FUN_0079a9e0
 * calls 0054dc90 FUN_0054dc90
 * calls 00586290 FUN_00586290
 * calls 00525220 FUN_00525220
 * calls 007902f0 FUN_007902f0
 */

undefined4 * __thiscall FUN_005583d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_LAB_0089cbe4;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((int)param_1 + 0x14d) = 0;
  *(undefined1 *)((int)param_1 + 0x14e) = 0;
  *(undefined1 *)((int)param_1 + 0x14f) = 0;
  local_4 = 0;
  if (DAT_0091cacc == 0) {
    puVar2 = &DAT_0091c39c;
    uVar1 = DAT_0091c340;
    FUN_0079a9e0(&DAT_0091c39c,DAT_0091c340);
    uVar1 = FUN_007902f0(puVar2,uVar1);
    param_1[0x52] = uVar1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x14e) = 1;
    if (*(char *)(DAT_0091cacc + 0x110) != '\x01') {
      uVar1 = param_1[4];
      uVar3 = 0x1a294dad;
      goto LAB_0055847e;
    }
  }
  uVar1 = param_1[4];
  uVar3 = 0x2c119933;
LAB_0055847e:
  FUN_00525220(uVar1,0xfb8b67d1,uVar3);
  FUN_00525220(param_1[4],0xf9363f30,0x4f876b6f);
  FUN_00525220(param_1[4],0xfde09072,0x308db484);
  FUN_0054dc90();
  ExceptionList = local_c;
  return param_1;
}

