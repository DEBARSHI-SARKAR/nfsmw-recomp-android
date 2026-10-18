/* speed.exe 005e9ec0 FUN_005e9ec0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 005e5970 FUN_005e5970
 */

int __thiscall
FUN_005e9ec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008754bf;
  local_c = ExceptionList;
  if (*(uint *)(param_1 + 700) < 200) {
    ExceptionList = &local_c;
    iVar1 = FUN_005d29d0(0x20,0);
    local_4 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_005e5970(param_2,param_3,param_4);
      if (iVar1 != 0) {
        *(int *)(*(int *)(param_1 + 0x2c4) + *(int *)(param_1 + 700) * 4) = iVar1;
        *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
        if (param_5 != '\0') {
          *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) | 0x10;
        }
      }
      ExceptionList = local_c;
      return iVar1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

