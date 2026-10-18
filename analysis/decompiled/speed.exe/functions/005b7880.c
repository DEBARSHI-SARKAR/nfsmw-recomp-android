/* speed.exe 005b7880 FUN_005b7880; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 005b59c0 FUN_005b59c0
 */

void __thiscall FUN_005b7880(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  for (iVar3 = *(int *)(param_1 + 0xe4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
    if (*(int *)(iVar3 + 0x20) != 0) goto LAB_005b78a0;
  }
  iVar3 = 0;
LAB_005b78a0:
  puVar2 = _malloc(0x20);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0xabadcafe;
    puVar2[2] = 0xabadcafe;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = &PTR_FUN_008a2c7c;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  puVar2[7] = iVar3;
  if (iVar3 == 0) {
    for (iVar3 = *(int *)(param_1 + 0x412c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      if ((*(byte *)(iVar3 + 0x14) & 2) != 0) {
        if (param_3 == 0) {
          puVar2[6] = *(undefined4 *)(iVar3 + 0x18);
        }
        else {
          puVar2[6] = param_3;
        }
        goto LAB_005b7939;
      }
    }
    if (param_3 == 0) {
      puVar2[6] = 0xff;
    }
    else {
      puVar2[6] = param_3;
    }
  }
  else {
    if (param_3 == 0) {
      param_3 = *(int *)(iVar3 + 0x20);
    }
    puVar2[6] = param_3;
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(iVar3 + 0x20) = 0;
  }
LAB_005b7939:
  puVar2[5] = param_2;
  FUN_005b59c0(param_4);
  iVar3 = *(int *)(param_1 + 0x412c);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x4128);
    puVar2[1] = iVar1;
    if (iVar1 != 0) {
      *(undefined4 **)(iVar1 + 8) = puVar2;
    }
    puVar2[2] = 0;
    *(undefined4 **)(param_1 + 0x4128) = puVar2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 4);
    puVar2[1] = iVar1;
    if (iVar1 != 0) {
      *(undefined4 **)(iVar1 + 8) = puVar2;
    }
    puVar2[2] = iVar3;
    *(undefined4 **)(iVar3 + 4) = puVar2;
  }
  if (*(int *)(param_1 + 0x412c) == iVar3) {
    *(undefined4 **)(param_1 + 0x412c) = puVar2;
  }
  *(int *)(param_1 + 0x4124) = *(int *)(param_1 + 0x4124) + 1;
  return;
}

