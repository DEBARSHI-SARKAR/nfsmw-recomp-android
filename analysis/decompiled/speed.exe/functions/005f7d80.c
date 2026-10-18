/* speed.exe 005f7d80 FUN_005f7d80; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 * calls 00455bc0 FUN_00455bc0
 * calls 0042e340 FUN_0042e340
 * calls 005f7730 FUN_005f7730
 * calls 005e6a30 FUN_005e6a30
 * calls 005e6c40 FUN_005e6c40
 * calls 005d8660 FUN_005d8660
 * calls 005f1a10 FUN_005f1a10
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 005e60d0 FUN_005e60d0
 * calls 005e6b90 FUN_005e6b90
 */

undefined4 * __thiscall FUN_005f7d80(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875dbc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d8660(1);
  local_4 = 0;
  FUN_0042e340(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 2));
  *param_1 = &PTR_FUN_008a3ab4;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  local_4._0_1_ = 2;
  iVar1 = FUN_005e6a30();
  param_1[0x24] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0x24] + 4) = param_1[0x24];
  *(undefined4 *)param_1[0x24] = param_1[0x24];
  *(undefined4 *)(param_1[0x24] + 8) = param_1[0x24];
  param_1[0x25] = 0;
  local_4._0_1_ = 3;
  iVar1 = FUN_005e6b90();
  param_1[0x27] = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(undefined4 *)(param_1[0x27] + 4) = param_1[0x27];
  *(undefined4 *)param_1[0x27] = param_1[0x27];
  *(undefined4 *)(param_1[0x27] + 8) = param_1[0x27];
  param_1[0x28] = 0;
  local_4._0_1_ = 4;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((int)param_1 + 0x111) = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  iVar1 = FUN_005e6c40();
  param_1[0x4c] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0x4c] + 4) = param_1[0x4c];
  *(undefined4 *)param_1[0x4c] = param_1[0x4c];
  *(undefined4 *)(param_1[0x4c] + 8) = param_1[0x4c];
  param_1[0x4d] = 0;
  local_4._0_1_ = 5;
  iVar1 = FUN_005e6c40();
  param_1[0x4f] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0x4f] + 4) = param_1[0x4f];
  *(undefined4 *)param_1[0x4f] = param_1[0x4f];
  *(undefined4 *)(param_1[0x4f] + 8) = param_1[0x4f];
  param_1[0x50] = 0;
  local_4._0_1_ = 6;
  _eh_vector_constructor_iterator_
            (param_1 + 0x51,0x24,8,(_func_void_void_ptr *)&LAB_005e5040,
             (_func_void_void_ptr *)&DAT_005ddef0);
  local_4._0_1_ = 7;
  uVar2 = FUN_005e60d0();
  param_1[0xaa] = uVar2;
  param_1[0xab] = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined1 *)((int)param_1 + 0x2b5) = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined1 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)((int)param_1 + 0x2c9) = 0;
  *(undefined1 *)((int)param_1 + 0x2ca) = 0;
  *(undefined1 *)((int)param_1 + 0x2cb) = 0;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(undefined1 *)((int)param_1 + 0x2cd) = 0;
  *(undefined1 *)((int)param_1 + 0x2ce) = 0;
  *(undefined1 *)((int)param_1 + 0x2cf) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  uVar2 = FUN_00455bc0(0x5cea9d46);
  param_1[0x15] = uVar2;
  uVar2 = FUN_00455bc0(0xe4c3d904);
  param_1[0x16] = uVar2;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  puVar3 = param_1 + 0x99;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x2e;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_005f1a10(0x10);
  uVar2 = FUN_00465a70(0x4000,0);
  param_1[0x48] = uVar2;
  param_1[0x49] = uVar2;
  param_1[0x4a] = 0x4000;
  FUN_005f7730();
  ExceptionList = local_c;
  return param_1;
}

