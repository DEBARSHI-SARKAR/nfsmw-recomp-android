/* speed.exe 004190c0 FUN_004190c0; analysis pseudocode, not buildable source.
 * calls 005eda20 FUN_005eda20
 */

void __fastcall FUN_004190c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_8;
  int local_4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x60);
  iVar2 = 0;
  iVar3 = 0;
  local_8 = 0;
  local_4 = 0;
  if (puVar4 != puVar4 + *(int *)(param_1 + 0x68)) {
    do {
      piVar1 = (int *)(**(code **)(*(int *)*puVar4 + 0x44))();
      if (*piVar1 == DAT_0092c4f4) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar2 = iVar2 + 1;
      }
      puVar4 = puVar4 + 1;
      local_8 = iVar2;
      local_4 = iVar3;
    } while (puVar4 != (undefined4 *)(*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68) * 4));
  }
  if ((DAT_0091e00c != 0) && (*(char *)(param_1 + 0xf0) != '\0')) {
    FUN_005eda20("cops_in_pursuit",(float)local_8);
    FUN_005eda20("helis_in_pursuit",(float)local_4);
  }
  return;
}

