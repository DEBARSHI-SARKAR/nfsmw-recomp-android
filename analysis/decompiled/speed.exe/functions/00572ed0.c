/* speed.exe 00572ed0 FUN_00572ed0; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 */

void __fastcall FUN_00572ed0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = 0;
  do {
    switch(iVar1) {
    case 0:
      if (((byte)DAT_0091d264 & 1) == 0) {
        uVar5 = 1;
        uVar4 = 0x171a7d;
        uVar3 = 0xfc050956;
LAB_00572f8f:
        uVar2 = *(undefined4 *)(param_1 + 0x10);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar5 = 0;
        uVar4 = 0x4f90cf9b;
        uVar3 = 0xfc050956;
      }
      break;
    case 1:
      if (((byte)DAT_0091d264 & 2) == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar5 = 1;
        uVar4 = 0x171a7d;
        uVar3 = 0x94d342d6;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar5 = 0;
        uVar4 = 0x4f90cf9b;
        uVar3 = 0x94d342d6;
      }
      break;
    case 2:
      if (((byte)DAT_0091d264 & 4) != 0) {
        uVar5 = 0;
        uVar4 = 0x4f90cf9b;
        uVar3 = 0x7d50bd09;
        goto LAB_00572f8f;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = 1;
      uVar4 = 0x171a7d;
      uVar3 = 0x7d50bd09;
      break;
    case 3:
      if (((byte)DAT_0091d264 & 8) == 0) {
        uVar5 = 1;
        uVar4 = 0x171a7d;
        uVar3 = 0x24c278b;
        goto LAB_00572f8f;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = 0;
      uVar4 = 0x4f90cf9b;
      uVar3 = 0x24c278b;
      break;
    default:
      goto switchD_00572edf_default;
    }
    FUN_00524920(uVar2,uVar3,uVar4,uVar5);
switchD_00572edf_default:
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      return;
    }
  } while( true );
}

