/* speed.exe 0041f840 FUN_0041f840; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_0041f840(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 0xd4);
  if (piVar3 != *(int **)(param_1 + 0xd4)) {
    do {
      piVar1 = (int *)piVar3[2];
      cVar2 = (**(code **)(*piVar1 + 0x8c))();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*piVar1 + 0x90))();
        if (cVar2 != '\0') {
          return 1;
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0xd4));
  }
  return 0;
}

