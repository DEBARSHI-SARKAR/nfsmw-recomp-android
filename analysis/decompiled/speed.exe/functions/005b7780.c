/* speed.exe 005b7780 FUN_005b7780; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 */

void __thiscall
FUN_005b7780(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = _malloc(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0xabadcafe;
    puVar3[2] = 0xabadcafe;
    *puVar3 = &PTR_FUN_008a2c90;
  }
  puVar3[5] = param_4;
  puVar3[6] = param_2;
  puVar3[3] = param_3;
  puVar3[4] = param_5;
  puVar3[7] = param_6;
  if (*(char *)(param_1 + 0x524e) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x108) + 0x54))(param_2,param_3,param_4,param_5,param_6);
  }
  iVar1 = *(int *)(param_1 + 0x411c);
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x4118);
    puVar3[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar3;
    }
    puVar3[2] = 0;
    *(undefined4 **)(param_1 + 0x4118) = puVar3;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
    puVar3[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar3;
    }
    puVar3[2] = iVar1;
    *(undefined4 **)(iVar1 + 4) = puVar3;
  }
  if (*(int *)(param_1 + 0x411c) == iVar1) {
    *(undefined4 **)(param_1 + 0x411c) = puVar3;
  }
  *(int *)(param_1 + 0x4114) = *(int *)(param_1 + 0x4114) + 1;
  return;
}

