/* speed.exe 00766640 FUN_00766640; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00766640(int param_1,uint param_2)

{
  uint in_EAX;
  ushort *puVar1;
  
  if (*(int *)(param_1 + 0x78) == 3) {
    in_EAX = 0;
    if (0 < *(int *)(param_1 + 0x2e0)) {
      puVar1 = *(ushort **)(param_1 + 0x2e4);
      do {
        if (param_2 == *puVar1) {
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
        in_EAX = in_EAX + 1;
        puVar1 = puVar1 + 1;
      } while ((int)in_EAX < *(int *)(param_1 + 0x2e0));
    }
  }
  return in_EAX & 0xffffff00;
}

