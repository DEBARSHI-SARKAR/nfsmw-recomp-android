/* speed.exe 0084fad0 FUN_0084fad0; analysis pseudocode, not buildable source.
 * calls 0084bcc0 FUN_0084bcc0
 * calls 0078af30 FUN_0078af30
 */

undefined4 * FUN_0084fad0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = (undefined4 *)FUN_0078af30(0x220);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar1 = FUN_0084fad0;
    puVar1[1] = FUN_0084f460;
    puVar1[2] = &LAB_0084f500;
    puVar1[3] = &DAT_0084f510;
    puVar1[4] = FUN_0084f780;
    puVar1[5] = FUN_0084f520;
    puVar1[6] = &LAB_0084f930;
    puVar1[7] = FUN_0084f550;
    puVar1[8] = &LAB_0084f4e0;
    puVar1[9] = &LAB_0084f580;
    puVar1[10] = &LAB_0084f5c0;
    puVar1[0xb] = FUN_0084f5d0;
    puVar1[0xc] = FUN_0084f6d0;
    puVar1[0xd] = &LAB_0084f730;
    puVar1[0x13] = 0x505253;
    FUN_0084bcc0(puVar1 + 0x7c);
    uVar5 = param_1 + 0xeU & 0x7ffc;
    puVar1[0x27] = uVar5;
    puVar1[0x29] = uVar5 * param_2;
    uVar2 = FUN_0078af30(uVar5 * param_2);
    puVar1[0x2d] = uVar5;
    puVar1[0x2c] = uVar2;
    puVar1[0x2e] = uVar5 * param_3;
    uVar2 = FUN_0078af30(uVar5 * param_3);
    puVar1[0x31] = uVar2;
    puVar1[0x28] = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
    puVar1[0x20] = 0;
    puVar1[0x12] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar3 = puVar1;
  }
  return puVar3;
}

