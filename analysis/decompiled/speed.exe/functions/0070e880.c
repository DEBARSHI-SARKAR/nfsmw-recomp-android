/* speed.exe 0070e880 FUN_0070e880; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0070d570 FUN_0070d570
 * calls 0070d3e0 FUN_0070d3e0
 * calls 0070d4b0 FUN_0070d4b0
 * calls 004cb270 FUN_004cb270
 * calls 004b1bc0 FUN_004b1bc0
 * calls 0070d2f0 FUN_0070d2f0
 */

int __thiscall FUN_0070e880(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  
  sVar3 = 0;
  uVar1 = FUN_004cb270(*(undefined2 *)(param_2 + 0xc));
  iVar4 = 0;
  uVar2 = FUN_007c4b80();
  if (uVar2 < *(uint *)(param_1 + 0x24)) goto LAB_0070e8e0;
  iVar4 = FUN_004b1bc0(param_2,uVar1,param_3);
joined_r0x0070e8d9:
  do {
    if (iVar4 != 0) {
      return iVar4;
    }
LAB_0070e8e0:
    if (sVar3 < 0) {
      return iVar4;
    }
    switch(sVar3) {
    case 0:
      FUN_0070d2f0();
      break;
    case 1:
      FUN_0070d570();
      break;
    case 2:
      FUN_0070d3e0();
      break;
    case 3:
      FUN_0070d4b0();
      break;
    default:
      goto switchD_0070e8ed_default;
    }
    sVar3 = sVar3 + 1;
    uVar2 = FUN_007c4b80();
    if (*(uint *)(param_1 + 0x24) <= uVar2) {
      iVar4 = FUN_004b1bc0(param_2,uVar1,param_3);
    }
  } while( true );
switchD_0070e8ed_default:
  sVar3 = -1;
  goto joined_r0x0070e8d9;
}

