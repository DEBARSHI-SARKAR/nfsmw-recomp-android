/* speed.exe 0082b640 FUN_0082b640; analysis pseudocode, not buildable source.
 * calls 00829480 FUN_00829480
 * calls 0081cb57 FUN_0081cb57
 * calls 007c4b80 FUN_007c4b80
 * calls 0082adb0 FUN_0082adb0
 * calls 0081d55b FUN_0081d55b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0082b640(undefined4 *param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *local_8;
  
  iVar1 = FUN_00829480(0x114);
  if (iVar1 == 0) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = (int *)FUN_0082adb0(param_2);
  }
  if (param_3 != _DAT_00890968) {
    iVar1 = FUN_007c4b80();
    iVar2 = FUN_007c4b80();
    iVar3 = (**(code **)(*DAT_009c29a8 + 0x14))(param_2);
    if (iVar2 < iVar3) {
      iVar2 = (**(code **)(*DAT_009c29a8 + 0x14))(param_2);
    }
    iVar3 = FUN_0081d55b(param_2,1 - iVar1);
    iVar4 = FUN_00829480(iVar2 + iVar3);
    uVar5 = 0xffffff94;
    if (iVar4 != 0) {
      uVar5 = (**(code **)(*local_8 + 0x58))(param_2,1 - iVar1,iVar4,iVar2 + iVar3);
      uVar5 = FUN_0081cb57(uVar5);
    }
    (**(code **)(*local_8 + 0x8c))(uVar5,iVar4);
    *param_1 = local_8;
    return 0;
  }
  *param_1 = local_8;
  return 0;
}

