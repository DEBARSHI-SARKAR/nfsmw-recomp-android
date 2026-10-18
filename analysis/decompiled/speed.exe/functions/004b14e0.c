/* speed.exe 004b14e0 FUN_004b14e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b14e0(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_2 + 1) = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x180) + 0x14) + 0x34);
  if (_DAT_00890da4 <=
      SQRT(*(float *)(iVar1 + 0x58) * *(float *)(iVar1 + 0x58) +
           *(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x54) +
           *(float *)(iVar1 + 0x50) * *(float *)(iVar1 + 0x50)) * _DAT_008967e0) {
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 2) = 1;
  }
  *(bool *)(param_2 + 3) = *(char *)(param_1 + 0xd8) != '\0';
  *(bool *)(param_2 + 4) = *(char *)(param_1 + 0x124) != '\0';
  if ((*(char *)(param_1 + 0x124) == '\0') || (*(char *)(param_1 + 0x40) == '\0')) {
    *(undefined1 *)(param_2 + 5) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 5) = 1;
  }
  if ((*(char *)(param_1 + 0x124) != '\0') && (*(char *)(param_1 + 0x8c) != '\0')) {
    *(undefined1 *)(param_2 + 6) = 1;
    return;
  }
  *(undefined1 *)(param_2 + 6) = 0;
  return;
}

