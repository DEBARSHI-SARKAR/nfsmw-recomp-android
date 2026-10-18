/* speed.exe 0084eb20 FUN_0084eb20; analysis pseudocode, not buildable source.
 * calls 0084bcc0 FUN_0084bcc0
 * calls 0078af30 FUN_0078af30
 */

undefined4 * FUN_0084eb20(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = (undefined4 *)FUN_0078af30(0x21c);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar4 = 0x87; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar1 = FUN_0084eb20;
    puVar1[1] = FUN_0084e5b0;
    puVar1[2] = &LAB_0084e650;
    puVar1[3] = &DAT_0084e660;
    puVar1[4] = FUN_0084e910;
    puVar1[5] = FUN_0084e670;
    puVar1[6] = &LAB_0084ea50;
    puVar1[7] = FUN_0084e6c0;
    puVar1[8] = &LAB_0084e630;
    puVar1[9] = &LAB_0084e710;
    puVar1[10] = &LAB_0084e750;
    puVar1[0xb] = FUN_0084e760;
    puVar1[0xc] = FUN_0084e860;
    puVar1[0xd] = &LAB_0084e8c0;
    puVar1[0x13] = 0x504354;
    FUN_0084bcc0(puVar1 + 0x7b);
    uVar5 = param_1 + 0xbU & 0x7ffc;
    puVar1[0x28] = uVar5;
    puVar1[0x29] = uVar5 * param_2;
    uVar2 = FUN_0078af30(uVar5 * param_2);
    puVar1[0x2f] = uVar5;
    puVar1[0x2c] = uVar2;
    puVar1[0x30] = uVar5 * param_3;
    uVar2 = FUN_0078af30(uVar5 * param_3);
    puVar1[0x33] = uVar2;
    puVar1[0x20] = 0;
    puVar1[0x12] = 0;
    puVar1[0x25] = 1;
    puVar1[0x26] = 0;
    puVar3 = puVar1;
  }
  return puVar3;
}

