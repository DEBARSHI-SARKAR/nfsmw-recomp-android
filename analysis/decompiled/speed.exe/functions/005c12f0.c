/* speed.exe 005c12f0 FUN_005c12f0; analysis pseudocode, not buildable source.
 * calls 005bf940 FUN_005bf940
 */

undefined1 * __fastcall FUN_005c12f0(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874534;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined ***)(param_1 + 0xd8) = &PTR_FUN_008a2d48;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined ***)(param_1 + 0xe8) = &PTR_FUN_008a2d48;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined ***)(param_1 + 0xf8) = &PTR_FUN_008a2d48;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined ***)(param_1 + 0x4110) = &PTR_LAB_008a2c18;
  *(undefined4 *)(param_1 + 0x4118) = 0;
  *(undefined4 *)(param_1 + 0x411c) = 0;
  *(undefined4 *)(param_1 + 0x4114) = 0;
  *(undefined4 *)(param_1 + 0x4128) = 0;
  *(undefined4 *)(param_1 + 0x412c) = 0;
  *(undefined4 *)(param_1 + 0x4124) = 0;
  *(undefined ***)(param_1 + 0x4120) = &PTR_FUN_008a2d48;
  *(undefined4 *)(param_1 + 0x4138) = 0;
  *(undefined4 *)(param_1 + 0x413c) = 0;
  *(undefined4 *)(param_1 + 0x4134) = 0;
  *(undefined ***)(param_1 + 0x4130) = &PTR_FUN_008a2d48;
  param_1[0x4140] = 0;
  *param_1 = 1;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[0x524d] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  param_1[1] = 0;
  param_1[0x524c] = 0;
  param_1[0x524e] = 0;
  puVar2 = (undefined4 *)(param_1 + 0x80);
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x4144) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x4148);
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x5148) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x514c);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = 5;
  FUN_005bf940();
  ExceptionList = local_c;
  return param_1;
}

