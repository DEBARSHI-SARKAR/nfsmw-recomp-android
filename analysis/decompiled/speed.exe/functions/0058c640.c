/* speed.exe 0058c640 FUN_0058c640; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 0056ecc0 FUN_0056ecc0
 * calls 0062fe40 FUN_0062fe40
 * calls 00460d20 FUN_00460d20
 */

void __fastcall FUN_0058c640(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087245d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00460d20(*(undefined4 *)(param_1 + 0x14),"safehouse");
  if (iVar1 == 0) {
    iVar1 = FUN_00627400(0x10);
    local_4 = 0;
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return;
    }
    pcVar3 = "MainMenu_Sub.fng";
    uVar2 = 2;
  }
  else {
    iVar1 = FUN_00460d20(*(undefined4 *)(param_1 + 0x14),"carlot");
    if (iVar1 == 0) {
      iVar1 = FUN_00627400(0x10);
      local_4 = 1;
      if (iVar1 == 0) {
        ExceptionList = local_c;
        return;
      }
      pcVar3 = "Car_Select.fng";
      uVar2 = 5;
    }
    else {
      iVar1 = FUN_00460d20(*(undefined4 *)(param_1 + 0x14),"customshop");
      if (iVar1 != 0) {
        ExceptionList = local_c;
        return;
      }
      iVar1 = FUN_0056ecc0(*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8));
      if (*(char *)(iVar1 + 0x10) == -1) {
        ExceptionList = local_c;
        return;
      }
      DAT_0091d3d0 = 0;
      DAT_0091d3d1 = 0;
      DAT_0091d3d2 = 0;
      DAT_008f5108 = 0;
      DAT_0091d3d4 = iVar1;
      iVar1 = FUN_00627400(0x10);
      local_4 = 2;
      if (iVar1 == 0) {
        ExceptionList = local_c;
        return;
      }
      pcVar3 = "CustomizeMain.fng";
      uVar2 = 3;
    }
  }
  FUN_0062fe40(uVar2,pcVar3);
  ExceptionList = local_c;
  return;
}

