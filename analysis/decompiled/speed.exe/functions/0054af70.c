/* speed.exe 0054af70 FUN_0054af70; analysis pseudocode, not buildable source.
 * calls 0053a700 FUN_0053a700
 * calls 00525220 FUN_00525220
 * calls 0059bc40 FUN_0059bc40
 * calls 005252d0 FUN_005252d0
 */

undefined4 * __thiscall FUN_0054af70(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bc40(param_2);
  *param_1 = &PTR_FUN_0089e898;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(DAT_0091cae0 + 1) = 1;
  local_4 = 0;
  FUN_005252d0(param_1[4],0x5e7b09c9,&DAT_0089dfa0);
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
    uVar1 = param_1[4];
    uVar2 = 0xca38d55f;
  }
  else {
    uVar1 = param_1[4];
    uVar2 = 0x3f6f2bf;
  }
  FUN_00525220(uVar1,0xb71b576d,uVar2);
  FUN_0053a700();
  ExceptionList = local_c;
  return param_1;
}

