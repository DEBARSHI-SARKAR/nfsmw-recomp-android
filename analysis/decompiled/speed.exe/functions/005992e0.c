/* speed.exe 005992e0 FUN_005992e0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0057fad0 FUN_0057fad0
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 0065f7a0 FUN_0065f7a0
 * calls 005902e0 FUN_005902e0
 * calls 0057fe80 FUN_0057fe80
 * calls 005796a0 FUN_005796a0
 */

int __fastcall FUN_005992e0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872db4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  iVar3 = 0xb;
  do {
    *puVar1 = 0;
    *(undefined1 *)((int)puVar1 + 7) = 3;
    *(undefined1 *)(puVar1 + 2) = 1;
    *(undefined1 *)((int)puVar1 + 9) = 1;
    *(undefined1 *)((int)puVar1 + 10) = 1;
    *(undefined1 *)((int)puVar1 + 0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined1 *)((int)puVar1 + 5) = 0;
    *(undefined1 *)(puVar1 + 1) = 2;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)((int)puVar1 + 0xd) = 3;
    puVar1 = puVar1 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_0057fe80();
  *(undefined1 *)(param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x245) = 0;
  *(undefined1 *)(param_1 + 0x267) = 0;
  *(undefined1 *)(param_1 + 0x256) = 0;
  *(undefined1 *)(param_1 + 0x29a) = 0;
  *(undefined1 *)(param_1 + 0x300) = 1;
  *(undefined1 *)(param_1 + 0x301) = 1;
  *(undefined1 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0x7d3;
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x304) = 1;
  *(undefined4 *)(param_1 + 0x308) = 1;
  *(undefined4 *)(param_1 + 0x318) = 0xae83b9db;
  *(undefined4 *)(param_1 + 0x31c) = 0x6a97b51f;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0x40;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined1 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  FUN_0057fad0();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  pvVar2 = _malloc(0x9cb8);
  local_4 = 0;
  pvVar4 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    FUN_005796a0();
    _eh_vector_constructor_iterator_
              ((void *)((int)pvVar2 + 0xba),4,0x96,(_func_void_void_ptr *)&LAB_00565fb0,
               (_func_void_void_ptr *)&DAT_00565fc0);
    FUN_005902e0();
    puVar1 = (undefined4 *)((int)pvVar2 + 0x9b0c);
    for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 *)((int)pvVar2 + 0x9c24) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9c28) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9c2c) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9c30) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9c34) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9c38) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9c3c) = 0;
    *(undefined4 *)((int)pvVar2 + 40000) = 0;
    puVar1 = (undefined4 *)((int)pvVar2 + 0x9c44);
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 *)((int)pvVar2 + 0x9c94) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9c98) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9c9c) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9ca0) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9ca4) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9ca8) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9cac) = 0;
    *(undefined4 *)((int)pvVar2 + 0x9cb0) = 0;
    pvVar4 = pvVar2;
  }
  local_4 = 0xffffffff;
  *(void **)(param_1 + 0x10) = pvVar4;
  iVar3 = FUN_0065f7a0(".\\GLOBAL\\INGAMEC.BUN");
  DAT_008f8718 = iVar3 != 0;
  ExceptionList = local_c;
  return param_1;
}

