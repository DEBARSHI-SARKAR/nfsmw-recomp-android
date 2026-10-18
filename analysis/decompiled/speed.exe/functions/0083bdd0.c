/* speed.exe 0083bdd0 FUN_0083bdd0; analysis pseudocode, not buildable source.
 * calls 0083bb00 FUN_0083bb00
 * calls 0083a290 FUN_0083a290
 */

undefined4
FUN_0083bdd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_10 = param_4 + -0x76c;
  local_8 = 0;
  local_14 = param_5 + -1;
  local_1c = param_7;
  local_18 = param_6;
  local_4 = 0xffffffff;
  local_20 = param_8;
  local_24 = param_9;
  iVar1 = FUN_0083a290(&local_24);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_0083bb00(param_1,param_2,param_3,iVar1 - param_10);
  return uVar2;
}

