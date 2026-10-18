/* speed.exe 006b8910 FUN_006b8910; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006b8910(int param_1,uint param_2,char param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + -0x58) + 0x2c))();
  if (cVar1 != '\0') {
    if (param_3 != '\0') {
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | param_2;
      return;
    }
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & ~param_2;
  }
  return;
}

