/* speed.exe 004e8a40 FUN_004e8a40; analysis pseudocode, not buildable source.
 * calls 004e52c0 FUN_004e52c0
 */

void __fastcall FUN_004e8a40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2c) = 1;
  if (*(int *)(iVar2 + 0x34) == 0) {
    iVar2 = iVar2 + 0x48;
  }
  else {
    iVar2 = iVar2 + 0xd0;
  }
  iVar2 = *(int *)(iVar2 + 8);
  FUN_004e52c0(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14),
               *(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c),1,0,0xffffffff,1);
  iVar2 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar2 + 0x34) == 0) {
    iVar2 = iVar2 + 0x48;
  }
  else {
    iVar2 = iVar2 + 0xd0;
  }
  iVar2 = *(int *)(iVar2 + 8);
  FUN_004e52c0(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),
               *(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c),1,5,0xffffffff,1);
  iVar2 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar2 + 0x34) == 0) {
    iVar2 = iVar2 + 0x48;
  }
  else {
    iVar2 = iVar2 + 0xd0;
  }
  puVar1 = *(undefined4 **)(iVar2 + 8);
  FUN_004e52c0(*puVar1,puVar1[1],puVar1[2],puVar1[3],1,5,0xffffffff,1);
  return;
}

