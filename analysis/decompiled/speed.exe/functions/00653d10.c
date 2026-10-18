/* speed.exe 00653d10 FUN_00653d10; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00653d10(int param_1,float param_2,float param_3)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = (uint)*(byte *)(param_1 + 7) * 4;
  pfVar1 = (float *)(iVar3 + *(int *)(param_1 + 0x10));
  if ((*pfVar1 == _DAT_00890968) && (*(float *)(iVar3 + *(int *)(param_1 + 0x30)) == _DAT_00890968))
  {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else {
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - *pfVar1;
  }
  *(float *)(param_1 + 8) = param_2 + *(float *)(param_1 + 8);
  *pfVar1 = param_2;
  *(float *)(*(int *)(param_1 + 0x30) + (uint)*(byte *)(param_1 + 7) * 4) = param_3;
  if (*(float *)(param_1 + 0x28) <
      param_3 - *(float *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 4)) {
    do {
      iVar3 = *(int *)(param_1 + 0x2c) * 4;
      if (_DAT_00890968 < *(float *)(iVar3 + *(int *)(param_1 + 0x30))) {
        *(float *)(param_1 + 8) =
             *(float *)(param_1 + 8) - *(float *)(*(int *)(param_1 + 0x10) + iVar3);
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 4) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + -1;
      }
      iVar3 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = iVar3;
      if ((int)(uint)*(byte *)(param_1 + 5) <= iVar3) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    } while (*(float *)(param_1 + 0x28) <
             param_3 - *(float *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 4));
  }
  bVar2 = *(char *)(param_1 + 7) + 1;
  *(byte *)(param_1 + 7) = bVar2;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 8) / (float)*(byte *)(param_1 + 6);
  if (*(byte *)(param_1 + 5) <= bVar2) {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}

