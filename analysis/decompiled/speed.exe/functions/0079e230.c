/* speed.exe 0079e230 FUN_0079e230; analysis pseudocode, not buildable source.
 * calls 00837000 FUN_00837000
 * calls 00836fd0 FUN_00836fd0
 * calls 008370d0 FUN_008370d0
 * calls 00794f80 FUN_00794f80
 * calls 0079a9e0 FUN_0079a9e0
 * calls 0078c730 FUN_0078c730
 * calls 00837100 FUN_00837100
 * calls 0056e340 FUN_0056e340
 * calls 00837130 FUN_00837130
 * calls 0083dac0 FUN_0083dac0
 * calls 00839770 FUN_00839770
 * calls 00793910 FUN_00793910
 * calls 00460c50 FUN_00460c50
 * calls 00460d20 FUN_00460d20
 * calls 00790df0 FUN_00790df0
 * calls 008378e0 FUN_008378e0
 * calls 007914b0 FUN_007914b0
 */

int __fastcall FUN_0079e230(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_00837000(*(undefined4 *)(param_1 + 0xf8));
  iVar1 = FUN_00837100(*(undefined4 *)(param_1 + 0xf8),&LAB_0079ae50,param_1);
  if (iVar1 < 1) {
    iVar1 = FUN_00836fd0(*(undefined4 *)(param_1 + 0xf8),&LAB_0078f4d0,param_1);
    if (iVar1 < 1) {
      iVar1 = FUN_00837130(*(undefined4 *)(param_1 + 0xf8),FUN_0079abd0,param_1);
      if (iVar1 < 1) {
        iVar1 = FUN_008370d0(*(undefined4 *)(param_1 + 0xf8),&LAB_0078f4f0,param_1);
        if (iVar1 < 1) {
          iVar1 = FUN_00794f80();
          uVar3 = *(undefined4 *)(iVar1 + 0x38);
          uVar2 = FUN_0056e340(&LAB_00792680,param_1,120000);
          uVar3 = FUN_0083dac0(uVar3,uVar2);
          *(undefined4 *)(param_1 + 0x108) = uVar3;
          uVar3 = FUN_0078c730();
          iVar1 = FUN_0079a9e0();
          *(undefined4 *)(iVar1 + 0x1c) = uVar3;
          *(undefined1 **)(iVar1 + 0x18) = &LAB_0079d190;
          iVar1 = 10;
          puVar5 = (undefined4 *)(param_1 + 0x55);
          do {
            iVar4 = FUN_00460c50(puVar5);
            if (0 < iVar4) {
              uVar3 = FUN_0056e340(puVar5);
              iVar4 = FUN_00460d20(uVar3);
              if (iVar4 != 0) {
                FUN_00839770(*(undefined4 *)(param_1 + 0xf8),puVar5,0x40);
              }
            }
            puVar5 = puVar5 + 4;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          puVar5 = (undefined4 *)(param_1 + 0x55);
          for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          if (*(int *)(param_1 + 0xf8) != 0) {
            FUN_008378e0(*(int *)(param_1 + 0xf8),"BlackBox Games","English");
            FUN_00793910();
            FUN_007914b0();
          }
          *(undefined1 *)(param_1 + 0x975) = 0;
          return 0;
        }
      }
    }
  }
  FUN_00790df0();
  return iVar1;
}

