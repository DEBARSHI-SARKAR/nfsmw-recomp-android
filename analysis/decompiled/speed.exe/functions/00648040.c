/* speed.exe 00648040 FUN_00648040; analysis pseudocode, not buildable source.
 * calls 006479d0 FUN_006479d0
 * calls 00635210 FUN_00635210
 * calls 005d29d0 FUN_005d29d0
 * calls 00634370 FUN_00634370
 * calls 005d0370 FUN_005d0370
 * calls 00455fd0 FUN_00455fd0
 * calls 00633d10 FUN_00633d10
 */

void __thiscall FUN_00648040(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00879eef;
  local_c = ExceptionList;
  if ((param_2 != *(int *)(param_1 + 0x268)) || (param_3 != *(int *)(param_1 + 0x274))) {
    iVar1 = *(int *)(param_1 + 0x270);
    ExceptionList = &local_c;
    *(int *)(param_1 + 0x268) = param_2;
    *(int *)(param_1 + 0x274) = param_3;
    if (iVar1 != 0) {
      FUN_00635210();
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_005d0370(*(int *)(iVar1 + 4),0x24,0);
      }
      *(undefined4 *)(iVar1 + 4) = 0;
      FUN_005d0370(iVar1,0xc,0);
      *(undefined4 *)(param_1 + 0x270) = 0;
    }
    if (-1 < param_2) {
      iVar1 = FUN_00634370();
      iVar1 = *(int *)(iVar1 + 8 + param_2 * 4);
      if (iVar1 != 0) {
        iVar2 = FUN_00455fd0(0x2dee1998,*(undefined4 *)(param_1 + 0x274));
        if (iVar2 != 0) {
          iVar3 = FUN_005d29d0(0xc,0);
          local_4 = 0;
          if (iVar3 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_006479d0(iVar1,iVar2);
          }
          *(undefined4 *)(param_1 + 0x270) = uVar4;
        }
      }
    }
    FUN_00633d10();
  }
  ExceptionList = local_c;
  return;
}

