/* speed.exe 005231a0 FUN_005231a0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_005231a0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *(undefined4 **)(param_1 + 0x34) = *(undefined4 **)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  do {
    piVar1 = *(int **)(param_1 + 0x34);
    if (piVar1[2] == param_2) {
      return CONCAT31((int3)((uint)piVar1 >> 8),1);
    }
    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 == (undefined4 *)(param_1 + 0x2c)) {
      puVar2 = *(undefined4 **)(param_1 + 0x2c);
    }
    *(undefined4 **)(param_1 + 0x34) = puVar2;
  } while (puVar2 != *(undefined4 **)(param_1 + 0x2c));
  return (uint)puVar2 & 0xffffff00;
}

