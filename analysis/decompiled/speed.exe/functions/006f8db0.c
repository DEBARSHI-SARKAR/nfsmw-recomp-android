/* speed.exe 006f8db0 FUN_006f8db0; analysis pseudocode, not buildable source.
 * calls 006f7fe0 FUN_006f7fe0
 * calls 00627400 FUN_00627400
 * calls 00641670 FUN_00641670
 * calls 006f7c80 FUN_006f7c80
 * calls 006f8430 FUN_006f8430
 */

void __fastcall FUN_006f8db0(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087f1be;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b0bb0;
  param_1[2] = &PTR_LAB_008b0ba8;
  param_1[0xb] = &PTR_LAB_008b0b80;
  param_1[0xe] = &PTR_LAB_008b0b64;
  param_1[0x13] = &PTR_LAB_008b0b10;
  param_1[0x15] = &PTR_FUN_008b0b08;
  local_4 = 1;
  if ((int *)param_1[0x16] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x16] + 0xc))();
    param_1[0x16] = 0;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    iVar1 = FUN_00627400(0xc);
    local_4._0_1_ = 2;
    if (iVar1 != 0) {
      FUN_00641670(0);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (param_1[0x1e] != 0) {
    param_1[9] = param_1[9] + -1;
    for (iVar1 = DAT_009885d0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      if (*(int *)(iVar1 + 0x20) == param_1[0x1e]) goto LAB_006f8e6e;
    }
    iVar1 = 0;
LAB_006f8e6e:
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x10;
  }
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 8))();
    param_1[0x1d] = 0;
  }
  if ((int *)param_1[0x1f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1f] + 4))();
  }
  FUN_006f7fe0(param_1 + 0x15,0);
  local_4 = local_4 & 0xffffff00;
  FUN_006f7c80();
  local_4 = 0xffffffff;
  FUN_006f8430();
  ExceptionList = pvStack_c;
  return;
}

