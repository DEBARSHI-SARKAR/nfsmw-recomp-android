/* speed.exe 00592170 FUN_00592170; analysis pseudocode, not buildable source.
 * calls 005251a0 FUN_005251a0
 * calls 00515520 FUN_00515520
 * calls 005750d0 FUN_005750d0
 * calls 005af1c0 FUN_005af1c0
 * calls 00514fd0 FUN_00514fd0
 */

undefined4 * __thiscall
FUN_00592170(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872a86;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089d34c;
  param_1[1] = param_2;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  puVar1 = param_1 + 4;
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  local_4 = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_005750d0(param_2,param_4,param_5,param_6,0);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x29) = (undefined1)param_5;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined1 *)((int)param_1 + 0xa1) = 0;
  *(undefined1 *)((int)param_1 + 0xa2) = param_7;
  *(undefined1 *)((int)param_1 + 0xa3) = param_8;
  param_1[0x2a] = 0x406415e3;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  else {
    uVar2 = FUN_005af1c0(param_3);
    uVar2 = FUN_005251a0(param_2,uVar2);
    param_1[0xc] = uVar2;
    FUN_00514fd0(uVar2,param_1 + 0x24,param_1 + 0x25);
    FUN_00515520(param_1[0xc],param_1 + 0x26,param_1 + 0x27);
  }
  ExceptionList = local_c;
  return param_1;
}

