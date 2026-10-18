/* speed.exe 006f26b0 FUN_006f26b0; analysis pseudocode, not buildable source.
 */

undefined4 * __thiscall FUN_006f26b0(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x40);
  if (puVar2 == *(undefined4 **)(param_1 + 0x44)) {
    return param_2;
  }
  do {
    cVar1 = (**(code **)*param_2)(*puVar2);
    if (cVar1 == '\0') {
      return param_2;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != *(undefined4 **)(param_1 + 0x44));
  return param_2;
}

