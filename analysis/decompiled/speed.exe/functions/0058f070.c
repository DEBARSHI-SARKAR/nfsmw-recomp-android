/* speed.exe 0058f070 FUN_0058f070; analysis pseudocode, not buildable source.
 * calls 00516c90 FUN_00516c90
 * calls 00524920 FUN_00524920
 * calls 00508b10 FUN_00508b10
 * calls 004fb000 FUN_004fb000
 * calls 00460bf0 FUN_00460bf0
 * calls 0057e180 FUN_0057e180
 * calls 005251a0 FUN_005251a0
 * calls 00586290 FUN_00586290
 * calls 00515b90 FUN_00515b90
 */

undefined4 * __thiscall FUN_0058f070(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a0fa4;
  param_1[0xb] = 0;
  cVar1 = FUN_004fb000();
  if (cVar1 != '\0') {
    uVar3 = param_1[4];
    uVar4 = 0;
    uVar2 = FUN_00460bf0("CURRENT_GEN_WIDESCREEN",uVar3,0);
    FUN_00516c90(uVar2,uVar3,uVar4);
  }
  param_1[0xc] = 0;
  FUN_00524920(param_1[4],0x3248e720,0x16a259,1);
  param_1[0xd] = 0;
  FUN_0057e180();
  param_1[0xd] = 0;
  uVar3 = FUN_005251a0(param_1[4],0x922a39c4,0);
  FUN_00515b90(uVar3);
  param_2 = param_1[0xd];
  FUN_00508b10(&param_2,1,&LAB_0056b160,param_1,0);
  ExceptionList = local_c;
  return param_1;
}

