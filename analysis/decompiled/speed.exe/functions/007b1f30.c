/* speed.exe 007b1f30 FUN_007b1f30; analysis pseudocode, not buildable source.
 * calls 00747ae0 FUN_00747ae0
 * calls 00460bf0 FUN_00460bf0
 * calls 005252d0 FUN_005252d0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00514c70 FUN_00514c70
 * calls 007b1620 FUN_007b1620
 * calls 00524850 FUN_00524850
 * calls 00739850 FUN_00739850
 * calls 00747a50 FUN_00747a50
 * calls 00525220 FUN_00525220
 * calls 007af110 FUN_007af110
 */

void __fastcall FUN_007b1f30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_007b1620();
  iVar1 = FUN_0045d3a0(0);
  if (iVar1 == param_1[0x3b]) {
    uVar2 = FUN_00524850(param_1[4],0x8d1559a4);
    FUN_00514c70(uVar2);
    uVar2 = FUN_00524850(param_1[4],0x5e7b09c9);
    FUN_00514c70(uVar2);
    uVar2 = FUN_00524850(param_1[4],0xf2492598);
    FUN_00514c70(uVar2);
    return;
  }
  switch(param_1[0x6f]) {
  case 0:
    uVar2 = 0x1f0e2b2;
    goto LAB_007b1fc9;
  case 1:
    iVar1 = param_1[4];
    uVar2 = 0x205b328;
    break;
  case 2:
    iVar1 = param_1[4];
    uVar2 = 0x9912746;
    break;
  case 3:
    uVar2 = 0xe7416fc;
LAB_007b1fc9:
    iVar1 = param_1[4];
    break;
  default:
    goto switchD_007b1f96_default;
  }
  FUN_00525220(iVar1,0x78008599,uVar2);
switchD_007b1f96_default:
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (DAT_00925b14 - param_1[0x6e] < 0x4b1) {
    *(undefined1 *)(param_1 + 0x6d) = 1;
  }
  else {
    FUN_007af110(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc));
  }
  uVar2 = FUN_00460bf0("LANGUAGEHASH");
  iVar3 = FUN_00747a50(uVar2);
  iVar1 = param_1[4];
  if (iVar3 == 0) {
    uVar2 = FUN_00739850();
    FUN_005252d0(iVar1,0x5e7b09c9,&DAT_008941f8,uVar2);
    return;
  }
  uVar4 = 0;
  uVar2 = FUN_00460bf0("LANGUAGEHASH",0);
  uVar2 = FUN_00747ae0(uVar2,uVar4);
  FUN_00525220(iVar1,0x5e7b09c9,uVar2);
  return;
}

