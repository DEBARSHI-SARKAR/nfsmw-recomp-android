/* speed.exe 00844b00 FUN_00844b00; analysis pseudocode, not buildable source.
 * calls 0078af20 thunk_FUN_004655f0
 * calls 00852cf0 FUN_00852cf0
 * calls 00852bf0 FUN_00852bf0
 * calls 0083e560 FUN_0083e560
 * calls 0083e360 FUN_0083e360
 * calls 0083e190 FUN_0083e190
 */

void FUN_00844b00(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x1834);
  if ((((iVar2 != 0) && (-1 < param_2)) && (param_2 < 0x1d)) && (param_3 != 0)) {
    uVar3 = FUN_0083e560(param_3);
    iVar4 = FUN_00852cf0(uVar3);
    while (iVar4 != 0) {
      uVar5 = FUN_0083e360(param_3,iVar4);
      thunk_FUN_004655f0(uVar5);
      iVar4 = FUN_00852cf0(uVar3);
    }
    FUN_00852bf0(uVar3);
    FUN_0083e190(param_3);
    puVar1 = (undefined4 *)(iVar2 + param_2 * 0x14);
    if (puVar1[1] == param_3) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      return;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  return;
}

