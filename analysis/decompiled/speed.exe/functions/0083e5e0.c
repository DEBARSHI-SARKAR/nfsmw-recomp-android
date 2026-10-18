/* speed.exe 0083e5e0 FUN_0083e5e0; analysis pseudocode, not buildable source.
 */

void FUN_0083e5e0(int param_1,int param_2,int param_3)

{
  if (param_2 == 0x6d776964) {
    if (param_3 < 0x201) {
      *(int *)(param_1 + 200) = param_3 + 0xe;
      return;
    }
  }
  else {
    if (param_2 == 0x6d696e70) {
      *(int *)(param_1 + 0xd0) = param_3;
      return;
    }
    if (param_2 == 0x6d6f7574) {
      *(int *)(param_1 + 0xcc) = param_3;
      return;
    }
    if (param_2 == 0x61647666) {
      *(int *)(param_1 + 0xd4) = param_3;
    }
  }
  return;
}

