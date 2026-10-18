/* speed.exe 00593090 FUN_00593090; analysis pseudocode, not buildable source.
 * calls 00524850 FUN_00524850
 * calls 005750d0 FUN_005750d0
 * calls 005af1c0 FUN_005af1c0
 * calls 00516af0 FUN_00516af0
 */

undefined4 * __thiscall
FUN_00593090(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00872b14;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089d204;
  *(undefined1 *)(param_1 + 1) = 0;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  puVar1 = param_1 + 4;
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  local_4 = 1;
  uStack_3 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = param_2;
  FUN_005750d0(param_2,"scrollbar",1,1,0);
  *(undefined1 *)(param_1 + 0x25) = param_5;
  param_1[0x26] = &PTR_LAB_0089b10c;
  uVar2 = FUN_005af1c0(&DAT_008a051c);
  param_1[0x28] = uVar2;
  uVar2 = FUN_005af1c0(&DAT_008a0bb0);
  param_1[0x27] = uVar2;
  uVar2 = FUN_005af1c0("HIGHLIGHT");
  param_1[0x29] = uVar2;
  uVar2 = FUN_005af1c0("UNHIGHLIGHT");
  param_1[0x2a] = uVar2;
  _local_4 = CONCAT31(uStack_3,2);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2b] = 0xc407210;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[10] = 0;
  uVar2 = FUN_005af1c0("ARRAY_SCROLL_REGION");
  uVar2 = FUN_00524850(param_2,uVar2);
  param_1[0x24] = uVar2;
  uVar2 = FUN_00516af0(param_1[0xb]);
  param_1[0xc] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

