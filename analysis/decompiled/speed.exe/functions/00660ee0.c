/* speed.exe 00660ee0 FUN_00660ee0; analysis pseudocode, not buildable source.
 * calls 0065ad80 FUN_0065ad80
 * calls 00461410 FUN_00461410
 * calls 00463ca0 FUN_00463ca0
 * calls 006609f0 FUN_006609f0
 * calls 0065f680 FUN_0065f680
 * calls 0065e760 FUN_0065e760
 * calls 00466340 FUN_00466340
 */

void FUN_00660ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a1bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00461410("Sound\\Speech\\CopSpeech*.big",param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_00466340(DAT_00925900);
    local_4 = 0;
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_006609f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    *DAT_00925b20 = puVar3;
    puVar1 = puVar3;
    puVar3[1] = DAT_00925b20;
    DAT_00925b20 = puVar1;
    *puVar3 = &DAT_00925b1c;
  }
  else {
    iVar2 = FUN_0065f680(param_2,1,1);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x10) = param_3;
      if (-1 < *(int *)(iVar2 + 0xc)) {
        FUN_0065e760(param_1,param_4,param_5,param_6);
      }
      if (0 < *(int *)(iVar2 + 0x20)) {
        *(undefined4 *)(iVar2 + 0x1c) = 1;
        ExceptionList = local_c;
        return;
      }
      FUN_0065ad80();
      FUN_00463ca0(DAT_00925914,iVar2);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

