/* speed.exe 007b26e0 FUN_007b26e0; analysis pseudocode, not buildable source.
 * calls 005252d0 FUN_005252d0
 * calls 004647e0 FUN_004647e0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00514c70 FUN_00514c70
 * calls 00460c50 FUN_00460c50
 * calls 007b1620 FUN_007b1620
 * calls 00524850 FUN_00524850
 * calls 00739850 FUN_00739850
 * calls 007af110 FUN_007af110
 */

void __fastcall FUN_007b26e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_40 [64];
  
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
  iVar1 = (**(code **)(*param_1 + 0x14))();
  FUN_007af110(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc));
  FUN_005252d0(param_1[4],0xe6782841,&DAT_008b7a7c,param_1[0x6f]);
  uVar2 = FUN_00739850();
  FUN_004647e0(auStack_40,0x40,&DAT_008941f8,uVar2);
  iVar3 = FUN_00460c50(auStack_40);
  iVar1 = iVar3 + -6;
  for (; iVar1 <= iVar3; iVar3 = iVar3 + -1) {
    auStack_40[iVar3] = 0;
  }
  FUN_005252d0(param_1[4],0x5e7b09c9,&DAT_008941f8,auStack_40);
  return;
}

