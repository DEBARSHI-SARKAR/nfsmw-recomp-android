/* speed.exe 005e30a0 FUN_005e30a0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005e30a0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_0092cf5c;
  if (DAT_0092cf5c != DAT_0092cf5c + DAT_0092cf64) {
    do {
      piVar2 = (int *)(**(code **)(*(int *)*puVar3 + 4))();
      if ((piVar2 != (int *)0x0) && (cVar1 = (**(code **)(*piVar2 + 0x24))(), cVar1 == '\0')) {
        (**(code **)(*piVar2 + 8))();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != DAT_0092cf5c + DAT_0092cf64);
  }
  *(undefined4 *)(param_1 + 0x1958) = 0;
  return;
}

