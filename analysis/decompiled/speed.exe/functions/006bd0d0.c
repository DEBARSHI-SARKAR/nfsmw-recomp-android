/* speed.exe 006bd0d0 FUN_006bd0d0; analysis pseudocode, not buildable source.
 * calls 006c86c0 FUN_006c86c0
 * calls 006c86b0 FUN_006c86b0
 */

void FUN_006bd0d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_4;
  
  local_4 = 0;
  iVar3 = DAT_009017b8;
  uVar2 = DAT_008f8ff4;
  uVar5 = DAT_00982a28;
  uVar6 = DAT_00982be4;
  do {
    (&DAT_0093dab8)[local_4 * 7] = local_4;
    uVar1 = DAT_00982cf4;
    uVar4 = DAT_00982be8;
    switch(local_4) {
    case 0:
      (&DAT_0093dac4)[local_4 * 7] = DAT_00982a2c;
      uVar4 = DAT_00982be8;
      (&DAT_0093dac0)[local_4 * 7] = uVar5;
      (&DAT_0093dabc)[local_4 * 7] = 1;
      (&DAT_0093dac8)[local_4 * 7] = 1;
      (&DAT_0093dacc)[local_4 * 7] = uVar6;
      (&DAT_0093dad0)[local_4 * 7] = uVar4;
      break;
    case 1:
      (&DAT_0093dac0)[local_4 * 7] = DAT_00982a68;
      (&DAT_0093dac4)[local_4 * 7] = DAT_00982a78;
      (&DAT_0093dabc)[local_4 * 7] = 4;
      (&DAT_0093dac8)[local_4 * 7] = 1;
      (&DAT_0093dacc)[local_4 * 7] = 0x140;
      (&DAT_0093dad0)[local_4 * 7] = 0xf0;
      break;
    case 2:
      (&DAT_0093dac0)[local_4 * 7] = uVar5;
      (&DAT_0093dabc)[local_4 * 7] = 0;
      (&DAT_0093dac8)[local_4 * 7] = 1;
      (&DAT_0093dacc)[local_4 * 7] = uVar6;
      (&DAT_0093dad0)[local_4 * 7] = uVar4;
      break;
    case 3:
      (&DAT_0093dac0)[local_4 * 7] = DAT_00982a80;
      (&DAT_0093dac4)[local_4 * 7] = DAT_00982a84;
      (&DAT_0093dacc)[local_4 * 7] = DAT_008f9008;
      uVar4 = DAT_008f900c;
      (&DAT_0093dabc)[local_4 * 7] = 3;
      (&DAT_0093dac8)[local_4 * 7] = 1;
      (&DAT_0093dad0)[local_4 * 7] = uVar4;
      break;
    case 4:
      (&DAT_0093dac0)[local_4 * 7] = DAT_00982cec;
      (&DAT_0093dac4)[local_4 * 7] = uVar1;
      (&DAT_0093dabc)[local_4 * 7] = 0xf;
      (&DAT_0093dac8)[local_4 * 7] = 1;
      uVar2 = FUN_006c86b0();
      (&DAT_0093dacc)[local_4 * 7] = uVar2;
      uVar4 = FUN_006c86c0();
      uVar6 = DAT_00982be4;
      uVar5 = DAT_00982a28;
      uVar2 = DAT_008f8ff4;
      (&DAT_0093dad0)[local_4 * 7] = uVar4;
      iVar3 = DAT_009017b8;
      break;
    case 5:
      (&DAT_0093dac0)[local_4 * 7] = DAT_00982a34;
      (&DAT_0093dac4)[local_4 * 7] = DAT_00982a4c;
      (&DAT_0093dabc)[local_4 * 7] = 0x13;
      (&DAT_0093dac8)[local_4 * 7] = 1;
      uVar4 = 1;
      if (iVar3 != 0) {
        uVar4 = uVar2;
      }
      (&DAT_0093dacc)[local_4 * 7] = uVar4;
      uVar4 = 1;
      if (iVar3 == 0) goto LAB_006bd30b;
      (&DAT_0093dad0)[local_4 * 7] = uVar2;
      break;
    case 6:
      (&DAT_0093dac0)[local_4 * 7] = DAT_00982a38;
      (&DAT_0093dac4)[local_4 * 7] = DAT_00982a50;
      (&DAT_0093dabc)[local_4 * 7] = 0x15;
      (&DAT_0093dac8)[local_4 * 7] = 1;
      uVar4 = 1;
      if (iVar3 != 0) {
        uVar4 = uVar2;
      }
      (&DAT_0093dacc)[local_4 * 7] = uVar4;
      uVar4 = 1;
      if (iVar3 == 0) goto LAB_006bd30b;
      (&DAT_0093dad0)[local_4 * 7] = uVar2;
      break;
    case 7:
      (&DAT_0093dac0)[local_4 * 7] = DAT_00982a3c;
      (&DAT_0093dac4)[local_4 * 7] = DAT_00982a54;
      (&DAT_0093dabc)[local_4 * 7] = 0x16;
      (&DAT_0093dac8)[local_4 * 7] = 1;
      uVar4 = 1;
      if (iVar3 != 0) {
        uVar4 = uVar2;
      }
      (&DAT_0093dacc)[local_4 * 7] = uVar4;
      uVar4 = 1;
      if (iVar3 == 0) goto LAB_006bd30b;
      (&DAT_0093dad0)[local_4 * 7] = uVar2;
      break;
    case 8:
      (&DAT_0093dac0)[local_4 * 7] = DAT_00982a40;
      (&DAT_0093dac4)[local_4 * 7] = DAT_00982a58;
      (&DAT_0093dabc)[local_4 * 7] = 0x17;
      (&DAT_0093dac8)[local_4 * 7] = 1;
      uVar4 = 1;
      if (iVar3 != 0) {
        uVar4 = uVar2;
      }
      (&DAT_0093dacc)[local_4 * 7] = uVar4;
      uVar4 = 1;
      if (iVar3 == 0) goto LAB_006bd30b;
      (&DAT_0093dad0)[local_4 * 7] = uVar2;
      break;
    case 9:
      (&DAT_0093dac0)[local_4 * 7] = DAT_00982a44;
      (&DAT_0093dac4)[local_4 * 7] = DAT_00982a5c;
      (&DAT_0093dabc)[local_4 * 7] = 0x12;
      (&DAT_0093dac8)[local_4 * 7] = 1;
      uVar4 = 1;
      if (iVar3 != 0) {
        uVar4 = uVar2;
      }
      (&DAT_0093dacc)[local_4 * 7] = uVar4;
      uVar4 = 1;
      if (iVar3 == 0) goto LAB_006bd30b;
      (&DAT_0093dad0)[local_4 * 7] = uVar2;
      break;
    case 10:
      (&DAT_0093dac0)[local_4 * 7] = DAT_00982a48;
      (&DAT_0093dac4)[local_4 * 7] = DAT_00982a60;
      (&DAT_0093dabc)[local_4 * 7] = 0x14;
      (&DAT_0093dac8)[local_4 * 7] = 1;
      uVar4 = 1;
      if (iVar3 != 0) {
        uVar4 = uVar2;
      }
      (&DAT_0093dacc)[local_4 * 7] = uVar4;
      uVar4 = 1;
      if (iVar3 != 0) {
        uVar4 = uVar2;
      }
LAB_006bd30b:
      (&DAT_0093dad0)[local_4 * 7] = uVar4;
    }
    local_4 = local_4 + 1;
    if (10 < local_4) {
      return;
    }
  } while( true );
}

