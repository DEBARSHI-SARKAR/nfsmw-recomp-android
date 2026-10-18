/* speed.exe 00615770 FUN_00615770; analysis pseudocode, not buildable source.
 * calls 00614590 FUN_00614590
 * calls 006152b0 FUN_006152b0
 * calls 006146e0 FUN_006146e0
 * calls 00614240 FUN_00614240
 * calls 00614510 FUN_00614510
 * calls 006064f0 FUN_006064f0
 * calls 00613880 FUN_00613880
 * calls 00614770 FUN_00614770
 * calls 00614830 FUN_00614830
 * calls 00614620 FUN_00614620
 * calls 006143d0 FUN_006143d0
 */

int FUN_00615770(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_006152b0(*param_1);
  iVar3 = FUN_00614510();
  *(int *)(iVar2 + 0x20) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar2 + 0x20) = param_2;
  }
  uVar4 = FUN_006143d0();
  *(undefined4 *)(iVar2 + 0x3c) = uVar4;
  uVar1 = FUN_00614240();
  *(undefined1 *)(iVar2 + 0x44) = uVar1;
  uVar1 = FUN_00614240();
  *(undefined1 *)(iVar2 + 0x45) = uVar1;
  uVar1 = FUN_00614240();
  *(undefined1 *)(iVar2 + 0x46) = uVar1;
  uVar1 = FUN_00614240();
  *(undefined1 *)(iVar2 + 0x47) = uVar1;
  FUN_006146e0(param_1,iVar2);
  FUN_00614620();
  FUN_00614770(param_1,iVar2);
  FUN_00614830(iVar2);
  FUN_00614590(param_1,iVar2);
  iVar3 = FUN_006064f0(iVar2,*(undefined4 *)(iVar2 + 0x2c),0xff);
  if (iVar3 == 0) {
    FUN_00613880(*param_1,"bad code in %s",param_1[4]);
  }
  return iVar2;
}

