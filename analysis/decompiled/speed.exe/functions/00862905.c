/* speed.exe 00862905 FUN_00862905; analysis pseudocode, not buildable source.
 * calls 00862307 FUN_00862307
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ed9a6 FUN_007ed9a6
 * calls 008622cc FUN_008622cc
 */

undefined4 FUN_00862905(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_007ec1bd();
  iVar1 = FUN_008622cc(param_1);
  if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 0x10), iVar3 == 0)) {
    *(undefined4 *)(iVar1 + 0xc) = 1;
  }
  FUN_007ec1c8();
  if ((iVar1 == 0) || (iVar3 != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    while (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_007ed9a6(*(undefined4 *)(iVar1 + 0x1c));
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(iVar1 + 0x2c) - *(int *)(iVar1 + 8);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + 8);
      }
      uVar2 = 1;
    }
    else {
      if (param_2 != (int *)0x0) {
        *param_2 = 0;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
      uVar2 = 0xffffffff;
    }
    FUN_00862307();
  }
  return uVar2;
}

