/* speed.exe 00419200 FUN_00419200; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00419200(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != puVar2 + *(int *)(param_1 + 0x20)) {
    do {
      piVar1 = (int *)(**(code **)(*(int *)*puVar2 + 0x44))();
      if (*piVar1 == DAT_0092c4f4) {
        return 1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 4));
  }
  return 0;
}

