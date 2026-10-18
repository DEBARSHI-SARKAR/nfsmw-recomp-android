/* speed.exe 007b1620 FUN_007b1620; analysis pseudocode, not buildable source.
 * calls 007a6770 FUN_007a6770
 * calls 007b13c0 FUN_007b13c0
 * calls 007a4b80 FUN_007a4b80
 * calls 0045d3a0 FUN_0045d3a0
 * calls 007a4a40 FUN_007a4a40
 * calls 0058ad10 FUN_0058ad10
 * calls 007a4db0 FUN_007a4db0
 * calls 007a6a40 FUN_007a6a40
 * calls 00573870 FUN_00573870
 * calls 007c4b80 FUN_007c4b80
 * calls 00575b00 FUN_00575b00
 */

void __fastcall FUN_007b1620(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_00573870();
  FUN_007a6770();
  iVar2 = FUN_0045d3a0(0);
  if (iVar2 != param_1[0x3b]) {
    uVar6 = 0;
    if (((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) || (DAT_009b9e8d != '\0')) {
      cVar1 = FUN_00575b00();
      if (cVar1 == '\0') {
        iVar2 = (**(code **)(*param_1 + 0x14))();
        if (iVar2 != 0) {
          cVar1 = FUN_007a4a40(iVar2);
          if (cVar1 != '\0') {
            iVar3 = FUN_007a4b80(*(undefined4 *)(iVar2 + 0x10));
            if (iVar3 != 0) {
              uVar6 = FUN_007a4db0(*(undefined4 *)(iVar2 + 0x10),iVar3,0);
              FUN_0058ad10(uVar6);
            }
            uVar6 = FUN_007c4b80();
          }
        }
      }
    }
    iVar2 = param_1[0x52];
    uVar4 = (**(code **)(*param_1 + 0x14))(iVar2,uVar6);
    FUN_007b13c0(uVar4,iVar2,uVar6);
    if (param_1[0xe] == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(param_1[0xb] + 0x24))(param_1[0xe]);
    }
    uVar4 = *(undefined4 *)(param_1[0xe] + 0x50);
    iVar2 = FUN_0045d3a0(0);
    iVar2 = iVar2 - param_1[0x3b];
    uVar5 = (**(code **)(*param_1 + 0x14))(uVar4,uVar6,iVar2);
    FUN_007a6a40(uVar5,uVar4,uVar6,iVar2);
  }
  return;
}

