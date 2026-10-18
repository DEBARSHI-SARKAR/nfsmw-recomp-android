/* speed.exe 00783250 FUN_00783250; analysis pseudocode, not buildable source.
 * calls 005094c0 FUN_005094c0
 * calls 006eeb60 FUN_006eeb60
 * calls 004ff180 FUN_004ff180
 * calls 0045a430 FUN_0045a430
 * calls 00463ca0 FUN_00463ca0
 * calls 00781e10 FUN_00781e10
 */

void __fastcall FUN_00783250(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0088206e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b5d90;
  local_4 = 2;
  if (param_1[0xf] != 0) {
    FUN_004ff180();
    iVar1 = param_1[0xf];
    if (iVar1 != 0) {
      FUN_005094c0();
      FUN_00463ca0(DAT_00916068,iVar1);
    }
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 4))();
    param_1[0x11] = 0;
  }
  iVar1 = param_1[4];
  piVar2 = (int *)param_1[5];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  local_4._0_1_ = 1;
  if ((param_1[0xc] != 0) && (param_1[0xb] != 0)) {
    FUN_00781e10(param_1[0xb]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  DAT_009b391c = DAT_009b391c + -1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_006eeb60();
  ExceptionList = pvStack_c;
  return;
}

