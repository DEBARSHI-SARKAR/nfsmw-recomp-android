/* speed.exe 0086299f FUN_0086299f; analysis pseudocode, not buildable source.
 * calls 00862307 FUN_00862307
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ed960 FUN_007ed960
 * calls 008622cc FUN_008622cc
 */

undefined4 FUN_0086299f(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = 0;
  local_8 = 0;
  local_c = 0;
  FUN_007ec1bd();
  iVar1 = FUN_008622cc(param_1);
  if (iVar1 != 0) {
    local_8 = *(int *)(iVar1 + 0x10);
    iVar3 = *(int *)(iVar1 + 0x1c);
    local_c = *(int *)(iVar1 + 0xc);
    if ((iVar3 != 0) || (local_c == 0)) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
  }
  FUN_007ec1c8();
  if (((iVar1 == 0) || (local_8 != 0)) || (*(int *)(iVar1 + 0x10) == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    if (iVar3 == 0) {
      if (local_c == 0) {
        FUN_00862307();
      }
    }
    else {
      FUN_007ed960(iVar3);
    }
    uVar2 = 1;
  }
  return uVar2;
}

