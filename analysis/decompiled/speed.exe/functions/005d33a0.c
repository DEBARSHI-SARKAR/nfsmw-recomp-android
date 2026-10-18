/* speed.exe 005d33a0 FUN_005d33a0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005d33a0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  piVar2 = (int *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  piVar3 = DAT_00925b34;
  if (piVar2 != (int *)*(int *)(param_1 + 4)) {
    do {
      DAT_00925b34 = piVar2;
      piVar2 = (int *)*DAT_00925b34;
      *DAT_00925b34 = (int)piVar3;
      piVar3 = DAT_00925b34;
    } while (piVar2 != *(int **)(param_1 + 4));
  }
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)DAT_00925b34;
    DAT_00925b34 = piVar2;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

