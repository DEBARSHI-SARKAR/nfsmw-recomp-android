/* speed.exe 00667e70 FUN_00667e70; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 00782f10 FUN_00782f10
 * calls 005d06a0 FUN_005d06a0
 * calls 00783b60 FUN_00783b60
 * calls 007701d0 FUN_007701d0
 */

int * __thiscall
FUN_00667e70(int *param_1,undefined4 param_2,char param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a45f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_005d29d0(0x48,"SmackTrigger");
  iVar2 = FUN_005d29d0(0x40,0);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_007701d0(param_4,param_5,puVar1,param_6 | 0x40143);
  }
  *param_1 = iVar2;
  *puVar1 = 1;
  param_1[1] = (int)(puVar1 + 8);
  puVar1[6] = 0x10;
  puVar1[4] = 0xeb626f77;
  puVar1[7] = 0;
  puVar1[5] = 0x38;
  local_4 = 0xffffffff;
  FUN_00783b60(*param_1);
  if (param_3 == '\0') {
    FUN_00782f10(param_4,param_5);
  }
  *(undefined4 *)(param_1[1] + 0x10) = param_2;
  *(char *)(param_1[1] + 0x24) = param_3;
  FUN_005d06a0(param_4,param_1[1] + 0x14);
  iVar2 = param_1[1];
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_4 + 0x34);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_4 + 0x38);
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) | 0x100;
  ExceptionList = local_c;
  return param_1;
}

