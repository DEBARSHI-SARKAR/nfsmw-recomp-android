/* speed.exe 005970e0 FUN_005970e0; analysis pseudocode, not buildable source.
 * calls 00596b20 FUN_00596b20
 * calls 00597020 FUN_00597020
 * calls 00596df0 FUN_00596df0
 * calls 00596d60 FUN_00596d60
 * calls 00596f30 FUN_00596f30
 * calls 00596bc0 FUN_00596bc0
 * calls 00596c50 FUN_00596c50
 * calls 005dbed0 FUN_005dbed0
 * calls 00596a60 FUN_00596a60
 * calls 00525220 FUN_00525220
 * calls 00596e80 FUN_00596e80
 * calls 00596cd0 FUN_00596cd0
 * calls 005969a0 FUN_005969a0
 * calls 005968e0 FUN_005968e0
 */

void __thiscall FUN_005970e0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d691760,0x4e706980);
  switch(*(undefined4 *)(param_1 + 0x1e0)) {
  case 0:
  case 2:
    uVar3 = 0x1135f776;
    goto LAB_0059713b;
  case 1:
  case 3:
    uVar2 = *(undefined4 *)(param_1 + 0x1f0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = 0x7b8f45df;
    break;
  case 4:
    uVar3 = 0xac23368c;
LAB_0059713b:
    uVar2 = *(undefined4 *)(param_1 + 0x1f0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    break;
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0x1f0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = 0xaef51e9d;
    break;
  default:
    goto switchD_00597104_default;
  }
  FUN_00525220(uVar1,uVar2,uVar3);
switchD_00597104_default:
  *(undefined4 *)(param_1 + 0x3c + param_2 * 0x18) = *(undefined4 *)(param_3 + 8);
  switch(*(undefined4 *)(param_1 + 0x1e0)) {
  case 0:
    FUN_005969a0();
    FUN_00596a60();
    if (((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) &&
       ((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0)) {
      FUN_00596b20();
      FUN_00596c50();
    }
    else {
      FUN_005968e0();
    }
    FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
    return;
  case 1:
  case 3:
    FUN_005969a0();
    FUN_00596a60();
    if (((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) &&
       ((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0)) {
      FUN_00596b20();
      FUN_00596bc0();
      FUN_00596c50();
      return;
    }
    break;
  case 2:
    FUN_00596cd0();
    FUN_00596d60();
    FUN_00596df0();
    if (((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) &&
       ((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0)) {
      FUN_00596b20();
      FUN_00596c50();
      return;
    }
    break;
  case 4:
    FUN_005969a0();
    FUN_00596a60();
    FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
    FUN_00596c50();
    return;
  case 5:
    FUN_00596e80();
    FUN_00596f30();
    FUN_00597020();
    return;
  default:
    return;
  }
  FUN_005968e0();
  return;
}

