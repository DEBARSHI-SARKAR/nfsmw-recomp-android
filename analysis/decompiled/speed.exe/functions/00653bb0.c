/* speed.exe 00653bb0 FUN_00653bb0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00653bb0(int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(param_1 + 5) != '\0') {
    do {
      *(float *)(*(int *)(param_1 + 0x10) + iVar1 * 4) = param_2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 5));
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 5);
  *(float *)(param_1 + 0xc) = param_2;
  *(float *)(param_1 + 8) = (float)*(byte *)(param_1 + 5) * param_2;
  return;
}

