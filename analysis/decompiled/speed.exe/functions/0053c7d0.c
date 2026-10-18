/* speed.exe 0053c7d0 FUN_0053c7d0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 00586ca0 FUN_00586ca0
 * calls 005926b0 FUN_005926b0
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 00586760 FUN_00586760
 * calls 005b8400 FUN_005b8400
 */

void __fastcall FUN_0053c7d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_20 = 0;
  local_1 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00586760(0x249db7b7);
  }
  uVar1 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x50));
  FUN_00515e20(&local_20,0x20,"POS%d",uVar1);
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = FUN_005af1c0(&local_20);
  if ((((iVar2 != 0) && (iVar2 = FUN_00516af0(iVar2), iVar2 != 0)) &&
      (iVar2 = FUN_005b8550(0xa808e057), iVar2 != 0)) && (iVar2 = FUN_005b1360(uVar1), iVar2 != 0))
  {
    FUN_005b8400(iVar2,0);
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  FUN_005926b0(1);
  return;
}

