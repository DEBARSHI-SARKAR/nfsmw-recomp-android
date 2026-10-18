/* speed.exe 00544510 FUN_00544510; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 00518df0 FUN_00518df0
 * calls 0056db00 FUN_0056db00
 * calls 007f3ca0 FUN_007f3ca0
 * calls 00544370 FUN_00544370
 */

void __fastcall FUN_00544510(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0056db00();
  FUN_00460c70(param_1 + 0x40,uVar2);
  iVar1 = DAT_0091cb20;
  if (*(char *)(DAT_0091cb20 + 0x25) == '\0') {
    *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
  }
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x22) = 0;
  *(undefined1 *)(iVar1 + 0x1e) = 0;
  *DAT_0091cae0 = 0;
  *(undefined1 *)(iVar1 + 0x1a) = 1;
  FUN_007f3ca0(0,0xffffffff);
  FUN_00518df0();
  DAT_0091cbc8 = DAT_0091cbac & 0xf0;
  DAT_0091cbac = DAT_0091cbac & 0xffffff5f | 0x50;
  *(undefined1 *)(DAT_0091cb20 + 0x1a) = 1;
  FUN_007f3ca0(0,0xffffffff);
  FUN_00544370(0xc);
  return;
}

