/* speed.exe 00744980 FUN_00744980; analysis pseudocode, not buildable source.
 * calls 0050c7b0 FUN_0050c7b0
 * calls 0045a430 FUN_0045a430
 * calls 006bd900 FUN_006bd900
 * calls 00503c00 FUN_00503c00
 * calls 00503b60 FUN_00503b60
 * calls 00503bc0 FUN_00503bc0
 * calls 00744890 FUN_00744890
 */

void __thiscall
FUN_00744980(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int local_70;
  undefined1 local_60 [68];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00880b98;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00744890(param_3,0,0);
  local_14 = 0;
  if ((local_70 != 0) && (iVar1 = FUN_0050c7b0(local_70,0x10c00000), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x68) = param_4;
    FUN_00503b60(1);
    puVar2 = (undefined1 *)(param_1 + 0x10);
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 1;
    if (param_2 != 0) {
      FUN_006bd900(local_60,puVar2,param_2);
      puVar2 = local_60;
    }
    FUN_00503bc0(puVar2);
    if (param_5 != 0) {
      FUN_00503c00(param_5);
    }
  }
  local_14 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_1c;
  return;
}

