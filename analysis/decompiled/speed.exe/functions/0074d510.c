/* speed.exe 0074d510 FUN_0074d510; analysis pseudocode, not buildable source.
 * calls 00733ec0 FUN_00733ec0
 * calls 007ec1a7 FUN_007ec1a7
 * calls 005d29d0 FUN_005d29d0
 * calls 007ec196 FUN_007ec196
 */

int __thiscall FUN_0074d510(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880e4f;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)(param_1 + 8);
  iVar2 = 0x20;
  ExceptionList = &local_c;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0x3f800000;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0x3f800000;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0x3f800000;
    puVar1[1] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0x16] = 0;
    *(undefined1 *)((int)puVar1 + 0x6a) = 1;
    puVar1[0x17] = 0xbf800000;
    puVar1[0x18] = 0x3f800000;
    puVar1[0x19] = 0;
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    *(undefined1 *)((int)puVar1 + 0x69) = 0;
    puVar1 = puVar1 + 0x1d;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00733ec0();
  FUN_00733ec0();
  *(undefined4 *)(param_1 + 0xf68) = param_2;
  *(undefined4 *)(param_1 + 0xf6c) = 0;
  iVar2 = FUN_005d29d0(0x1c,0);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_007ec196();
  }
  local_4 = 0xffffffff;
  *(int *)(param_1 + 0xf90) = iVar2;
  FUN_007ec1a7();
  *(undefined4 *)(param_1 + 0xf98) = 0;
  *(undefined4 *)(param_1 + 0xf80) = 0;
  *(undefined4 *)(param_1 + 0xf8c) = 0;
  *(undefined4 *)(param_1 + 0xf88) = 0;
  *(undefined4 *)(param_1 + 0xf94) = 0;
  *(undefined1 *)(param_1 + 0xf9d) = 0;
  *(undefined1 *)(param_1 + 0xf9e) = 0;
  *(undefined1 *)(param_1 + 3999) = 0;
  *(undefined1 *)(param_1 + 4000) = 0;
  *(int *)(param_1 + 0xf7c) = param_1;
  *(undefined4 *)(param_1 + 0xf84) = 1;
  *(undefined1 *)(param_1 + 0xf9c) = 1;
  ExceptionList = local_c;
  return param_1;
}

