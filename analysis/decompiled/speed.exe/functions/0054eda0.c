/* speed.exe 0054eda0 FUN_0054eda0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00627400 FUN_00627400
 * calls 00621e80 FUN_00621e80
 * calls 00516af0 FUN_00516af0
 * calls 00569cc0 FUN_00569cc0
 * calls 00586290 FUN_00586290
 * calls 00517b30 FUN_00517b30
 * calls 00526080 FUN_00526080
 * calls 0056bb20 FUN_0056bb20
 * calls 00460ca0 FUN_00460ca0
 * calls 007a1fa0 FUN_007a1fa0
 */

undefined4 * __thiscall FUN_0054eda0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008706b2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  DAT_0091cb1c = param_1 + 0xb;
  *param_1 = &PTR_FUN_0089e3c4;
  *DAT_0091cb1c = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = *(undefined1 *)(DAT_0091cae0 + 1);
  *(undefined1 *)(DAT_0091cae0 + 1) = 0;
  local_4 = 1;
  if (param_1[4] != 0) {
    iVar2 = FUN_00516af0(param_1[4]);
    if (iVar2 != 0) {
      iVar2 = FUN_005b8550(0x348ff9f);
      if (iVar2 != 0) {
        FUN_00460ca0(*(undefined4 *)(iVar2 + 0x24),s_unknown_008f3750,0x100);
        *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
      }
    }
  }
  uVar1 = param_1[4];
  FUN_00517b30(s_unknown_008f3750);
  iVar2 = FUN_0056bb20();
  if ((iVar2 != 0) || (*(char *)(param_1 + 0x12) != '\0')) {
    FUN_00526080(s_unknown_008f3750,uVar1);
  }
  FUN_00569cc0();
  iVar2 = FUN_00627400(0xc);
  local_4._0_1_ = 2;
  if (iVar2 != 0) {
    FUN_00621e80(0x14035fb);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar3 = (int *)FUN_007a1fa0();
  if ((piVar3 != (int *)0x0) && (piVar3[0x1b] == 0)) {
    (**(code **)(*piVar3 + 4))(0xad4bbdc,0,0,0);
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  ExceptionList = local_c;
  return param_1;
}

