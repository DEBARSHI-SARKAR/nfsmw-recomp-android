/* speed.exe 004a99c0 FUN_004a99c0; analysis pseudocode, not buildable source.
 * calls 0048ddf0 FUN_0048ddf0
 * calls 004a6a70 FUN_004a6a70
 * calls 0049aab0 FUN_0049aab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a99c0(int param_1,int param_2)

{
  int *piVar1;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  float local_c;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x68) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x54) != param_2) {
    FUN_004a6a70(0,0,&local_20);
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x30) * 4);
    FUN_004a6a70((float)(int)(*(ushort *)(*piVar1 + 4) - 1),
                 (float)(int)(*(ushort *)(piVar1[1] + 4) - 1),local_28);
    FUN_0049aab0(&local_20,local_28,local_10);
    if (*(int *)(param_1 + 0x54) + -1 == param_2) {
      local_c = local_c * _DAT_00890da8;
    }
    FUN_0048ddf0((undefined4 *)(param_1 + 0x58),local_10,&local_20);
    *(undefined4 *)(param_1 + 0x58) = local_20;
    *(undefined4 *)(param_1 + 0x5c) = local_1c;
    *(undefined4 *)(param_1 + 0x60) = local_18;
    *(undefined4 *)(param_1 + 100) = local_14;
    *(int *)(param_1 + 0x54) = param_2;
  }
  return;
}

