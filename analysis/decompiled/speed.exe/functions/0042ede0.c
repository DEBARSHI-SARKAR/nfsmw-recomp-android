/* speed.exe 0042ede0 FUN_0042ede0; analysis pseudocode, not buildable source.
 * calls 00428450 FUN_00428450
 * calls 005d59f0 FUN_005d59f0
 * calls 00418d90 FUN_00418d90
 */

undefined4 * __thiscall FUN_0042ede0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868368;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00418d90(param_2,param_3);
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_00891090;
  param_1[2] = &PTR_LAB_00891088;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x65) = 0;
  param_1[0x1b] = 0xccbebc20;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  local_4 = 0;
  uVar1 = (**(code **)(*(int *)*param_2 + 0x54))();
  param_1[0x12] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00404020);
  param_1[0x13] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00403f90);
  param_1[0x14] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00405240);
  param_1[0x15] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_004037e0);
  param_1[0x1d] = uVar1;
  *(undefined1 *)((int)param_1 + 0x67) = 0;
  FUN_00428450();
  ExceptionList = pvStack_c;
  return param_1;
}

