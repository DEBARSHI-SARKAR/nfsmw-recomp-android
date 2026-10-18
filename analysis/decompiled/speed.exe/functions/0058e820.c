/* speed.exe 0058e820 FUN_0058e820; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00621e80 FUN_00621e80
 * calls 00586290 FUN_00586290
 * calls 005251e0 FUN_005251e0
 * calls 00573140 FUN_00573140
 * calls 00515c00 FUN_00515c00
 */

undefined4 * __thiscall FUN_0058e820(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872637;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008a17b0;
  param_1[0xc] = *(undefined4 *)(param_2 + 8);
  local_4 = 0;
  uVar1 = FUN_005251e0(param_1[4],0xb769701e);
  param_1[0xb] = uVar1;
  uVar1 = FUN_00573140("DDAY_TIMELAPSE_%d",param_1[0xc] + 1);
  FUN_00515c00(param_1[0xb],uVar1);
  iVar2 = FUN_00627400(0xc);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar2 != 0) {
    FUN_00621e80(0x14035fb);
  }
  ExceptionList = local_c;
  return param_1;
}

