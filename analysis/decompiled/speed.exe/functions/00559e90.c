/* speed.exe 00559e90 FUN_00559e90; analysis pseudocode, not buildable source.
 * calls 00543cc0 FUN_00543cc0
 * calls 00460c70 FUN_00460c70
 * calls 00559e40 FUN_00559e40
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00518df0 FUN_00518df0
 * calls 0056db00 FUN_0056db00
 * calls 007f3ca0 FUN_007f3ca0
 */

void __fastcall FUN_00559e90(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(char *)(DAT_0091cb20 + 0x20) == '\0') && (*(char *)(DAT_0091cb20 + 0x22) == '\0')) {
    if (((byte)DAT_0091cbac & 0xf0) != 0xb0) {
      DAT_0091cbac = DAT_0091cbac & 0xfffffff1 | 1;
    }
    DAT_0091cbc8 = DAT_0091cbac & 0xf0;
    DAT_0091cbac = DAT_0091cbac & 0xffffff5f | 0x50;
  }
  uVar3 = FUN_0056db00();
  FUN_00460c70(param_1 + 0x40,uVar3);
  if (((*(char *)(DAT_0091cb20 + 0x20) == '\0') && (*(char *)(DAT_0091cb20 + 0x22) == '\0')) &&
     (*(char *)(DAT_0091cb20 + 0x24) == '\0')) {
    *(undefined1 *)(DAT_0091cb20 + 0x25) = 1;
    FUN_00559e40(*(undefined4 *)(DAT_0091cb20 + 0x30));
  }
  else {
    puVar1 = (undefined4 *)(DAT_0091cb20 + 0x30);
    if (*(int *)(DAT_0091cb20 + 0x30) != 0) {
      thunk_FUN_007c7250(*(int *)(DAT_0091cb20 + 0x30));
      *puVar1 = 0;
    }
    FUN_00543cc0((-(uint)(*(char *)(DAT_0091cb20 + 0x24) != '\0') & 0xaec089e5) + 0xf1f3b4ba,
                 0xa000000);
    *(undefined1 *)(DAT_0091cb20 + 0x24) = 0;
  }
  iVar2 = DAT_0091cb20;
  if (*(char *)(DAT_0091cb20 + 0x25) == '\0') {
    *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
  }
  *(undefined1 *)(iVar2 + 0x20) = 0;
  *(undefined1 *)(iVar2 + 0x22) = 0;
  *(undefined1 *)(iVar2 + 0x1e) = 0;
  *DAT_0091cae0 = 0;
  *(undefined1 *)(iVar2 + 0x1a) = 1;
  FUN_007f3ca0(0,0xffffffff);
  FUN_00518df0();
  return;
}

