/* speed.exe 006f7da0 FUN_006f7da0; analysis pseudocode, not buildable source.
 * calls 006f4380 FUN_006f4380
 * calls 006f5e10 FUN_006f5e10
 * calls 006f5ed0 FUN_006f5ed0
 * calls 005d5a50 FUN_005d5a50
 * calls 00454810 FUN_00454810
 * calls 006f5c40 FUN_006f5c40
 * calls 00642f60 FUN_00642f60
 * calls 006e84a0 FUN_006e84a0
 * calls 006269b0 FUN_006269b0
 * calls 006f59c0 FUN_006f59c0
 * calls 006f5ba0 FUN_006f5ba0
 * calls 006f5a70 FUN_006f5a70
 * calls 005d59e0 FUN_005d59e0
 * calls 0045a430 FUN_0045a430
 * calls 006f5f80 FUN_006f5f80
 * calls 006f5d60 FUN_006f5d60
 * calls 006f43c0 FUN_006f43c0
 */

void __fastcall FUN_006f7da0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087ed7a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b0600;
  local_4 = 2;
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 4))();
    param_1[0xe] = 0;
  }
  for (iVar2 = DAT_009885d0; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    if (*(int *)(iVar2 + 0x20) == param_1[0x11]) goto LAB_006f7dfe;
  }
  iVar2 = 0;
LAB_006f7dfe:
  *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 0x10;
  for (iVar2 = DAT_009885d0; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    if (*(int *)(iVar2 + 0x20) == param_1[0x10]) goto LAB_006f7e25;
  }
  iVar2 = 0;
LAB_006f7e25:
  *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 0x10;
  for (iVar2 = DAT_009885d0; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    if (*(int *)(iVar2 + 0x20) == param_1[0x12]) goto LAB_006f7e42;
  }
  iVar2 = 0;
LAB_006f7e42:
  *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 0x10;
  for (iVar2 = DAT_009885d0; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    if (*(int *)(iVar2 + 0x20) == param_1[0x13]) goto LAB_006f7e5f;
  }
  iVar2 = 0;
LAB_006f7e5f:
  *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 0x10;
  FUN_006f5d60();
  FUN_006f59c0();
  FUN_006f5ed0();
  FUN_006f5ba0();
  FUN_006f43c0();
  FUN_006f5a70();
  FUN_006f5c40();
  FUN_006f5e10();
  FUN_006f5f80();
  FUN_006f4380();
  iVar2 = FUN_006e84a0();
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      FUN_00642f60(param_1[10]);
      local_4._0_1_ = 1;
      FUN_0045a430();
      local_4 = (uint)local_4._1_3_ << 8;
      *param_1 = &PTR_FUN_00890970;
      FUN_005d5a50(param_1);
      local_4 = 0xffffffff;
      FUN_005d59e0();
      ExceptionList = pvStack_c;
      return;
    }
    iVar3 = FUN_00454810(0xdfc2418,iVar2);
    if (iVar3 == 0) {
      iVar3 = FUN_006269b0(0x10);
    }
    for (iVar1 = DAT_00988dfc; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if ((*(int *)(iVar1 + 0xc) == *(int *)(iVar3 + 8)) && (*(int *)(iVar1 + 4) != 0)) {
        (**(code **)(iVar1 + 4))();
        break;
      }
    }
  } while( true );
}

