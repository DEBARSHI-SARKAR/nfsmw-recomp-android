/* speed.exe 005277f0 FUN_005277f0; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 00519670 FUN_00519670
 * calls 004611c0 FUN_004611c0
 */

void __thiscall FUN_005277f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_800 [2048];
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = param_2;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = param_2;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  uVar2 = FUN_0056bc10(param_2);
  FUN_004611c0(auStack_800,uVar2);
  FUN_00519670(auStack_800);
  return;
}

