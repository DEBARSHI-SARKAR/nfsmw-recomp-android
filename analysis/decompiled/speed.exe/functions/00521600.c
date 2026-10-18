/* speed.exe 00521600 FUN_00521600; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 */

void __fastcall FUN_00521600(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = 0xf7b1f3f3;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (*(int *)(DAT_0091ca68 + 0x13c) == -1) {
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x60) = 0xbb298a80;
  }
  else {
    uVar2 = FUN_00573140("ON_CNTRY_%s",&DAT_00899f78 + *(int *)(DAT_0091ca68 + 0x13c) * 3);
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x60) = uVar2;
  }
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
  if (DAT_0091dd08 != (undefined4 *)0x0) {
    (**(code **)*DAT_0091dd08)(iVar1);
  }
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  return;
}

