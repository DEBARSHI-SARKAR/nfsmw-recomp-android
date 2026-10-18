/* speed.exe 006ffa30 FUN_006ffa30; analysis pseudocode, not buildable source.
 * calls 004b1d60 FUN_004b1d60
 * calls 004eb7d0 FUN_004eb7d0
 */

uint __thiscall FUN_006ffa30(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    switch(param_2) {
    case 1:
      uVar3 = FUN_004eb7d0(0xb,0);
      break;
    case 2:
      uVar3 = FUN_004eb7d0(10,0);
      break;
    case 3:
      uVar3 = FUN_004eb7d0(3,0);
      break;
    case 4:
      uVar3 = FUN_004eb7d0(4,0);
      break;
    case 5:
      uVar3 = FUN_004eb7d0(5,0);
      break;
    case 6:
      uVar3 = FUN_004eb7d0(6,0);
      break;
    case 7:
      uVar3 = FUN_004eb7d0(7,0);
      break;
    case 8:
      uVar3 = FUN_004eb7d0(8,0);
      break;
    default:
      uVar3 = FUN_004eb7d0(0xe,0);
      if ((((*(int *)(param_1 + 0x88) != 0) && (*(int *)(*(int *)(param_1 + 0x88) + 8) == 0xcc)) &&
          (iVar1 = FUN_004b1d60(0), iVar1 != 0)) &&
         (((piVar2 = (int *)FUN_004b1d60(0), piVar2 != (int *)0x0 && (*piVar2 == 2)) &&
          (piVar2[1] == 0x40)))) {
        uVar3 = uVar3 * 2;
        if ((int)uVar3 < 1) {
          uVar3 = 0;
        }
        else if (0x7fff < (int)uVar3) {
          uVar3 = 0x7fff;
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x28) >> 9 & 1) != 0) {
    return -(uint)((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) & uVar3;
  }
  return uVar3;
}

