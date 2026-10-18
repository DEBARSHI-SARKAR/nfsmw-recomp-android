/* speed.exe 00486190 FUN_00486190; analysis pseudocode, not buildable source.
 * calls 007c6100 _sprintf
 * calls 00652ad0 _malloc
 */

char * __thiscall
FUN_00486190(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,float param_6)

{
  void *pvVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = *param_5;
  *(undefined4 *)(param_1 + 0x18) = param_5[1];
  _sprintf(param_1,"%s",param_2);
  *(float *)(param_1 + 0x20) = (float)param_5[1] / param_6;
  pvVar1 = _malloc(*(int *)(param_1 + 0x10) << 2);
  *(void **)(param_1 + 0x24) = pvVar1;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x24) + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x1c) = param_4;
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  return param_1;
}

