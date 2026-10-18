/* speed.exe 0054bc50 FUN_0054bc50; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 005b5b70 FUN_005b5b70
 * calls 0056bc10 FUN_0056bc10
 * calls 00598970 FUN_00598970
 * calls 00591d90 FUN_00591d90
 * calls 00513b50 FUN_00513b50
 * calls 0078c730 FUN_0078c730
 * calls 00572070 FUN_00572070
 * calls 008380f0 FUN_008380f0
 */

void __thiscall FUN_0054bc50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_00460c70(&local_10,param_2);
  pcVar4 = "ControllerUnplugged.fng";
  if (DAT_0091d218 < 1) {
    iVar1 = FUN_005b5b70("ControllerUnplugged.fng");
  }
  else {
    FUN_00572070();
    iVar1 = FUN_00591d90(pcVar4);
  }
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_0056bc10(0x2f0cfb04);
    uVar3 = FUN_00598970(uVar3,&DAT_00890978,1,0x1a294dad,0xffffffff,0xffffffff,uVar2);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    iVar1 = FUN_0078c730();
    iVar1 = FUN_008380f0(*(undefined4 *)(iVar1 + 0xf8),&local_10,&LAB_00544c60,param_1);
    if (iVar1 != 0) {
      FUN_00513b50(*(undefined4 *)(param_1 + 0x10),iVar1);
    }
  }
  return;
}

