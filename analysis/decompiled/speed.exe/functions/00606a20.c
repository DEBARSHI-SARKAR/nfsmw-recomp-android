/* speed.exe 00606a20 FUN_00606a20; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00606a20(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int in_EAX;
  int *piVar2;
  
  *(int *)(in_EAX + 8) = *(int *)(in_EAX + 0x1c) + (*(int *)(in_EAX + 8) - param_2 >> 3) * 8;
  for (puVar1 = *(undefined4 **)(in_EAX + 0x48); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[2] = *(int *)(in_EAX + 0x1c) + (puVar1[2] - param_2 >> 3) * 8;
  }
  piVar2 = *(int **)(in_EAX + 0x28);
  if (piVar2 <= *(int **)(in_EAX + 0x14)) {
    do {
      piVar2[1] = *(int *)(in_EAX + 0x1c) + (piVar2[1] - param_2 >> 3) * 8;
      *piVar2 = *(int *)(in_EAX + 0x1c) + (*piVar2 - param_2 >> 3) * 8;
      piVar2 = piVar2 + 6;
    } while (piVar2 <= *(int **)(in_EAX + 0x14));
  }
  *(undefined4 *)(in_EAX + 0xc) = **(undefined4 **)(in_EAX + 0x14);
  return;
}

