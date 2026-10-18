/* speed.exe 005bcb70 FUN_005bcb70; analysis pseudocode, not buildable source.
 * calls 005b9070 FUN_005b9070
 * calls 00652ac0 _malloc
 */

undefined4 __thiscall FUN_005bcb70(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int *)(iVar1 + 0x1c) == param_2) goto LAB_005bcbf6;
  }
  puVar2 = _malloc(0x20);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0xabadcafe;
    puVar2[2] = 0xabadcafe;
    *puVar2 = &PTR_FUN_008a2dec;
    puVar2[3] = &PTR_LAB_008a2c18;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[4] = 0;
    puVar2[7] = param_2;
  }
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 8);
    puVar2[1] = iVar1;
    if (iVar1 != 0) {
      *(undefined4 **)(iVar1 + 8) = puVar2;
    }
    puVar2[2] = 0;
    *(undefined4 **)(param_1 + 8) = puVar2;
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined4 **)(param_1 + 0xc) = puVar2;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
LAB_005bcbf6:
  uVar3 = FUN_005b9070();
  return uVar3;
}

