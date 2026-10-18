/* speed.exe 004099e0 FUN_004099e0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0065c5a0 FUN_0065c5a0
 */

undefined4 * __thiscall FUN_004099e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008679ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890ddc;
  FUN_0065c5a0(param_3,0x42340000);
  local_4._1_3_ = 0;
  param_1[7] = param_2;
  param_1[8] = 0x3e4ccccd;
  param_1[0x15] = 0x3f800000;
  puVar3 = param_1 + 0xf;
  puVar4 = param_1 + 10;
  param_2 = 3;
  do {
    local_4._0_1_ = 0;
    iVar1 = FUN_005d29d0(0x38,0);
    local_4._0_1_ = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0065c5a0(param_3,0x42340000);
    }
    puVar3[10] = uVar2;
    puVar4[-1] = 0;
    *puVar4 = 0x3f800000;
    puVar4[-9] = 0xc7c34f80;
    puVar4[-8] = 0x47c34f80;
    *puVar3 = 0x3c23d70a;
    puVar3[3] = 0x3851b717;
    puVar3[7] = 0;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  param_1[0x1c] = 0;
  ExceptionList = local_c;
  return param_1;
}

