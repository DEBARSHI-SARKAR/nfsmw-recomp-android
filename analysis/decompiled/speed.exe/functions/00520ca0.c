/* speed.exe 00520ca0 FUN_00520ca0; analysis pseudocode, not buildable source.
 * calls 0056e360 FUN_0056e360
 * calls 00515d70 FUN_00515d70
 * calls 00460c50 FUN_00460c50
 */

void __fastcall FUN_00520ca0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar2 + 0x60) = 0xb34ab032;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  uVar1 = FUN_0056e360();
  iVar2 = FUN_00460c50(uVar1);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
      *(undefined4 *)(iVar2 + 0x60) = 0xbb298a80;
      if (DAT_0091dd08 != (undefined4 *)0x0) {
        (**(code **)*DAT_0091dd08)(iVar2);
      }
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
      return;
    }
  }
  else {
    FUN_00515d70(*(undefined4 *)(param_1 + 0x30),"*******");
  }
  return;
}

