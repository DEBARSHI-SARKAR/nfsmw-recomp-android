/* speed.exe 006dc040 FUN_006dc040; analysis pseudocode, not buildable source.
 * calls 006d3b80 FUN_006d3b80
 * calls 006e2f50 FUN_006e2f50
 * calls 006d2cd0 FUN_006d2cd0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dc040(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_38;
  int *piStack_34;
  undefined *puStack_30;
  int *piStack_2c;
  undefined *puStack_28;
  uint uStack_24;
  char cStack_8;
  
  uStack_24 = 1;
  puStack_28 = &DAT_008f9590;
  piStack_2c = (int *)0x1;
  puStack_30 = (undefined *)DAT_0098296c;
  piStack_34 = (int *)DAT_00982990;
  uStack_38 = 0x6dc05f;
  FUN_006d2cd0();
  iVar1 = 0;
  if (0 < DAT_008f9474) {
    do {
      uStack_24 = 0;
      puStack_28 = &DAT_008f9530;
      piStack_2c = (int *)0x4;
      puStack_30 = (undefined *)DAT_00982964;
      piStack_34 = (int *)DAT_00982994;
      uStack_38 = 0x6dc08b;
      FUN_006d2cd0();
      uStack_38 = 0;
      FUN_006d2cd0(DAT_00982990,DAT_00982968,4,&DAT_008f9500);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_008f9474);
  }
  uStack_24 = 0x6dc115;
  uStack_24 = FUN_007c4b80();
  uStack_24 = ((uStack_24 << 8 | uStack_24) << 8 | uStack_24) << 8 | uStack_24;
  puStack_28 = (undefined *)0xc1;
  piStack_2c = DAT_00982bdc;
  puStack_30 = (undefined *)0x6dc13b;
  (**(code **)(*DAT_00982bdc + 0xe4))();
  if (DAT_009017e0 != 0) {
    piStack_2c = (int *)0xffffffff;
    puStack_30 = (undefined *)0x2;
    piStack_34 = (int *)0xe;
    uStack_38 = 1;
    FUN_006d3b80(DAT_00982960,1,&DAT_00982964,&puStack_28);
  }
  piStack_2c = (int *)0xffffffff;
  puStack_30 = (undefined *)0x2;
  if (cStack_8 == '\0') {
    uVar2 = (&DAT_0093de60)[DAT_00982c60];
    if (DAT_009017e0 == 0) {
      piStack_34 = (int *)0xe;
      puVar3 = &DAT_00982964;
    }
    else {
      piStack_34 = (int *)0x2;
      puVar3 = &DAT_0093e7bc;
    }
  }
  else {
    if (DAT_00982c60 != -1) {
      if (DAT_009017e0 == 0) {
        piStack_34 = (int *)0xe;
        puVar3 = &DAT_00982964;
      }
      else {
        piStack_34 = (int *)0x2;
        puVar3 = &DAT_0093e7bc;
      }
      uStack_38 = 1;
      FUN_006d3b80((&DAT_0093de60)[DAT_00982c60],1,puVar3,&puStack_28);
      uStack_38 = (&DAT_0093def8)[DAT_00982c60];
      piStack_2c = (int *)0x0;
      puStack_30 = &DAT_008f94f4;
      piStack_34 = (int *)0x1;
      FUN_006d2cd0(DAT_00982a28);
      goto LAB_006dc22d;
    }
    piStack_34 = (int *)0xe;
    puVar3 = &DAT_00982964;
    uVar2 = DAT_00982a28;
  }
  uStack_38 = 1;
  FUN_006d3b80(uVar2,1,puVar3,&puStack_28);
LAB_006dc22d:
  piStack_2c = (int *)0x6dc232;
  FUN_006e2f50();
  piStack_2c = (int *)DAT_0093dac0;
  puStack_30 = (undefined *)0x0;
  piStack_34 = DAT_00982bdc;
  uStack_38 = 0x6dc249;
  (**(code **)(*DAT_00982bdc + 0x94))();
  uStack_38 = DAT_0093dac4;
  (**(code **)(*DAT_00982bdc + 0x9c))(DAT_00982bdc);
  piStack_2c = (int *)DAT_0093dad0;
  puStack_30 = (undefined *)DAT_0093dacc;
  uStack_38 = 0;
  piStack_34 = (int *)0x0;
  puStack_28 = (undefined *)0x0;
  uStack_24 = 0x3f800000;
  (**(code **)(*DAT_00982bdc + 0xbc))(DAT_00982bdc,&uStack_38);
  DAT_00982a20 = &DAT_0093dab8;
  DAT_00982c80 = 0;
  return;
}

