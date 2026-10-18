/* speed.exe 007ab370 FUN_007ab370; analysis pseudocode, not buildable source.
 * calls 00546400 FUN_00546400
 * calls 0045d3a0 FUN_0045d3a0
 * calls 005fab40 FUN_005fab40
 * calls 007aade0 FUN_007aade0
 */

void __thiscall FUN_007ab370(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 0xfc);
  iVar1 = FUN_0045d3a0(0);
  if (iVar1 < 1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x108);
  if (param_2 == -1) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x104) + 4);
    if (puVar2 == puVar4) {
      puVar2 = *(undefined4 **)(param_1 + 0x100);
    }
  }
  else {
    if (param_2 != 1) goto LAB_007ab3ce;
    puVar2 = (undefined4 *)**(int **)(param_1 + 0x104);
    if (puVar2 == puVar4) {
      puVar2 = (undefined4 *)*puVar4;
    }
  }
  *(undefined4 **)(param_1 + 0x104) = puVar2;
  *(undefined4 *)(param_1 + 0x108) = puVar2[2];
LAB_007ab3ce:
  if (iVar1 != *(int *)(param_1 + 0x108)) {
    if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0) ||
       ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) {
      puVar4 = (undefined4 *)(DAT_0091cf90 + 0x18c);
      uVar3 = FUN_005fab40();
      *puVar4 = uVar3;
    }
    FUN_00546400(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),0,0);
    FUN_007aade0();
  }
  return;
}

