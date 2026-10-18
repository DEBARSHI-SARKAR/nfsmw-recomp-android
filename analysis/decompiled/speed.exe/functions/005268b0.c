/* speed.exe 005268b0 FUN_005268b0; analysis pseudocode, not buildable source.
 * calls 0056db00 FUN_0056db00
 * calls 007f3ca0 FUN_007f3ca0
 * calls 00560dc0 FUN_00560dc0
 * calls 006cbe20 FUN_006cbe20
 * calls 007f3c8a FUN_007f3c8a
 * calls 00460c70 FUN_00460c70
 * calls 00461220 FUN_00461220
 * calls 00660100 FUN_00660100
 * calls 0064c9b0 FUN_0064c9b0
 * calls 0057fd90 FUN_0057fd90
 * calls 00460ed0 FUN_00460ed0
 */

void __fastcall FUN_005268b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puStack_20;
  undefined1 local_10 [4];
  char cStack_c;
  
  puStack_20 = (undefined1 *)0x5268c5;
  puStack_20 = (undefined1 *)FUN_0056db00();
  FUN_00460c70(local_10);
  puStack_20 = (undefined1 *)0x0;
  uVar1 = FUN_0057fd90();
  if (DAT_0091cb20 != 0) {
    *(undefined1 **)(DAT_0091cb20 + 0x3c) = local_10;
    *(undefined4 *)(DAT_0091cb20 + 0xbc) = 0;
    *(undefined4 *)(DAT_0091cb20 + 0x44) = 0;
    *(undefined4 *)(DAT_0091cb20 + 0xc0) = uVar1;
  }
  puStack_20 = local_10;
  uVar1 = FUN_006cbe20();
  FUN_00460ed0(param_1 + 0x5c,uVar1);
  FUN_00461220(&DAT_0091c2b8,local_10,0x10);
  if ((*(int *)(param_1 + 0xcc) == 0) || (((byte)DAT_0091cbac & 0xf0) != 0xa0)) {
    *(undefined1 *)(param_1 + 0x1a) = 0;
    uVar1 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    uVar1 = 0;
  }
  puStack_20 = (undefined1 *)0xffffffff;
  FUN_007f3ca0(uVar1);
  FUN_007f3ca0(0,1);
  if (cStack_c == '\0') {
    *(undefined1 *)(param_1 + 0x27) = 1;
  }
  else {
    DAT_0091cbc8 = DAT_0091cbac & 0xf0;
    DAT_0091cbac = DAT_0091cbac & 0xffffffaf | 0xa0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x40) = 4;
  *(undefined2 *)(param_1 + 0x48) = 0;
  iVar2 = FUN_0064c9b0();
  if (iVar2 == 0) {
    FUN_007f3c8a(cStack_c != '\0',0,0,&puStack_20,0xffffffff);
  }
  if (cStack_c == '\0') {
    iVar2 = FUN_0064c9b0();
    if (iVar2 != 0) {
      uVar1 = FUN_00660100(8,9);
      FUN_00560dc0(uVar1);
    }
  }
  return;
}

