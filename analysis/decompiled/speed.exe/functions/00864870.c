/* speed.exe 00864870 FUN_00864870; analysis pseudocode, not buildable source.
 */

uint FUN_00864870(int param_1,int param_2)

{
  if (param_2 == 0x69646c65) {
    return (uint)(*(int *)(param_1 + 0x238) == 0);
  }
  if (param_2 == 0x74696d65) {
    return *(uint *)(param_1 + 0x230);
  }
  return 0xffffffff;
}

