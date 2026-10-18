/* speed.exe 00426d10 FUN_00426d10; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00426d10(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 0xd4);
  if (piVar2 != *(int **)(param_1 + 0xd4)) {
    do {
      cVar1 = (**(code **)(*(int *)piVar2[2] + 0x8c))();
      if (cVar1 != '\0') {
        return 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0xd4));
  }
  return 0;
}

