/* speed.exe 00851720 FUN_00851720; analysis pseudocode, not buildable source.
 * calls 00850d40 FUN_00850d40
 * calls 0078af30 FUN_0078af30
 */

undefined4 * FUN_00851720(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = (undefined4 *)FUN_0078af30(0xfc);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar1 = FUN_00851720;
    puVar1[1] = FUN_00850de0;
    puVar1[2] = &LAB_00850ea0;
    puVar1[3] = &DAT_00850eb0;
    puVar1[4] = FUN_00851410;
    puVar1[5] = FUN_00851020;
    puVar1[6] = FUN_00851550;
    puVar1[7] = FUN_00851100;
    puVar1[8] = &LAB_00850e60;
    puVar1[9] = &LAB_00851160;
    puVar1[10] = &LAB_008511a0;
    puVar1[0xb] = FUN_008511b0;
    puVar1[0xc] = FUN_00851360;
    puVar1[0xd] = &LAB_008513c0;
    puVar1[0x13] = DAT_008c7064;
    *(undefined1 *)(puVar1 + 0x14) = DAT_008c7068;
    uVar5 = param_1 + 0x13U & 0x7ffc;
    puVar1[0x27] = uVar5;
    puVar1[0x28] = uVar5 * param_2;
    uVar2 = FUN_0078af30(uVar5 * param_2);
    puVar1[0x30] = uVar5;
    puVar1[0x2b] = uVar2;
    puVar1[0x31] = uVar5 * param_3;
    uVar2 = FUN_0078af30(uVar5 * param_3);
    puVar1[0x35] = uVar2;
    puVar1[0x20] = 0;
    puVar1[0x12] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 1;
    puVar1[0x26] = 0;
    FUN_00850d40();
    puVar3 = puVar1;
  }
  return puVar3;
}

