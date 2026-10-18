/* speed.exe 0069c540 FUN_0069c540; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00625970 FUN_00625970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0069c540(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087c41f;
  local_c = ExceptionList;
  if (*(float *)(param_1 + 0x3c) < _DAT_0089096c) {
    ExceptionList = &local_c;
    cVar2 = (**(code **)(*(int *)(param_1 + -0x4c) + 0x2c))();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_1 + 0x4c);
      *(uint *)(param_1 + 0x4c) = uVar1 & 0xfffffffe | 6;
      *(uint *)(param_1 + 0x4c) = uVar1 & 0xfffffff6 | 0x36;
      *(uint *)(param_1 + 0x4c) = uVar1 & 0xffffffb6 | 0x1b6;
      *(uint *)(param_1 + 0x4c) = uVar1 & 0xfffffdb6 | 0xdb6;
      *(uint *)(param_1 + 0x4c) = uVar1 & 0xffffedb6 | 0x6db6;
      *(uint *)(param_1 + 0x4c) = uVar1 & 0xffff6db6 | 0x36db6;
      *(uint *)(param_1 + 0x4c) = uVar1 & 0xfffb6db6 | 0x1b6db6;
      *(uint *)(param_1 + 0x4c) = uVar1 & 0xffdb6db6 | 0xdb6db6;
      *(uint *)(param_1 + 0x4c) = uVar1 & 0xfedb6db6 | 0x6db6db6;
      *(uint *)(param_1 + 0x4c) = uVar1 & 0xf6db6db6 | 0x36db6db6;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    iVar3 = FUN_00627400(0xc);
    uStack_4 = 0;
    if (iVar3 != 0) {
      FUN_00625970(*(undefined4 *)(*(int *)(param_1 + -0x18) + 8));
    }
  }
  ExceptionList = local_c;
  return;
}

