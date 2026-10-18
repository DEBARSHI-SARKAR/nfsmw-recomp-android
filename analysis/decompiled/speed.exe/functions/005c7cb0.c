/* speed.exe 005c7cb0 FUN_005c7cb0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __thiscall
FUN_005c7cb0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,byte param_5)

{
  if (((*(byte *)(param_1 + 4) & 4) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    FUN_004655f0(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(uint *)(param_1 + 4) = (param_5 & 1 | param_3 << 6) << 2 | *(uint *)(param_1 + 4) & 0xf9;
  *(undefined4 *)(param_1 + 8) = param_4;
  return;
}

