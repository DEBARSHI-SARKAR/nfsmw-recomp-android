/* speed.exe 004cfac0 FUN_004cfac0; analysis pseudocode, not buildable source.
 * calls 004cf720 FUN_004cf720
 * calls 004ca1a0 FUN_004ca1a0
 */

void __thiscall FUN_004cfac0(int param_1,int param_2)

{
  undefined *puVar1;
  
  FUN_004ca1a0();
  if (param_2 < 0x2f) {
    puVar1 = &DAT_009128c0 + param_2 * 0x68;
    do {
      FUN_004cf720(puVar1);
      FUN_004ca1a0();
      puVar1 = puVar1 + 0x68;
    } while ((int)puVar1 < 0x913bd8);
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
  return;
}

