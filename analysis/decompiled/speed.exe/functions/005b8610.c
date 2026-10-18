/* speed.exe 005b8610 FUN_005b8610; analysis pseudocode, not buildable source.
 * calls 005b7780 FUN_005b7780
 */

void __thiscall FUN_005b8610(int param_1,int param_2,char param_3)

{
  if (param_3 != '\0') {
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_005b7780(0x55d1e635,0,param_1,*(int *)(param_1 + 0x8c),0);
      FUN_005b7780(0x55d1e635,*(undefined4 *)(param_1 + 0x8c),param_1,0xfffffffb,0);
    }
    if (param_2 != 0) {
      FUN_005b7780(0xabc08912,0,param_1,param_2,0);
      FUN_005b7780(0xabc08912,param_2,param_1,0xfffffffb,0);
    }
    *(int *)(param_1 + 0x8c) = param_2;
    return;
  }
  *(int *)(param_1 + 0x8c) = param_2;
  return;
}

