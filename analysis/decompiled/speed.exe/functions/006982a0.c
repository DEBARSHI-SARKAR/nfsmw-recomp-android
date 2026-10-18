/* speed.exe 006982a0 FUN_006982a0; analysis pseudocode, not buildable source.
 * calls 00487310 FUN_00487310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006982a0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = **(int **)(param_1 + 0x78);
  cVar3 = (**(code **)(*(int *)(param_2 + 0x60) + 0x34))();
  if (cVar3 == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x84) + 0xfd) == '\0') {
      if ((*(byte *)(iVar1 + 0x1c) >> 1 & 1) == 0) goto LAB_006982f8;
      *(undefined4 *)(param_4 + 0xcc) = *(undefined4 *)(param_1 + 0x10c);
    }
    else {
      *(undefined4 *)(param_4 + 0xcc) = 0;
    }
    *(undefined1 *)(param_4 + 200) = 1;
  }
LAB_006982f8:
  iVar2 = *(int *)(param_1 + 0x84);
  *(undefined4 *)(param_4 + 0xbc) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(param_4 + 0xc0) = *(undefined4 *)(iVar2 + 0x34);
  *(undefined4 *)(param_4 + 0xc4) = *(undefined4 *)(iVar2 + 0x38);
  if (_DAT_00890968 < *(float *)(*(int *)(param_1 + 0x84) + 0x3c)) {
    FUN_00487310(*(float *)(param_4 + 0xd0) * *(float *)(*(int *)(param_1 + 0x84) + 0x3c));
  }
  if (*(char *)(iVar1 + 0x1c) < '\0') {
    *(undefined1 *)(param_4 + 0x110) = 1;
  }
  return;
}

