/* speed.exe 00614ea0 FUN_00614ea0; analysis pseudocode, not buildable source.
 * calls 00613eb0 FUN_00613eb0
 * calls 006128d0 FUN_006128d0
 */

void FUN_00614ea0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (1 < param_2) {
    FUN_006128d0(param_1,param_2,(*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 3) + -1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2 * -8 + 8;
    return;
  }
  if (param_2 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    *puVar1 = 4;
    uVar2 = FUN_00613eb0(param_1,0,0);
    puVar1[1] = uVar2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  }
  return;
}

