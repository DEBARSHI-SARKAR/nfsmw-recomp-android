/* speed.exe 0053a0f0 FUN_0053a0f0; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 00591d90 FUN_00591d90
 * calls 00598c00 FUN_00598c00
 * calls 00587d30 FUN_00587d30
 * calls 0056c760 FUN_0056c760
 * calls 005b5b70 FUN_005b5b70
 * calls 00572070 FUN_00572070
 * calls 00533460 FUN_00533460
 */

void __thiscall
FUN_0053a0f0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x14c) == 0) {
    pcVar4 = "OL_EAMessenger.fng";
    if (DAT_0091d218 < 1) {
      iVar1 = FUN_005b5b70("OL_EAMessenger.fng");
    }
    else {
      FUN_00572070();
      iVar1 = FUN_00591d90(pcVar4);
    }
    if (iVar1 == 0) {
      FUN_00587d30(param_2,param_3,param_4,param_5);
    }
  }
  if (0x911ab364 < param_2) {
    if ((param_2 != 0xc98356ba) && (param_2 == 0xd05fc3a3)) {
      *(undefined4 *)(param_1 + 0x14c) = 0;
      FUN_00533460(*(undefined4 *)(param_1 + 0x10));
      *(undefined1 *)(param_1 + 0x148) = 1;
    }
    return;
  }
  if (param_2 == 0x911ab364) {
    if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = 0xd5d46fdf;
      uVar3 = 1;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      if (*(char *)(DAT_0091cf90 + 0x172) == '\0') {
        uVar5 = 0xc2e59520;
        uVar3 = 0;
      }
      else {
        uVar5 = 0x309b91ba;
        uVar3 = 0;
      }
    }
    uVar2 = FUN_00598c00(uVar2,&DAT_00890978,1,0x70e01038,0x417b25e4,0xd05fc3a3,0x34dc1bcf,
                         0x34dc1bcf,uVar3,uVar5);
    *(undefined4 *)(param_1 + 0x14c) = uVar2;
    FUN_0056c760(0x34dc1bcf);
    return;
  }
  if (param_2 == 0x34dc1bcf) {
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  else if (param_2 != 0x6481273e) {
    if (param_2 != 0x904aca43) {
      return;
    }
    if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
      return;
    }
    FUN_00516be0(0xd05fc3a3,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
    return;
  }
  *(undefined1 *)(param_1 + 0x57) = 1;
  return;
}

