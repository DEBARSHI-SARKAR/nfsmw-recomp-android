/* speed.exe 004e8930 FUN_004e8930; analysis pseudocode, not buildable source.
 * calls 004e52c0 FUN_004e52c0
 */

void __fastcall FUN_004e8930(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x228);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = 1;
    if (*(int *)(iVar1 + 0x34) == 0) {
      iVar1 = iVar1 + 0x48;
    }
    else {
      iVar1 = iVar1 + 0xd0;
    }
    iVar1 = *(int *)(iVar1 + 8);
    FUN_004e52c0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),
                 *(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c),1,0,0,1);
    iVar1 = *(int *)(param_1 + 0x18);
    if (*(int *)(iVar1 + 0x34) == 0) {
      iVar1 = iVar1 + 0x48;
    }
    else {
      iVar1 = iVar1 + 0xd0;
    }
    uVar2 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
    if (*(int *)(iVar1 + 0x34) == 0) {
      iVar1 = iVar1 + 0x48;
    }
    else {
      iVar1 = iVar1 + 0xd0;
    }
    iVar1 = *(int *)(iVar1 + 8);
    FUN_004e52c0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),
                 *(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c),1,0,0xffffffff,1);
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = 1;
    if (*(int *)(iVar1 + 0x34) == 0) {
      iVar1 = iVar1 + 0x48;
      uVar2 = 0xffffffff;
    }
    else {
      iVar1 = iVar1 + 0xd0;
      uVar2 = 0xffffffff;
    }
  }
  iVar1 = *(int *)(iVar1 + 8);
  FUN_004e52c0(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24),
               *(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x2c),1,5,uVar2,1);
  return;
}

